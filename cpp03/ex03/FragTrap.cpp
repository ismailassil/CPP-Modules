/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:54:01 by iassil            #+#    #+#             */
/*   Updated: 2024/06/10 22:08:52 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	std::cout << "FrapTrap Default Constructor Called" << std::endl;
	this->m_name = "Ismail";
	this->m_health_points = 100;
	this->m_energy_points = 100;
	this->m_attack_damage = 30;
}

FragTrap::FragTrap( const std::string name ) {
	std::cout << "FragTrap Constructor Called" << std::endl;
	this->m_name = name;
	this->m_health_points = 100;
	this->m_energy_points = 100;
	this->m_attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap& fragtrap ) {
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
	this->m_name = fragtrap.m_name;
	this->m_health_points = fragtrap.m_health_points;
	this->m_energy_points = fragtrap.m_energy_points;
	this->m_attack_damage = fragtrap.m_attack_damage;
}

FragTrap&	FragTrap::operator=( const FragTrap& fragtrap ) {
	std::cout << "FragTrap Copy Assignement Operator Called" << std::endl;
	if (this == &fragtrap)
		return (*this);
	this->m_name = fragtrap.m_name;
	this->m_health_points = fragtrap.m_health_points;
	this->m_energy_points = fragtrap.m_energy_points;
	this->m_attack_damage = fragtrap.m_attack_damage;
	return (*this);
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap Destructor Called" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap High Fives! Who wants some?" << std::endl;
}
