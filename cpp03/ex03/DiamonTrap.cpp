/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:17:15 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 15:57:10 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamonTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap( void ) {
	std::cout << "DiamondTrap Default Constructor Called" << std::endl;
	this->m_name = "Ismail";
	this->m_health_points = FragTrap::m_health_points;
	this->m_energy_points = ScavTrap::m_energy_points;
	this->m_attack_damage = FragTrap::m_attack_damage;
}

DiamondTrap::DiamondTrap( std::string name ) {
	std::cout << "DiamondTrap Constructor Called" << std::endl;
	this->m_name = name;
	ClapTrap::m_name = name + "_clap_name";
	this->m_health_points = FragTrap::m_health_points;
	this->m_energy_points = ScavTrap::m_energy_points;
	this->m_attack_damage = FragTrap::m_attack_damage;
}

DiamondTrap::DiamondTrap( const DiamondTrap& diamonTrap ) {
	std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
	this->m_name = diamonTrap.m_name;
	ClapTrap::m_name = diamonTrap.m_name + "_clap_name";
	this->m_health_points = diamonTrap.m_health_points;
	this->m_energy_points = diamonTrap.m_energy_points;
	this->m_attack_damage = diamonTrap.m_attack_damage;
}

DiamondTrap	DiamondTrap::operator=( const DiamondTrap& diamonTrap ) {
	std::cout << "DiamondTrap Assignment Operator Called" << std::endl;
	if (this == &diamonTrap)
		return (*this);
	this->m_name = diamonTrap.m_name;
	ClapTrap::m_name = diamonTrap.m_name + "_clap_name";
	this->m_health_points = diamonTrap.m_health_points;
	this->m_energy_points = diamonTrap.m_energy_points;
	this->m_attack_damage = diamonTrap.m_attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout	<< "My name is: " + this->m_name + ", The ClapTrap name is: "
				+ ClapTrap::m_name << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack( target );
}
