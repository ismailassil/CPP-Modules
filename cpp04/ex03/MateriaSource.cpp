/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:02:53 by iassil            #+#    #+#             */
/*   Updated: 2024/07/17 10:14:43 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

const int	MateriaSource::SIZE = 4;

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
	return (*this);
}

MateriaSource::~MateriaSource() {
	for ( int i = 0; i < SIZE; i++ ) {
		if (src[i])
			delete src[i];
	}
}

void		MateriaSource::learnMateria(AMateria* other) {
	if (count > 3)
		return ;
	for ( int i = 0; i < SIZE; i++ ) {
		if (!src[i]) {
			src[i] = other;
			count++;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	if (count != 0) {
		for (int i = 0; i < count; i++) {
			if (src[i] && src[i]->getType() == type) {
				return (src[i]->clone());
			}
		}
	}
	return (0);
}
