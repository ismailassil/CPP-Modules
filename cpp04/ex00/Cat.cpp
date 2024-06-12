/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:48:28 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 16:19:17 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat& cat ) {
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->type = cat.type;
}

Cat&	Cat::operator=( const Cat &cat ) {
	std::cout << "Cat Copy Assignment Operator Called" << std::endl;
	if (this != &cat)
		this->type = cat.type;
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << "Cat Desctructor Called" << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow!" << std::endl;
}
