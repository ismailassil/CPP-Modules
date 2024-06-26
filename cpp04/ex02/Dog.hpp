/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:00:41 by iassil            #+#    #+#             */
/*   Updated: 2024/06/25 17:17:56 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {
	private:
		Brain*	nbrain;

	public:
		Dog( void ); // Default Constructor
		Dog( const Dog& Dog ); // Copy Constructor
		Dog&	operator=( const Dog &dog ); // Copy Assignment Operator
		~Dog( void ); // Destructor
		void	makeSound( void ) const ;
};