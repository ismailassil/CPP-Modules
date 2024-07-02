/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:11:41 by iassil            #+#    #+#             */
/*   Updated: 2024/07/02 09:37:19 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

const int	Character::SIZE = 4;
const int	Character::bSIZE = 1024;

Character::Character( void ) {
	index = 0;
	counter = 0;
	for ( int i = 0; i < SIZE; i++ )
		inventory[i] = 0;
	this->name = "Not Defined";
}

Character::Character( const Character& other ) {
	index = other.index;
	counter = other.counter;
	for ( int i = 0; i < SIZE; i++ ) {
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
		counter = other.counter;
		for ( int i = 0; i < SIZE; i++ ) {
			if (inventory[i])
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
	for ( int i = 0; i < SIZE; i++ ) {
		if (inventory[i])
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
		this->inventory[index] = m;
		index++;
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || idx > index)
		return ;
	this->gCollecter[counter] = this->inventory[idx];
	this->inventory[idx] = 0;
	for ( int i = idx; i < index; i++ )
		this->inventory[i] = this->inventory[i + 1];
	index--;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3 || idx > index)
		return ;
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}
