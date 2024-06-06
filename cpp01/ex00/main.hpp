/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 05:45:39 by iassil            #+#    #+#             */
/*   Updated: 2024/06/05 05:50:16 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP
#include "Zombie.hpp"
#include <iostream>

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif