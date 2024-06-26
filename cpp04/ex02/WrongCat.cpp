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

WrongCat::WrongCat( const WrongCat& wrongCat ) {
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	this->type = wrongCat.type;
}

WrongCat&	WrongCat::operator=( const WrongCat &wrongCat ) {
	std::cout << "WrongCat Copy Assignment Operator Called" << std::endl;
	if (this != &wrongCat)
		this->type = wrongCat.type;
	return (*this);
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Desctructor Called" << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Meow!" << std::endl;
}
