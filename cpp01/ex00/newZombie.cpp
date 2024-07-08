/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 04:24:21 by iassil            #+#    #+#             */
/*   Updated: 2024/07/08 17:42:32 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Zombie*	newZombie( std::string name ) {
	Zombie*	zombie = new Zombie (name);
	return (zombie);
}
