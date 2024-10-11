/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:11:10 by iassil            #+#    #+#             */
/*   Updated: 2024/10/04 18:44:57 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;
	mstack.push(51);
	mstack.push(17);
	
	std::cout << "stack top: " << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << "stack size: " << mstack.size() << std::endl;
	
	mstack.push(93);
	mstack.push(51);
	mstack.push(35);
	mstack.push(737);
	mstack.push(15);
	mstack.push(19);
	mstack.push(10);
	mstack.push(74);

	std::cout << "stack size: " << mstack.size() << std::endl;
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << "-- Stack --" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	return 0;
}