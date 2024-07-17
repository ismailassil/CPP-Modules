/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:54 by iassil            #+#    #+#             */
/*   Updated: 2024/07/13 15:19:06 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream> // IWYU pragma: keep

class	WrongAnimal {
	protected:
		std::string	type;
	
	public:
		WrongAnimal( void ); // Default Constructor
		WrongAnimal( const WrongAnimal& other ); // Copy Constructor
		WrongAnimal&	operator=( const WrongAnimal &other ); // Copy Assignment Operator
		~WrongAnimal( void ); // Destructor
		void					makeSound( void ) const ;
		const std::string		getType( void ) const ;
};
