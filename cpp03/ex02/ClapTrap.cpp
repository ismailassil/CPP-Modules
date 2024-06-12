/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 05:38:53 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 15:57:10 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
	this->m_name = "Ismail";
	this->m_health_points = 10;
	this->m_energy_points = 10;
	this->m_attack_damage = 0;
}

ClapTrap::ClapTrap( std::string name ) {
	std::cout << "ClapTrap Constructor Called" << std::endl;
	this->m_name = name;
	this->m_health_points = 10;
	this->m_energy_points = 10;
	this->m_attack_damage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& clapTrap ) {
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	this->m_name = clapTrap.m_name;
	this->m_health_points = clapTrap.m_health_points;
	this->m_energy_points = clapTrap.m_energy_points;
	this->m_attack_damage = clapTrap.m_attack_damage;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& clapTrap ) {
	std::cout << "ClapTrap Copy Assignment Operator Called" << std::endl;
	if (this == &clapTrap)
		return (*this);
	this->m_name = clapTrap.m_name;
	this->m_health_points = clapTrap.m_health_points;
	this->m_energy_points = clapTrap.m_energy_points;
	this->m_attack_damage = clapTrap.m_attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {
	if (this->m_health_points <= 0) {
		std::cout << "ClapTrap " << this->m_name << " is dead!" << std::endl;
		return ;
	}
	if (this->m_energy_points <= 0) {
		std::cout << "ClapTrap " << this->m_name << " is out of energy!" << std::endl;
		return ;
	}
	this->m_energy_points--;
	std::cout << "ClapTrap " << this->m_name << " attacks " << target 
			<< ", causing " << this->m_attack_damage << " points of damage!"
			<< std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (this->m_health_points <= 0) {
		std::cout << "ClapTrap " << this->m_name << " is dead!" << std::endl;
		return ;
	}
	this->m_health_points -= amount;
	std::cout << "ClapTrap " << this->m_name << " took damage"
			<< ", taking " << amount << " points of damage!"
			<< std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->m_energy_points <= 0) {
		std::cout << "ClapTrap " << this->m_name << " is out of energy!" << std::endl;
		return ;
	}
	this->m_energy_points--;
	this->m_health_points += amount;
	std::cout << "ClapTrap " << this->m_name << " has been repaired with "
			<< amount << " points!" << std::endl;
}

