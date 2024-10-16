/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 06:57:30 by iassil            #+#    #+#             */
/*   Updated: 2024/10/16 11:12:01 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream> // IWYU pragma: keep
#include <fstream>
#include <set>
#include <sstream> // IWYU pragma: keep

#define MAX_VALUE		1000
#define MIN_VALUE		0
#define BAD_INPUT		"Error: Bad input => "
#define NOT_POSITIVE	"Error: not a positive number."
#define TOO_LARGE		"Error: number too large."
#define DATE_NOT_FOUND	"Error: Date not found in Database."

class BitcoinExchange {
	private:
		std::set<std::string>	database;
		std::string				input;
		std::ifstream			input_file;

		BitcoinExchange();

		std::string	getDate( std::string& str );
		std::string	getPrice( std::string& str );
		double		getExchangeRate( std::string& date );
	
	public:
		BitcoinExchange( const char* database, const char* input );
		BitcoinExchange( const BitcoinExchange& obj );
		BitcoinExchange& operator=( const BitcoinExchange& obj );
		~BitcoinExchange();
		
		void	execute( void );
};