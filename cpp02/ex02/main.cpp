/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:23:17 by iassil            #+#    #+#             */
/*   Updated: 2024/06/09 00:30:36 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "a:	";
	std::cout << a << std::endl;
	std::cout << "++a:	";
	std::cout << ++a << std::endl;
	std::cout << "a:	";
	std::cout << a << std::endl;
	std::cout << "a++:	";
	std::cout << a++ << std::endl;
	std::cout << "a:	";
	std::cout << a << std::endl;
	std::cout << "b:	";
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}