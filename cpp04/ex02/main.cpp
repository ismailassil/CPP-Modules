/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:22 by iassil            #+#    #+#             */
/*   Updated: 2024/07/17 10:14:08 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp" // IWYU pragma: keep

int main( void ) {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); // Will output the cat sound!
	j->makeSound();

	delete j;
	delete i;

	std::cout << "==============WrongAnimal==============" << std::endl;
	const WrongAnimal* w = new WrongAnimal();
	const WrongAnimal* c = new WrongCat();
	
	std::cout << w->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	
	w->makeSound();
	c->makeSound();
	
	delete w;
	delete c;
	
	std::cout << "==============Brain==============" << std::endl;
	const int		SIZE = 10;
	const Animal	*a[SIZE];
	for ( int e = 0; e < SIZE; e++ ) {
		if (e >= SIZE / 2)
			a[e] = new Cat();
		else
			a[e] = new Dog();
	}
	
	for ( int s = 0; s < SIZE; s++ ) {
		a[s]->getType();
		a[s]->makeSound();
	}

	for ( int z = 0; z < SIZE; z++ ) {
		delete a[z];
	}
	
	return (0);
}
