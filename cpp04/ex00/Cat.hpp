/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:47:18 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 22:09:12 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class	Cat : public Animal {
	public:
		Cat( void ); // Default Constructor
		Cat( const Cat& cat ); // Copy Constructor
		Cat&	operator=( const Cat &Cat ); // Copy Assignment Operator
		~Cat( void ); // Destructor
		void	makeSound( void ) const ;
};
