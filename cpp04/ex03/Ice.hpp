/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:38:05 by iassil            #+#    #+#             */
/*   Updated: 2024/06/27 15:06:14 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "main.hpp" // IWYU pragma: keep

class	Ice : public AMateria {
	public:
		Ice( void );
		Ice( const Ice& other );
		Ice&	operator=( const Ice& other );
		~Ice();

		AMateria* clone() const ;
		void use( ICharacter& target );
};