/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 07:11:35 by iassil            #+#    #+#             */
/*   Updated: 2024/06/05 22:37:04 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
	private:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanB ( std::string name );
		void	setWeapon( Weapon &tool );
		void	attack( void );
};

#endif