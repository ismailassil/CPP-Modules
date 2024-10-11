/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 06:57:22 by iassil            #+#    #+#             */
/*   Updated: 2024/10/05 11:47:23 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char** av) {
	if (ac != 2)
		return ( std::cerr << "Error: could not open file." << std::endl, 1 );
	
	try {
		BitcoinExchange btc("data.csv", av[1]);
		btc.execute();
	} catch ( const char* e ) {
		std::cerr << "Error: " << e << std::endl;
	}

	return ( 0 );
}
