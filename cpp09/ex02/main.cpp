/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:53:32 by iassil            #+#    #+#             */
/*   Updated: 2024/10/18 16:27:24 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int ac, char **av ) {

	/**
	 * Generate unique numbers
	 * `seq 1 1000 | awk 'BEGIN {srand()} {print rand(), $0}' | sort -k1,1n | awk '{print $2}' | tr '\n' ' '`
	**/

	if ( ac < 3 ) {
		std::cerr << "Error: Enter at least 3 numbers" << std::endl;
		return ( 1 );
	}

	try {
		PmergeMe	pm( av + 1, static_cast<size_t>(ac - 1));
		pm.execute();
	} catch ( const std::exception& e ) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return ( 0 );
}
