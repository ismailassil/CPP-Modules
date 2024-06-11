/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:23:18 by iassil            #+#    #+#             */
/*   Updated: 2024/06/09 00:26:37 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractional_bit = 8;

Fixed::Fixed ( void ) {
	this->_number = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed ( const Fixed& otherFixed ) : _number (otherFixed._number) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& otherFixed ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &otherFixed)
		this->_number = otherFixed._number;
	return (*this);
}

Fixed::~Fixed ( void ) {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_number = raw;
}

Fixed::Fixed ( int intNum ) {
	this->_number = intNum * float(1 << this->_fractional_bit);
}

Fixed::Fixed ( float floatNum ) {
	this->_number = roundf(floatNum * float(1 << this->_fractional_bit));
}

std::ostream&	operator<<( std::ostream& COUT,  const Fixed& Original ) {
	COUT  << Original.toFloat();
	return (COUT);
}

float	Fixed::toFloat( void ) const {
	return (this->_number / float(1 << _fractional_bit));
}

int		Fixed::toInt( void ) const {
	return (roundf(this->_number / float(1 << _fractional_bit)));
}
