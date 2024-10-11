/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:53:18 by iassil            #+#    #+#             */
/*   Updated: 2024/10/01 12:45:42 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw() {
	return ( "AForm - Grade too High!" );
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ( "AForm - Grade too Low!" );
}

const char* AForm::FormNotSignedException::what() const throw() {
	return ( "AForm - Form Not Signed!" );
}

AForm::AForm()
	: name("Unknown"), is_signed(false), gr_sign_required(75), gr_execute_required(75) { }

AForm::AForm(const std::string& name, int gr_sign_required, int gr_execute_required)
	: name(name), is_signed(false),
		gr_sign_required(gr_sign_required), gr_execute_required(gr_execute_required)  {

	if (gr_sign_required < 1 || gr_execute_required < 1)
		throw AForm::GradeTooHighException();
	else if (gr_sign_required > 150 || gr_execute_required > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& obj)
	: name(obj.name), is_signed(obj.is_signed),
		gr_sign_required(obj.gr_execute_required), gr_execute_required(obj.gr_execute_required) { }
		
AForm& AForm::operator=(const AForm &obj) {
	if (&obj == this)
		return ( *this );
	is_signed = obj.is_signed;
	return ( *this );
}

AForm::~AForm() { }

const std::string	AForm::getName() const {
	return ( this->name );
}

bool	AForm::getIsSigned() const {
	return ( this->is_signed );
}

int	AForm::getGradeReqSignIt() const {
	return ( this->gr_sign_required );
}

int	AForm::getGradeReqExecuteIt() const {
	return ( this->gr_execute_required );
}

void	AForm::beSigned(const Bureaucrat& bureaucrat) {
	if ( bureaucrat.getGrade() <= gr_sign_required )
		this->is_signed = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& out, const AForm& obj) {
	out << obj.getName() << ", AForm grade required to sign it " << obj.getGradeReqSignIt()
		<< ", AForm grade required to execute it " << obj.getGradeReqExecuteIt();
	if (obj.getIsSigned())
		out << ", the AForm is signed.";
	else
		out << ", the AForm is Not signed.";
	return (out);
}
