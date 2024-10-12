/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:32:51 by iassil            #+#    #+#             */
/*   Updated: 2024/10/12 14:09:49 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void) {
	int num = rand();
	std::cout << "num: " << num << std::endl;
	
	if (num % 2 == 0 && num % 3 == 0)
		return (new A());
	else if (num % 2 == 0)
		return (new B());
	return (new C());
}

void	identify(Base *p) {
	A*	a = dynamic_cast<A*>(p);
	B*	b = dynamic_cast<B*>(p);
	C*	c = dynamic_cast<C*>(p);

	if ( a )
		std::cout << "[ptr] The type of the object: `A` Class." << std::endl;
	else if ( b )
		std::cout << "[ptr] The type of the object: `B` Class." << std::endl;
	else if ( c )
		std::cout << "[ptr] The type of the object: `C` Class." << std::endl;
	else
		std::cout << "[ptr] Type not found!" << std::endl;
}

void	identify(Base &p) {

	try {
		A&	a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "[ref] The type of the object: `A` Class." << std::endl;
	} catch ( const std::exception& e ) {
		try {
			B&	b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "[ref] The type of the object: `B` Class." << std::endl;
		} catch ( const std::exception& e ) {
			try {
				C&	c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "[ref] The type of the object: `C` Class." << std::endl;
			} catch ( const std::exception& e ) {
				std::cout << "[ref] Type not found!" << std::endl;
			}
		}
	}
}

int main( void ) {
	srand(time(NULL));

	Base*	base_ptr_0 = generate();
	Base*	base_ptr_1 = generate();

	identify(base_ptr_0);
	identify(base_ptr_1);

	identify(*base_ptr_0);
	identify(*base_ptr_1);

	delete base_ptr_0;
	delete base_ptr_1;

	return ( 0 );
}