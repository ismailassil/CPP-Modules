/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:00:35 by iassil            #+#    #+#             */
/*   Updated: 2024/07/17 09:48:52 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->type = "Dog";
	this->nbrain = new Brain();
}

Dog::Dog( const Dog& other )
	: Animal(other)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->type = other.type;
	this->nbrain = new Brain(*other.nbrain);
}

Dog&	Dog::operator=( const Dog &other ) {
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		this->type = other.type;	
		this->nbrain = new Brain(*other.nbrain);
	}
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog Destructor Called" << std::endl;
	delete this->nbrain;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof!" << std::endl;
}
