/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:09:26 by iassil            #+#    #+#             */
/*   Updated: 2024/06/27 15:05:20 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "main.hpp" // IWYU pragma: keep

class	Character : public ICharacter {
	private:
		static int	index;
		AMateria*	inventory[4];
		std::string	name;

	public:
		Character( void );
		Character( const Character& other );
		Character&	operator=( const Character& other );
		~Character();
		std::string const & getName() const ;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};