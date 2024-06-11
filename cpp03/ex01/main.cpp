/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 06:36:18 by iassil            #+#    #+#             */
/*   Updated: 2024/06/10 21:46:28 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main ( void ) {
	ClapTrap	Kong ("Soulaimane");
	ScavTrap	Joker;

	Kong.attack("Hmida");
	Joker.attack("Hmida");
	Kong.beRepaired(2);
	Kong.takeDamage(3);
	Kong.takeDamage(9);
	Joker.takeDamage(9);
	Joker.beRepaired(9);
	Kong.takeDamage(1);
	Kong.attack("Hmida");
	return (0);
}