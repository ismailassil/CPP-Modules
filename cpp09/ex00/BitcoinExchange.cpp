/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 06:57:28 by iassil            #+#    #+#             */
/*   Updated: 2024/10/16 11:28:42 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() { }

BitcoinExchange::BitcoinExchange( const char* database, const char* input ) {
	std::ifstream	database_fd(database);
	this->input = input;

	if ( database_fd.fail() )
		throw "[database] file not found!";
	if ( database_fd.peek() == EOF )
		throw "[database] file is empty";

	this->input_file.open(input);

	if ( this->input_file.fail() ) {
		database_fd.close();
		throw "[input] file not found!";
	}
	
	if ( this->input_file.peek() == EOF ) {
		this->input_file.close();
		database_fd.close();
		throw "[input] file is empty";
	}

	std::string		str;
	while ( std::getline(database_fd, str) ) {
		if ( str.empty() ) {
			this->input_file.close();
			database_fd.close();
			throw "[database] file has an empty line";
		}
		this->database.insert(str);
	}

	database_fd.close();
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& obj ) : database(obj.database), input(obj.input) {

	this->input_file.open(obj.input);

	if ( this->input_file.fail() ) {
		throw "[input] file not found!";
	}

	if ( this->input_file.peek() == EOF ) {
		this->input_file.close();
		throw "[input] file is empty";
	}
}

BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange& obj ) {
	if ( &obj != this ) {
		database = obj.database;

		this->input = obj.input;
		this->input_file.open(obj.input);
		if ( this->input_file.fail() ) {
			throw "[input] file not found!";
		}

		if ( this->input_file.peek() == EOF ) {
			this->input_file.close();
			throw "[input] file is empty";
		}
	}
	return ( *this );
}

BitcoinExchange::~BitcoinExchange() {
	database.clear();
	this->input_file.close();
}

void	BitcoinExchange::execute( void ) {
	std::string	str;

	std::getline(this->input_file, str);
	if ( str != "date | value" ) {
		std::cout << "Error: Bad input"	<< std::endl;
		return ;
	}

	while ( std::getline(this->input_file, str) ) {
		std::string	out_str = str;

		if ( str.empty() ) {
			std::cout << BAD_INPUT << "[" << out_str << "]" << std::endl;
			continue ;
		}
		std::string	date = getDate(str);
		if (date.empty()) {
			std::cout << BAD_INPUT << "[" << out_str << "]" << std::endl;
			continue ;	
		}
		std::string	price = getPrice(str);
		if ( price == BAD_INPUT ) {
			std::cout << BAD_INPUT << "[" << out_str << "]" << std::endl;
			continue ;
		}
		if ( price == TOO_LARGE || price == NOT_POSITIVE ) {
			std::cout << price << std::endl;
			continue ;
		}
		
		double	exchangeRate = getExchangeRate(date);
		if ( exchangeRate == -1 ) {
			std::cout << DATE_NOT_FOUND << std::endl;
			continue ;
		} else if ( exchangeRate == -2 ) {
			std::cout << BAD_INPUT << date << std::endl;
			continue ;
		}

		char*	end;
		double price_vl	= strtod(price.c_str(), &end);
		double total	= exchangeRate * price_vl;
		(void)end;

		std::cout << date + " => " + price + " = " << total << std::endl;
	}
}

std::string	BitcoinExchange::getDate( std::string& str ) {
	if ( str.length() < 10 )
		return ( "" );
	for ( size_t i = 0; i < str.length(); i++ ) {
		char*	end;
		int		year	= strtol(str.c_str(), &end, 10);
		int		month	= strtol(str.c_str() + 5, &end, 10);
		int		day		= strtol(str.c_str() + 8, &end, 10);

		(void)end, (void)year;
		if ( month > 12 || month <= 0 || day > 31 || day <= 0 ) {
			return ( "" );
		}
	}
	return ( str.substr(0, 10) );
}

std::string	BitcoinExchange::getPrice( std::string& str ) {
	std::string	re_str = str;

	if ( str.length() < 13 )
		return ( BAD_INPUT );
	str = str.substr(13);
	if ( str.empty() || std::isspace( str.front() ) )
		return ( BAD_INPUT );

	char*	end;
	double	price = strtod(str.c_str(), &end);
	if ( str == end || *end != '\0' )
		return ( BAD_INPUT );
	if ( price > MAX_VALUE )
		return ( TOO_LARGE );
	if ( price < MIN_VALUE )
		return ( NOT_POSITIVE );
	
	std::stringstream ss;
	ss << price;

	return ( ss.str() );
}

double		BitcoinExchange::getExchangeRate( std::string& date ) {
	std::set<std::string>::iterator it;

	it = std::upper_bound(this->database.begin(), this->database.end(), date);
	if ( it != this->database.begin() ) {
		const char*	_exR;
		if ( (*it).substr(0, 10) == date )
			_exR = (*it).c_str() + 11;
		else
			_exR = (*--it).c_str() + 11;
		char*	end;
		double 	exchangeRate = strtod(_exR, &end);

		return ( exchangeRate );
	}
	return ( -1 );
}
