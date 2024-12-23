/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 07:34:29 by iassil            #+#    #+#             */
/*   Updated: 2024/10/23 15:41:22 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>
#include "iter.hpp"

template <typename T>
void print( T& c ) {
	std::cout << c << ' ';
}

int main() {
	int tab[] = { 0, 1, 2, 3, 4 };
	int tab2[12] = { 32, 99, 12, 87, 13, 66, 32, 84, 9, 102, 88, 1002 };
	int *tabNULL = NULL;

	iter( tab, 5, print<int> );
	std::cout << std::endl;

	iter( tab2, 12, print<int> );
	std::cout << std::endl;

	iter( tabNULL, 12, print<int> );
	std::cout << std::endl;

	return ( 0 );
}