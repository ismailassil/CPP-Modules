/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:12:15 by iassil            #+#    #+#             */
/*   Updated: 2024/06/10 22:03:33 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( void ) {
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
	this->m_name = "Ismail";
	this->m_health_points = 100;
	this->m_energy_points = 50;
	this->m_attack_damage = 20;
}

ScavTrap::ScavTrap( const std::string name ) {
	std::cout << "ScavTrap Constructor Called" << std::endl;
	this->m_name = name;
	this->m_health_points = 100;
	this->m_energy_points = 50;
	this->m_attack_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& scavTrap ) {
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	this->m_name = scavTrap.m_name;
	this->m_health_points = scavTrap.m_health_points;
	this->m_energy_points = scavTrap.m_energy_points;
	this->m_attack_damage = scavTrap.m_attack_damage;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& scavTrap ) {
	std::cout << "ScavTrap Copy Assignement Operator Called" << std::endl;
	if (this == &scavTrap)
		return (*this);
	this->m_name = scavTrap.m_name;
	this->m_health_points = scavTrap.m_health_points;
	this->m_energy_points = scavTrap.m_energy_points;
	this->m_attack_damage = scavTrap.m_attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now in Gate Keeper mode" << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {
	if (this->m_health_points <= 0) {
		std::cout << "ScavTrap " << this->m_name << " is out of energy!" << std::endl;
	}
	if (this->m_energy_points <= 0) {
		std::cout << "ScavTrap " << this->m_name << " is out of energy!" << std::endl;
		return ;
	}
	this->m_energy_points--;
	std::cout << "ScavTrap " << this->m_name << " attacks " << target 
			<< ", causing " << this->m_attack_damage << " points of damage!"
			<< std::endl;
}
