/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:35:00 by iassil            #+#    #+#             */
/*   Updated: 2024/06/30 09:36:54 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class	Cure : public AMateria {
	public:
		Cure( void );
		Cure( const Cure& other );
		Cure&	operator=( const Cure& other );
		~Cure();

		AMateria* clone() const ;
		void use( ICharacter& target );
};
