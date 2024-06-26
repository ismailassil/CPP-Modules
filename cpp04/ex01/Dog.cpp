/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:00:35 by iassil            #+#    #+#             */
/*   Updated: 2024/06/25 16:00:46 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->type = "Dog";
	this->nbrain = new Brain();
}

Dog::Dog( const Dog& dog ) {
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->type = dog.type;
	this->nbrain = new Brain(*dog.nbrain);
}

Dog&	Dog::operator=( const Dog &dog ) {
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	if (this != &dog) {
		this->type = dog.type;	
		this->nbrain = new Brain(*dog.nbrain);
	}
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog Desctructor Called" << std::endl;
	delete this->nbrain;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof!" << std::endl;
}
