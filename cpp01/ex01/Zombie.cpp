/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 04:24:27 by iassil            #+#    #+#             */
/*   Updated: 2024/07/08 18:46:33 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Zombie::Zombie( void ) { }

Zombie::Zombie( std::string name) {
	this->_name = name;
}

void	Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->_name = name;
}

Zombie::~Zombie ( void ) {
	std::cout << this->_name << " has been destroyed" << std::endl;
}
