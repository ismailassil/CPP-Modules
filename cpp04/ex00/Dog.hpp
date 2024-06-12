/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:00:41 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 22:09:17 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class	Dog : public Animal {
	public:
		Dog( void ); // Default Constructor
		Dog( const Dog& Dog ); // Copy Constructor
		Dog&	operator=( const Dog &dog ); // Copy Assignment Operator
		~Dog( void ); // Destructor
		void	makeSound( void ) const ;
};