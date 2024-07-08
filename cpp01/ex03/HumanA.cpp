/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 07:11:43 by iassil            #+#    #+#             */
/*   Updated: 2024/07/08 19:16:47 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &tool ) {
	this->name = name;
	this->weapon = &tool;
}

void	HumanA::attack( void ) {
	if (this->weapon != NULL && this->weapon->getType() != "")
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << this->name << " doesn't have a Weapon" << std::endl;
}
