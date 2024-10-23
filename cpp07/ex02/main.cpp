/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:45:39 by iassil            #+#    #+#             */
/*   Updated: 2024/10/23 15:43:36 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <cstdlib>
#include <string>
#include "Array.hpp"

#define VAL 300

void leaks() {
	system("leaks array");
}

int main ( void ) {

	// atexit(leaks);

	Array<int> a(VAL);
	Array<int> bb(a);
	Array<std::string> s;

	try {
		s[0] = "Hi";
	} catch ( const std::exception& e ) {
		std::cout << "Error: " << e.what() << "\n";
	}

	srand(time(NULL));

	for ( int i = 0; i < VAL; i++ ) {
		a[i] = rand();
	}
	const Array<int> b = a;

	// for ( int i = 0; i < VAL; i++ ) {
		// std::cout << a[i] << ' ';
	// }
	// std::cout << "\n";

	// b[0] = 1;

	const int i = a[0];
	int j = b[0];

	std::cout << "a[0]: " << a[0] << " i: " << i << std::endl;
	std::cout << "b[0]: " << b[0] << " j: " << j << std::endl;
	std::cout << "\n";

	a[0] = 12;
	j = 1294812;
	std::cout << "a[0]: " << a[0] << " i: " << i << std::endl;
	std::cout << "b[0]: " << b[0] << " j: " << j << std::endl;
	std::cout << "\n";

	try {
		a[-2] = 1;
	} catch ( const std::exception& e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		a[VAL] = 1;
	} catch ( const std::exception& e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return ( 0 );
}
