/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 07:11:22 by iassil            #+#    #+#             */
/*   Updated: 2024/07/08 19:09:04 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
	private:
		std::string	type;
	public:
		Weapon( std::string type );
		const std::string&	getType( void ) const ;
		void				setType( std::string input );
};

#endif