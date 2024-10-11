/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:43:10 by iassil            #+#    #+#             */
/*   Updated: 2024/10/02 20:38:57 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

int PresidentialPardonForm::sign = 25;
int PresidentialPardonForm::exec = 5;

PresidentialPardonForm::PresidentialPardonForm() 
	:	AForm("Unknown", 25, 5), target("Unknown") { }

PresidentialPardonForm::PresidentialPardonForm( const std::string& target )
	:	AForm(target, 25, 5), target(target) { }

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& obj )
	:	AForm(obj.target, 25, 5), target(obj.target) { }

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& obj ) {
	if ( &obj == this )
		return ( *this );
	target = obj.target;
	return ( *this );
}

PresidentialPardonForm::~PresidentialPardonForm() { }

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	if ( executor.getGrade() > exec )
		throw AForm::GradeTooLowException();
	else if ( !this->getIsSigned() )
		throw AForm::FormNotSignedException();
	std::cout << this->target << " - have been Pardoned by Zaphod Beeblebrox." << std::endl;
}

const std::string	PresidentialPardonForm::getTarget() const {
	return ( this->target );
}