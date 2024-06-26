/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:48:28 by iassil            #+#    #+#             */
/*   Updated: 2024/06/25 16:00:53 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) {
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->type = "Cat";
	this->nbrain = new Brain();
}

Cat::Cat( const Cat& cat ) {
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->type = cat.type;
	this->nbrain = new Brain(*cat.nbrain);
}

Cat&	Cat::operator=( const Cat &cat ) {
	std::cout << "Cat Copy Assignment Operator Called" << std::endl;
	if (this != &cat) {
		this->nbrain = new Brain(*cat.nbrain);
		this->type = cat.type;	
	}
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << "Cat Desctructor Called" << std::endl;
	delete this->nbrain;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow!" << std::endl;
}
