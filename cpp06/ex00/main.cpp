/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:43:59 by iassil            #+#    #+#             */
/*   Updated: 2024/10/11 10:14:25 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main ( int ac, char **av ) {
	if (ac != 2) {
		std::cerr << "Too many Arguments. Please provide one argument!" << std::endl;
		return ( 1 );
	}
	try {
		ScalarConverter::converter(av[1]);
	} catch ( const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return ( 0 );
}