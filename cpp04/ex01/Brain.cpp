/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:44:55 by iassil            #+#    #+#             */
/*   Updated: 2024/07/17 09:53:14 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain( const Brain& other ) {
	std::cout << "Brain Copy Constructor Called" << std::endl;
	for ( int i = 0; i < 100; i++ ) {
		this->ideas[i] = other.ideas[i];
	}
}

Brain&	Brain::operator=(const Brain& other ) {
	std::cout << "Brain Copy Assignment Operator Called" << std::endl;
	if ( this != &other ) {
		for ( int i = 0; i < 100; i++ ) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Brain Destructor Called" << std::endl;
}
