/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 06:36:18 by iassil            #+#    #+#             */
/*   Updated: 2024/06/10 22:40:46 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main ( void ) {
	ClapTrap	Kong ("Soulaimane");
	Kong.attack("Hmida");
	Kong.beRepaired(2);
	Kong.takeDamage(3);
	Kong.takeDamage(9);
	Kong.takeDamage(1);
	Kong.attack("Hmida");
	return (0);
}