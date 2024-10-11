/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:53:18 by iassil            #+#    #+#             */
/*   Updated: 2024/10/02 20:37:41 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw() {
	return ( "Form - Grade too High!" );
}

const char* Form::GradeTooLowException::what() const throw() {
	return ( "Form - Grade too Low!" );
}

Form::Form()
	: name("Unknown"), is_signed(false), gr_sign_required(75), gr_execute_required(75) { }

Form::Form(const std::string& name, int gr_sign_required, int gr_execute_required)
	: name(name), is_signed(false),
		gr_sign_required(gr_sign_required), gr_execute_required(gr_execute_required)  {

	if (gr_sign_required < 1 || gr_execute_required < 1)
		throw Form::GradeTooHighException();
	else if (gr_sign_required > 150 || gr_execute_required > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& obj)
	: name(obj.name), is_signed(obj.is_signed),
		gr_sign_required(obj.gr_execute_required), gr_execute_required(obj.gr_execute_required) { }
		
Form& Form::operator=(const Form &obj) {
	if (&obj == this)
		return ( *this );
	is_signed = obj.is_signed;
	return ( *this );
}

Form::~Form() { }

const std::string	Form::getName() const {
	return ( this->name );
}

bool	Form::getIsSigned() const {
	return ( this->is_signed );
}

int	Form::getGradeReqSignIt() const {
	return ( this->gr_sign_required );
}

int	Form::getGradeReqExecuteIt() const {
	return ( this->gr_execute_required );
}

void	Form::beSigned(const Bureaucrat& bureaucrat) {
	if ( bureaucrat.getGrade() <= gr_sign_required )
		this->is_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& out, const Form& obj) {
	out << obj.getName() << ", form grade required to sign it " << obj.getGradeReqSignIt()
		<< ", form grade required to execute it " << obj.getGradeReqExecuteIt();
	if (obj.getIsSigned())
		out << ", the form is signed.";
	else
		out << ", the form is Not signed.";
	return (out);
}
