/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:00:40 by iassil            #+#    #+#             */
/*   Updated: 2024/06/30 09:37:42 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {
	private:
		const static int	SIZE;
		int					count;
		AMateria*			src[4];

	public:
		// Constructors and Destrucor
		////////////////////////////////////////////////
		MateriaSource( void ); // Default Constructor
		MateriaSource( const MateriaSource& other ); // Copy Constructor
		MateriaSource&	operator=( const MateriaSource& other ); // Copy Assignment Operator
		~MateriaSource(); // Destructor
		////////////////////////////////////////////////
		void		learnMateria(AMateria* other);
		AMateria*	createMateria(std::string const & type);
};
