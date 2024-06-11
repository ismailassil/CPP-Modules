/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:23:11 by iassil            #+#    #+#             */
/*   Updated: 2024/06/08 23:49:52 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>
#include <ostream>

class Fixed {
	private:
		int					_number;
		static const int	_fractional_bit;

	public:
		Fixed ( void ); // Default Constructor
		Fixed ( int intNum ); // Constructor that takes a const integer
		Fixed ( float floatNum ); // Constructor that takes a const float
		Fixed ( const Fixed& otherFixed ); // Copy Constructor
		Fixed& operator=( const Fixed& p ); // Copy Assignement Operator
		~Fixed ( void ); // Deconstructor
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		/*	Overload Operators */
		//	Comparison Operators
		bool		operator>( const Fixed& fixed1 );
		bool		operator<( const Fixed& fixed1 );
		bool		operator>=( const Fixed& fixed1 );
		bool		operator<=( const Fixed& fixed1 );
		bool		operator==( const Fixed& fixed1 );
		bool		operator!=( const Fixed& fixed1 );
		//	Arithmetic Operators
		Fixed		operator+( const Fixed& fixed1 );
		Fixed		operator-( const Fixed& fixed1 );
		Fixed		operator*( const Fixed& fixed1 );
		Fixed		operator/( const Fixed& fixed1 );
		//	Increment & Decrement Operators
		Fixed		operator++( void ); // Pre Increment
		Fixed		operator--( void ); // Pre Decrement
		Fixed		operator++(int); // Post Increment
		Fixed		operator--(int); // Post Decrement
		// Static Member functions [min, max]
		static Fixed&				min( Fixed& fixed1, Fixed& fixed2 );
		static const Fixed&			min( const Fixed& fixed1, const Fixed& fixed2 );
		static Fixed&				max( Fixed& fixed1, Fixed& fixed2 );
		static const Fixed&			max( const Fixed& fixed1, const Fixed& fixed2 );
};

std::ostream&	operator<<( std::ostream& COUT, const Fixed& Original );
