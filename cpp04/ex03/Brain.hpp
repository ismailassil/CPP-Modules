/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:41:35 by iassil            #+#    #+#             */
/*   Updated: 2024/06/25 15:44:48 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class	Brain {
	protected:
		std::string	ideas[100];
	
	public:
		Brain( void ); // Default Constructor
		Brain( const Brain& other ); // Copy Constructor
		Brain&	operator=(const Brain& other ); // Copy Assignment Operator
		~Brain( void ); // Destructor
};
