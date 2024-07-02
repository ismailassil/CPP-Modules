/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:35:55 by iassil            #+#    #+#             */
/*   Updated: 2024/07/02 09:13:37 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure( void ) {
	this->type = "cure";
}

Cure::Cure( const Cure& other ) {
	this->type = other.type;
}

Cure&	Cure::operator=( const Cure& other ) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Cure::~Cure() {}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use( ICharacter& target ) {
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
