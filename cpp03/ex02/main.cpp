/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 06:36:18 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 15:11:07 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main ( void ) {
	ClapTrap	Clap("Soulaimane");
	ScavTrap	Scav;
	FragTrap	Frag("Hicham");

	Clap.attack("Hicham");
	Scav.takeDamage(0);
	Scav.attack("Hicham");
	Clap.beRepaired(2);
	Scav.attack("Soulaimane");
	Clap.takeDamage(9);
	Frag.attack("Ismail");
	Scav.takeDamage(9);
	Scav.beRepaired(2);
	Clap.attack("Soulaimane");
	Clap.takeDamage(1);
	Clap.attack("Hicham");
	Frag.takeDamage(8);

	return (0);
}