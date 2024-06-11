/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:17:22 by iassil            #+#    #+#             */
/*   Updated: 2024/06/10 22:35:40 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	m_name;
	
	public:
		DiamondTrap( void ); // Default Constructor
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap& diamonTrap ); // Copy Constructor
		DiamondTrap	operator=( const DiamondTrap& diamonTrap ); // Copy Assignement Constructor
		~DiamondTrap( void ); // Destructor

		void			whoAmI();
		virtual	void	attack(const std::string &target);

};