/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:42:57 by iassil            #+#    #+#             */
/*   Updated: 2024/10/11 11:03:49 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <fstream> // IWYU pragma: keep

class ShrubberyCreationForm : public AForm {
	private:
		std::string		target;
		static int		sign;
		static int		exec;

		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm( const std::string& target );
		ShrubberyCreationForm( const ShrubberyCreationForm& obj );
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& obj );
		virtual ~ShrubberyCreationForm();

		virtual void	execute(Bureaucrat const & executor) const ;
		const std::string	getTarget() const ;
};