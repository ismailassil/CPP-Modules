/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 07:11:28 by iassil            #+#    #+#             */
/*   Updated: 2024/06/05 07:25:10 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon ( std::string type ) {
	this->type = type;
}

std::string	Weapon::getType( void ) const {
	return (this->type);
}

void		Weapon::setType( std::string input ) {
	this->type = input;
}
