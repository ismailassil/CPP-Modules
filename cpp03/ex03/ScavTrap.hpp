/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:12:16 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 15:57:10 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap( void ); // Default Constructor
		ScavTrap( const std::string name );
		ScavTrap( const ScavTrap& scavTrap ); // Copy Constructor
		ScavTrap&	operator=( const ScavTrap& scavTrap ); // Copy Assignment Operator
		~ScavTrap( void ); // Destructor

		void			guardGate();
		virtual void	attack( const std::string& target );
};
