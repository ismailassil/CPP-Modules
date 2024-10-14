/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 07:06:56 by iassil            #+#    #+#             */
/*   Updated: 2024/10/14 11:37:42 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main( void ) {
	int a = 2;
	int b = 3;

	float c = 9.45;
	float d = 119.233;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap( a, b );

	std::cout << "swap() " << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << max( a, b ) << std::endl << std::endl;

	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	swap( c, d );

	std::cout << "swap() " << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << max( c, d ) << std::endl << std::endl;

	std::string e = "chaine1";
	std::string f = "chaine2";

	std::cout << "e = " << e << ", f = " << f << std::endl;
	swap(e, f);

	std::cout << "swap() " << std::endl;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << max( e, f ) << std::endl;
	
	return ( 0 );
}