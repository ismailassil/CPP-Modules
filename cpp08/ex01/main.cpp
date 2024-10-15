/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:50:41 by iassil            #+#    #+#             */
/*   Updated: 2024/10/15 17:19:18 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	Span sp(5);
	
	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	} catch ( const std::exception& e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "sp span: ";
	sp.printSpan();
	std::cout << "\n";

	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
	std::cout << "\n";

	std::vector<int> numsToAdd;
	numsToAdd.push_back(4);
	numsToAdd.push_back(5);
	numsToAdd.push_back(6);
	numsToAdd.push_back(7);
	numsToAdd.push_back(8);
	numsToAdd.push_back(9);

	try {
		sp.addNumbers( numsToAdd.begin(), numsToAdd.end() );
	} catch ( const std::exception& e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "sp span: ";
	sp.printSpan();

	Span a(10);

	try {
		a.addNumbers( numsToAdd.begin(), numsToAdd.end() );
	} catch ( const std::exception& e ) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << "a span: ";
	a.printSpan();

	return 0;
}
