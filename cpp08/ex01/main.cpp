/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:50:41 by iassil            #+#    #+#             */
/*   Updated: 2024/10/04 13:02:41 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

int main() {
	Span sp = Span(5);
	
	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	sp.printSpan();

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::vector<int> numsToAdd;
	numsToAdd.push_back(4);
	numsToAdd.push_back(5);
	numsToAdd.push_back(6);
	numsToAdd.push_back(7);
	numsToAdd.push_back(8);
	numsToAdd.push_back(9);

	try {
		sp.addNumbers(numsToAdd.begin(), numsToAdd.end());
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	sp.printSpan();
	std::cout.flush();

	return 0;
}
