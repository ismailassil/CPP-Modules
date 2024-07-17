/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:47:18 by iassil            #+#    #+#             */
/*   Updated: 2024/07/13 15:17:34 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {
	private:
		Brain*	nbrain;

	public:
		Cat( void ); // Default Constructor
		Cat( const Cat& other ); // Copy Constructor
		Cat&	operator=( const Cat &Cat ); // Copy Assignment Operator
		~Cat( void ); // Destructor
		void	makeSound( void ) const ;
};
