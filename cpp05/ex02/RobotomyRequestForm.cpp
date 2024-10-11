/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:43:09 by iassil            #+#    #+#             */
/*   Updated: 2024/10/11 16:25:53 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::sign = 72;
int RobotomyRequestForm::exec = 45;

RobotomyRequestForm::RobotomyRequestForm() 
	:	AForm("Unknown", 72, 45), target("Unknown") { }

RobotomyRequestForm::RobotomyRequestForm( const std::string& target )
	:	AForm(target, 72, 45), target(target) { }

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& obj )
	:	AForm(obj.target, 72, 45), target(obj.target) { }

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& obj ) {
	if ( &obj == this )
		return ( *this );
	AForm::operator=(obj);
	target = obj.target;
	return ( *this );
}

RobotomyRequestForm::~RobotomyRequestForm() { }

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	if ( executor.getGrade() > exec )
		throw AForm::GradeTooLowException();
	else if ( !this->getIsSigned() )
		throw AForm::FormNotSignedException();
	srand(time(NULL));
	if (rand() % 2) {
		std::cout << "Bzzzzzzzz " << this->target << " has been robotomized successfully!" << std::endl;
	} else {
		std::cout << "Robotomy failed for " << this->target << "." << std::endl;
	}
}

const std::string	RobotomyRequestForm::getTarget() const {
	return ( this->target );
}