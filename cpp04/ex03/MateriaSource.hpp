/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:00:40 by iassil            #+#    #+#             */
/*   Updated: 2024/06/28 11:21:34 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "main.hpp" // IWYU pragma: keep

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
