/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 07:11:43 by iassil            #+#    #+#             */
/*   Updated: 2024/06/05 22:03:03 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &tool ) {
	this->name = name;
	this->weapon = &tool;
}

void	HumanA::attack( void ) {
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}
