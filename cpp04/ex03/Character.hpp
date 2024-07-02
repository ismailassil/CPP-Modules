/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:09:26 by iassil            #+#    #+#             */
/*   Updated: 2024/07/02 09:36:14 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter {
	private:
		const static int	SIZE;
		const static int	bSIZE;
		int					index;
		int					counter;
		AMateria*			inventory[4];
		AMateria*			gCollecter[1024];
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