/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:22 by iassil            #+#    #+#             */
/*   Updated: 2024/07/17 09:51:02 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp" // IWYU pragma: keep

int main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

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
	const WrongCat* c = new WrongCat();
	
	std::cout << w->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	w->makeSound();
	c->makeSound();
	
	delete w;
	delete c;

	return (0);
}