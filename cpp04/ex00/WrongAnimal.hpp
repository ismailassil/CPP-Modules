/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:54 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 22:05:58 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	WrongAnimal {
	protected:
		std::string	type;
	
	public:
		WrongAnimal( void ); // Default Constructor
		WrongAnimal( const WrongAnimal& wrongAnimal ); // Copy Constructor
		WrongAnimal&	operator=( const WrongAnimal &wrongAnimal ); // Copy Assignment Operator
		~WrongAnimal( void ); // Destructor
		void					makeSound( void ) const ;
		const std::string		getType( void ) const ;
};
