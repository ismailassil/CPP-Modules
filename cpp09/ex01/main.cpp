/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:35:29 by iassil            #+#    #+#             */
/*   Updated: 2024/10/16 10:24:40 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int ac, char** av ) {
	if ( ac != 2 ) {
		std::cout << "Error: Enter 2 arguments" << std::endl;
		return ( 1 );
	}

	try {

		RPN a;
		a.doMath(av[1]);

	} catch ( const char* e ) {

		std::cout << e << std::endl;

	}

	return ( 0 );
}