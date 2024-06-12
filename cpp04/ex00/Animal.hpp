/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:54 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 22:28:33 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Animal {
	protected:
		std::string	type;
	
	public:
		Animal( void ); // Default Constructor
		Animal( const Animal& animal ); // Copy Constructor
		Animal&	operator=( const Animal &animal ); // Copy Assignment Operator
		virtual ~Animal( void ); // Destructor
		virtual void			makeSound( void ) const ;
		const std::string		getType( void ) const ;
};
