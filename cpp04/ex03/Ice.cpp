/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:40:35 by iassil            #+#    #+#             */
/*   Updated: 2024/06/30 10:16:15 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {
	this->type = "ice";
}

Ice::Ice( const Ice& other ) {
	this->type = other.type;
}

Ice&	Ice::operator=( const Ice& other ) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Ice::~Ice() { }

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
