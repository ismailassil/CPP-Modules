/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 04:25:36 by iassil            #+#    #+#             */
/*   Updated: 2024/06/05 20:46:39 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main( void ) {
	Zombie* zombies = zombieHorde( 10, "Ismail Assil" );
	
	for ( int i = 0; i < 10; i++ ) {
		zombies[i].announce();
	}

	delete[] zombies;
	return (0);
}
