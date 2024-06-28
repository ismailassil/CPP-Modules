/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:02:53 by iassil            #+#    #+#             */
/*   Updated: 2024/06/28 13:55:21 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

const int	MateriaSource::SIZE = 0;

MateriaSource::MateriaSource( void ) {
	this->count = 0;
	for ( int i = 0; i < SIZE; i++ )
		src[i] = 0;
}

MateriaSource::MateriaSource( const MateriaSource& other ) {
	this->count = other.count;
	for ( int i = 0; i < SIZE; i++ ) {
		if (other.src[i])
			src[i] = other.src[i];
		else
			src[i] = 0;
	}
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& other ) {
	if (this != &other) {
		this->count = other.count;
		for ( int i = 0; i < SIZE; i++ ) {
			delete src[i];
			if (other.src[i])
				src[i] = other.src[i];
			else
				src[i] = 0;
		}
	}
}

MateriaSource::~MateriaSource() {
	for ( int i = 0; i < count; i++ ) {
		delete src[i];
	}
}

void		MateriaSource::learnMateria(AMateria* other) {
	if (count > 3)
		return ;
	for ( int i = 0; i < SIZE; i++ ) {
		if (src[i] == 0) {
			src[i] = other->clone();
			count++;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	if (count != 0 && src[count]->getType() == type)
		return (src[count]->clone());
	return (0);
}
