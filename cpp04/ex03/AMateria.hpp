/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:07:05 by iassil            #+#    #+#             */
/*   Updated: 2024/06/27 15:05:35 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "main.hpp" // IWYU pragma: keep

class AMateria {
	protected:
		std::string	type;
		// [...]
	public:
		// [...]
		AMateria( void ); // Default Constructor
		AMateria( const AMateria& other ); // Copy Constructor
		AMateria&	operator=( const AMateria& other ); // Copy Assignment Operator
		virtual	~AMateria();

		AMateria(std::string const & type);
		std::string const & getType() const; // Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
