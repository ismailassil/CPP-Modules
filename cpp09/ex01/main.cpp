/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:35:29 by iassil            #+#    #+#             */
/*   Updated: 2024/10/05 13:59:53 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int ac, char** av ) {
	if ( ac != 2 ) {
		std::cerr << "Error: Enter 2 arguments" << std::endl;
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