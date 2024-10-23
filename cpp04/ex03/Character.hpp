/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:09:26 by iassil            #+#    #+#             */
/*   Updated: 2024/10/23 16:00:23 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream> // IWYU pragma: keep
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define MAX_SIZE 1024

class	Character : public ICharacter {
	private:
		const static int	SIZE;
		const static int	bSIZE;
		int					index;
		int					counter;
		AMateria*			inventory[4];
		AMateria*			gCollecter[MAX_SIZE];
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