/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:22 by iassil            #+#    #+#             */
/*   Updated: 2024/06/26 17:11:27 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	leaks(void) {
	system("leaks animal");
}

int main( void ) {
	atexit(leaks);
	// const Animal* meta = new Animal();
	// Basically, a cat and a dog are animals
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// and a animal is not a dog, that's why this is not OKAY
	// const Cat* c = new Animal();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); // Will output the cat sound!
	j->makeSound();
	// meta->makeSound();

	delete j;
	delete i;
	// delete meta;

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
