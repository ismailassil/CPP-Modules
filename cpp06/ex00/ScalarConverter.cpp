/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 08:34:37 by iassil            #+#    #+#             */
/*   Updated: 2024/10/10 18:20:31 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() { }

ScalarConverter::ScalarConverter( const ScalarConverter& obj ) {
	(void)obj;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& obj ) {
	(void)obj;
	return ( *this );
}

ScalarConverter::~ScalarConverter() { }

const char * ScalarConverter::InvalidArguemntException::what() const throw() {
	return ( "Invalid Argument Passed!" );
}

type	ScalarConverter::checker( const std::string& input ) {
	if (std::isalpha(input.at(0)) && input.size() == 1)
		return CHAR;
	if (input == "inf" || input == "+inf" || input == "inff" || input == "+inff")
		return INFP;
	if (input == "-inf" || input == "-inff")
		return INFN;
	if (input == "nan")
		return NNAN;
	char*		end;
	const char* str = input.c_str();

	float	float_value = std::strtof(str, &end);
	(void)float_value;
	if (*end == '\0' || !strcmp(end, "f"))
		return (FLOAT);

	double	double_value = std::strtod(str, &end);
	(void)double_value;
	if (*end == '\0')
		return (DOUBLE);

	int	int_value = std::strtol(str, &end, 10);
	(void)int_value;
	if (*end == '\0')
		return (INT);
	return NOTHING;
}

void	ScalarConverter::converter( const std::string& input ) {
	if (input.empty()) {
		std::cout << "No Argument!" << std::endl;
		return ;
	}
	type i = checker(input);
	switch (i) {
		case CHAR: {
			char	c = input.c_str()[0];
			ScalarConverter::print(c);
			break;
		}
		case INT: {
			char*	end;
			int	ivalue = std::strtol(input.c_str(), &end, 10);
			ScalarConverter::print(ivalue);
			break;
		}
		case FLOAT: {
			char*	end;
			float	fvalue = std::strtof(input.c_str(), &end);
			ScalarConverter::print(fvalue);
			break;
		}
		case DOUBLE: {
			char*	end;
			double	dvalue = std::strtof(input.c_str(), &end);
			ScalarConverter::print(dvalue);
			break;
		}
		case INFP: {
			float	inf = std::numeric_limits<float>::infinity();
			ScalarConverter::print(inf);
			break;
		}
		case INFN: {
			float	inf = -std::numeric_limits<float>::infinity();
			ScalarConverter::print(inf);
			break;
		}
		case NNAN: {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
			break;
		}
		case NOTHING: {
			throw ScalarConverter::InvalidArguemntException();
			break;
		}
	}
}

void	ScalarConverter::print( const char& c ) {
	if (std::isprint(c))
		std::cout << "char: '" << static_cast<char>(c) << '\'' << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	ScalarConverter::print( const int& c ) {
	if (std::isprint(c))
		std::cout << "char: '" << static_cast<char>(c) << '\'' << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	ScalarConverter::print( const float& c ) {
	if (std::isprint(c))
		std::cout << "char: '" << static_cast<char>(c) << '\'' << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	ScalarConverter::print( const double& c ) {
	if (std::isprint(c))
		std::cout << "char: '" << static_cast<char>(c) << '\'' << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}
