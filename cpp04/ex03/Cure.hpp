/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:35:00 by iassil            #+#    #+#             */
/*   Updated: 2024/06/27 15:06:10 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "main.hpp" // IWYU pragma: keep

class	Cure : public AMateria {
	public:
		Cure( void );
		Cure( const Cure& other );
		Cure&	operator=( const Cure& other );
		~Cure();

		AMateria* clone() const ;
		void use( ICharacter& target );
};
