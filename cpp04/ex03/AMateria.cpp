/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:21:07 by iassil            #+#    #+#             */
/*   Updated: 2024/06/28 16:20:46 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {
	this->type = "Not Defined";
}

AMateria::AMateria( const AMateria& other ) {
	this->type = other.type;
}

AMateria&	AMateria::operator=( const AMateria& other ) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AMateria::~AMateria() { }

AMateria::AMateria(std::string const & type) {
	this->type = type;
}

std::string const & AMateria::getType() const {
	return (this->type);
}

void	AMateria::use(ICharacter& target) {
	std::cout << "* Just the Base Class doing something *" << std::endl;
}
