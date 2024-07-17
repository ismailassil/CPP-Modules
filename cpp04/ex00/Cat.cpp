/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:48:28 by iassil            #+#    #+#             */
/*   Updated: 2024/07/17 09:48:36 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat& other )
	: Animal(other)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->type = other.type;
}

Cat&	Cat::operator=( const Cat &other ) {
	std::cout << "Cat Copy Assignment Operator Called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << "Cat Destructor Called" << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow!" << std::endl;
}
