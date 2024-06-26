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

WrongAnimal::WrongAnimal( const WrongAnimal& wrongAnimal ) : type(wrongAnimal.type) {
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal &wrongAnimal ) {
	std::cout << "WrongAnimal Copy Assignment Operator Called" << std::endl;
	if (this != &wrongAnimal)
		this->type = wrongAnimal.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal Desctructor Called" << std::endl;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "?????" << std::endl;
}

const std::string		WrongAnimal::getType( void ) const {
	return (this->type);
}
