/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:35:29 by iassil            #+#    #+#             */
/*   Updated: 2024/10/23 16:03:05 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int ac, char** av ) {
	if ( ac != 2 ) {
		std::cerr << "Error: Enter 1 arguments" << std::endl;
		std::cerr << "example: ./RPN '3 7 +'" << std::endl;
		return ( 1 );
	}

	try {

		RPN a;
		a.doMath(av[1]);

	} catch ( const char* e ) {

		std::cerr << e << std::endl;

	}

	return ( 0 );
}