/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:22 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 22:12:28 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	const Animal* meta = new Animal();
	// Basically, a cat and a dog are animals
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// and a animal is not a dog, that's why this is not OKAY
	// const Cat* c = new Animal();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); // Will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;

	std::cout << "============================" << std::endl;
	const WrongAnimal* w = new WrongAnimal();
	const WrongAnimal* c = new WrongCat();
	
	std::cout << w->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	
	w->makeSound();
	c->makeSound();
	
	return (0);
}