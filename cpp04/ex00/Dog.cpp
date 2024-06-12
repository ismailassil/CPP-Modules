/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:00:35 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 16:09:15 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog& Dog ) {
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->type = Dog.type;
}

Dog&	Dog::operator=( const Dog &dog ) {
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	if (this != &dog)
		this->type = dog.type;
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog Desctructor Called" << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof!" << std::endl;
}
