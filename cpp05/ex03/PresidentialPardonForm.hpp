/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:43:07 by iassil            #+#    #+#             */
/*   Updated: 2024/10/02 20:38:57 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string		target;
		static int		sign;
		static int		exec;

		PresidentialPardonForm();

	public:
		PresidentialPardonForm( const std::string& target );
		PresidentialPardonForm( const PresidentialPardonForm& obj );
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& obj );
		virtual ~PresidentialPardonForm();

		virtual void	execute(Bureaucrat const & executor) const ;
		const std::string	getTarget() const ;
};