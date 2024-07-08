/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 07:11:39 by iassil            #+#    #+#             */
/*   Updated: 2024/07/08 19:16:54 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string name ) {
	this->name = name;
}

void	HumanB::setWeapon( Weapon &tool ) {
	this->weapon = &tool;
}

void	HumanB::attack( void ) {
	if (this->weapon != NULL && this->weapon->getType() != "")
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << this->name << " doesn't have a Weapon" << std::endl;
}
