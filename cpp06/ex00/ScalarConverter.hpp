/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 08:24:21 by iassil            #+#    #+#             */
/*   Updated: 2024/10/12 10:15:30 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream> // IWYU pragma: keep
#include <ostream> // IWYU pragma: keep
#include <sstream> // IWYU pragma: keep

enum type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INFP,
	INFN,
	NNAN,
	NOTHING
};

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter( const ScalarConverter& obj );
		ScalarConverter& operator=( const ScalarConverter& obj );
		~ScalarConverter();

		static void	print( const char& c );
		static void	print( const int& c );
		static void	print( const float& c );
		static void	print( const double& c );

		static type	checker( const std::string& input );

	public:
		static void	converter( const std::string& input );

		class InvalidArguemntException : public std::exception {
			const char * what() const throw();
		};
};