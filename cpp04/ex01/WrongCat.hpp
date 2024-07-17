/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:47:18 by iassil            #+#    #+#             */
/*   Updated: 2024/06/11 22:04:35 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	public:
		WrongCat( void ); // Default Constructor
		WrongCat( const WrongCat& other ); // Copy Constructor
		WrongCat&	operator=( const WrongCat &other ); // Copy Assignment Operator
		~WrongCat( void ); // Destructor
		void	makeSound( void ) const ;
};
