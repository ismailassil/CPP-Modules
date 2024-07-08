/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 04:25:36 by iassil            #+#    #+#             */
/*   Updated: 2024/07/08 17:51:44 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main( void ) {
	Zombie*		zombie = newZombie("Othmane BOUCHTA");

	randomChump("Ismail ASSIL");
	zombie->announce();	
	delete zombie;
	return (0);
}
