/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:09:26 by iassil            #+#    #+#             */
/*   Updated: 2024/06/30 09:36:25 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter {
	private:
		const static int	SIZE;
		int					index;
		AMateria*			inventory[4];
		std::string			name;

	public:
		////////////////////////////////////////////////
		// Constructors and Destructor
		Character( void );
		Character( const Character& other );
		Character&	operator=( const Character& other );
		~Character();
		////////////////////////////////////////////////
		Character( const std::string name );
		////////////////////////////////////////////////
		std::string const & getName() const ;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};