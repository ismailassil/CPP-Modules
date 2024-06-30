/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:11:41 by iassil            #+#    #+#             */
/*   Updated: 2024/06/30 10:59:39 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

const int	Character::SIZE = 4;

Character::Character( void ) {
	index = 0;
	for ( int i = 0; i < SIZE; i++ )
		inventory[i] = 0;
	this->name = "Not Defined";
}

Character::Character( const Character& other ) {
	for ( int i = 0; i < SIZE; i++ ) {
		index = other.index;
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = 0;
	}
	this->name = other.name;
}

Character&	Character::operator=( const Character& other ) {
	if (this != &other) {
		index = other.index;
		for ( int i = 0; i < SIZE; i++ ) {
			delete inventory[i];
			if (other.inventory[i])
				inventory[i] = other.inventory[i]->clone();
			else
				inventory[i] = 0;
		}
		this->name = other.name;
	}
	return (*this);
}

Character::~Character() {
	for ( int i = 0; i < index; i++ ) {
		delete inventory[i];
	}
}

Character::Character( const std::string _name ) {
	index = 0;
	this->name = _name;
	for ( int i = 0; i < SIZE; i++ )
		inventory[i] = 0;
}

std::string const & Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria* m) {
	if (m == NULL) {
		std::cerr << "NULL Materia" << std::endl;
		return ;
	}
	if (index >= 0 && index <= 3) {
		this->inventory[index++] = m->clone();
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || idx > index)
		return ;
	this->inventory[idx] = 0;
	for ( int i = idx; i < index; i++ )
		this->inventory[i] = this->inventory[i + 1];
	index--;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || idx > index)
		return ;
	// NOTE - to be handled
	/*	
		The use(int, ICharacter&) member function will have
		to use the Materia at the slot[idx], and pass the
		target parameter to the AMateria::use function.
	*/
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}
