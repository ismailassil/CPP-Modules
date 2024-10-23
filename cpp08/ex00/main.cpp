/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:37:54 by iassil            #+#    #+#             */
/*   Updated: 2024/10/23 16:05:58 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <exception>
#include <vector>
#include <list>
#include <set>
#include <iostream>

int main( void ) {
    std::vector<int> emptyvec;

    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    std::list<int> lst;
    lst.push_back(6);
    lst.push_back(7);
    lst.push_back(8);
    lst.push_back(9);

    std::set<int> st;
    st.insert(10);
    st.insert(11);
    st.insert(12);

	std::cout << "empty contaienr" << std::endl;
	std::cout << "======================\n";
	try {
		std::vector<int>::iterator it = easyfind(emptyvec, 5);
		(void)it;
		std::cout << "The Occurrence is found!" << std::endl;
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << "======================\n\n";
	
	std::cout << "vec = {1, 2, 3, 4, 5}" << std::endl;
	std::cout << "======================\n";
	try {
		std::vector<int>::iterator it = easyfind(vec, 5);
		(void)it;
		std::cout << "The Occurrence is found!" << std::endl;
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "======================\n";
	try {
		const std::vector<int>::iterator it = easyfind(vec, -1);
		(void)it;
		std::cout << "The Occurrence is found!" << std::endl;
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\nlst = {6, 7, 8, 9}" << std::endl;
	std::cout << "======================\n";
	try {
		std::list<int>::iterator it = easyfind(lst, 6);
		(void)it;
		std::cout << "The Occurrence is found!" << std::endl;
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	std::cout << "======================\n";
	try {
		const std::list<int>::iterator it = easyfind(lst, 2);
		(void)it;
		std::cout << "The Occurrence is found!" << std::endl;
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	std::cout << "\nst = {10, 11, 12}" << std::endl;
	std::cout << "======================\n";
	try {
		std::set<int>::iterator it = easyfind(st, 12);
		(void)it;
		std::cout << "The Occurrence is found!" << std::endl;
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	std::cout << "======================\n";
	try {
		const std::set<int>::iterator it = easyfind(st, 0);
		(void)it;
		std::cout << "The Occurrence is found!" << std::endl;
	} catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return ( 0 );
}