/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:11:10 by iassil            #+#    #+#             */
/*   Updated: 2024/10/23 16:06:42 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(51);
	mstack.push(29);
	mstack.push(31);
	mstack.push(17);

	std::cout << "stack top: " << mstack.top() << std::endl << std::endl;

	mstack.pop();

	std::cout << "stack size: " << mstack.size() << std::endl;
	
	std::cout << "------ Stack" << std::endl;
	for ( MutantStack<int>::const_iterator it = mstack.begin(); it < mstack.end(); it++ ) {
		std::cout << *it << ' ';
	}
	std::cout << "\n\n";

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

	std::cout << "------ Stack" << std::endl;
	while (it != ite) {
		std::cout << *it << ' ';
		++it;
	}
	std::cout << "\n\n";

	std::stack<int> s(mstack);

	std::cout << "stack size: " << s.size() << std::endl;
	size_t size = s.size();
	std::cout << "------ Stack" << std::endl;
	for ( size_t i = 0; i < size; i++ ) {
		std::cout << s.top() << ' ';
		s.pop();
	}
	std::cout << "\n";

	return ( 0 );
}