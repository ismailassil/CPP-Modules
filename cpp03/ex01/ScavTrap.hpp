/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:12:16 by iassil            #+#    #+#             */
/*   Updated: 2024/06/10 21:59:28 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	public:
		ScavTrap( void ); // Default Constructor
		ScavTrap( const std::string name );
		ScavTrap( const ScavTrap& scavTrap ); // Copy Constructor
		ScavTrap&	operator=( const ScavTrap& scavTrap ); // Copy Assignement Operator
		~ScavTrap( void ); // Destructor

		void			guardGate();
		virtual void	attack( const std::string& target );
};
