/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 05:39:00 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 15:57:10 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	ClapTrap {
	protected:
		std::string	m_name;
		int			m_health_points;
		int			m_energy_points;
		int			m_attack_damage;
	public:
		ClapTrap( void ); // Default Constructor
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& target ); // Copy Constructor
		ClapTrap&	operator=( const ClapTrap& target ); // Copy Assignment Operator
		~ClapTrap( void ); // Deconstructor

		virtual void	attack( const std::string& target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
};
