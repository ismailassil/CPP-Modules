/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:45:42 by iassil            #+#    #+#             */
/*   Updated: 2024/06/27 10:36:06 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal( const Animal& animal ) : type(animal.type) {
	std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal&	Animal::operator=( const Animal &animal ) {
	std::cout << "Animal Copy Assignment Operator Called" << std::endl;
	if (this != &animal)
		this->type = animal.type;
	return (*this);
}

Animal::~Animal( void ) {
	std::cout << "Animal Desctructor Called" << std::endl;
}

const std::string	Animal::getType( void ) const {
	return (this->type);
}
