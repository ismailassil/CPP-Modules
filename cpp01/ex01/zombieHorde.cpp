/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 04:24:24 by iassil            #+#    #+#             */
/*   Updated: 2024/07/08 18:46:00 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie* newZombies = new Zombie[N];
	for ( int i = 0; i < N; i++ ) {
		newZombies[i].setName(name);
	}
	return (newZombies);
}
