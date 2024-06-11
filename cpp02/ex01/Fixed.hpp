/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:23:11 by iassil            #+#    #+#             */
/*   Updated: 2024/06/08 22:07:23 by iassil           ###   ########.fr       */
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
};

std::ostream&	operator<<( std::ostream& COUT, const Fixed& Original );
