/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:11:41 by iassil            #+#    #+#             */
/*   Updated: 2024/06/27 14:46:11 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int Character::index = 0;

Character::Character( void ) {
	this->name = "Abdellah";
}

Character::Character( const Character& other ) {
	this->name = other.name;	
}

Character&	Character::operator=( const Character& other ) {
	if (this != &other)
		this->name = other.name;
	return (*this);
}

Character::~Character() { }

std::string const & Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria* m) {
	if (index != 3)
		this->inventory[index++] = m;
}

void	Character::unequip(int idx) {
	if ((idx <= 0 && idx >= 5) || idx > index)
		return ;
	this->inventory[idx - 1] = 0;
	for ( int i = idx - 1; i < index; i++ )
		this->inventory[i] = this->inventory[i + 1];
	index--;
}

void	Character::use(int idx, ICharacter& target) {
	if ((idx <= 0 && idx >= 5) || idx > index)
		return ;
}
