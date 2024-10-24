/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:23:11 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 15:57:10 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_number;
		static const int	_fractional_bit;

	public:
		Fixed ( void ); // Default Constructor
		Fixed ( const Fixed& otherFixed ); // Copy Constructor
		Fixed& operator=( const Fixed& p ); // Copy Assignment Operator
		~Fixed ( void ); // Deconstructor
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};
