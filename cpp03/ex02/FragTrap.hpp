/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:54:04 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 15:57:10 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
	public:
		FragTrap( void ); // Default Constructor
		FragTrap( const std::string name );
		FragTrap( const FragTrap& fragtrap ); // Constructor
		FragTrap&	operator=( const FragTrap& fragtrap ); // Copy Assignment operator
		~FragTrap( void );	// Destructor

		void	highFivesGuys(void);
};
