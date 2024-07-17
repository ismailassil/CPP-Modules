/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:45:42 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 16:09:15 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
	this->type = "Not Defined";
}

WrongAnimal::WrongAnimal( const WrongAnimal& other )
	: type(other.type)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal &other ) {
	std::cout << "WrongAnimal Copy Assignment Operator Called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "?????" << std::endl;
}

const std::string		WrongAnimal::getType( void ) const {
	return (this->type);
}
