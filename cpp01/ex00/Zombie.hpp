/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 04:24:51 by iassil            #+#    #+#             */
/*   Updated: 2024/06/06 09:42:10 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include "main.hpp"
#include <iostream>

class	Zombie {
	private:
		std::string	_name;
	public:
		Zombie( std::string name );
		void		announce( void );
		~Zombie ( void );
};

#endif
