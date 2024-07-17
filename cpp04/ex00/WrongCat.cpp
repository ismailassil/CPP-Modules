/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:48:28 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 16:19:17 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "WrongCat Default Constructor Called" << std::endl;
	this->type = "Cat";
}

WrongCat::WrongCat( const WrongCat& other )
	: WrongAnimal(other)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	this->type = other.type;
}

WrongCat&	WrongCat::operator=( const WrongCat &other ) {
	std::cout << "WrongCat Copy Assignment Operator Called" << std::endl;
	if (this != &other) {
		WrongAnimal::operator=(other);
		this->type = other.type;
	}
	return (*this);
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Meow!" << std::endl;
}
