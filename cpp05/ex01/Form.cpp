/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 03:49:51 by iassil            #+#    #+#             */
/*   Updated: 2024/08/14 05:08:33 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/////--------------------------------------------------------------------/////
Form::Form(const string& name)
	: name(name), r_sign_it(75), r_execute_it(75) { }

Form::Form(const string name, const int sign_it)
	: name(name), r_sign_it(sign_it), r_execute_it(75) { }

Form::Form(const string name, const int sign_it, const int r_execute_it)
	: name(name), r_sign_it(sign_it), r_execute_it(75) { }
/////--------------------------------------------------------------------/////


/////--------------------------------------------------------------------/////
Form::Form( void )
	: name("Unknown"), sign(false), r_sign_it(75), r_execute_it(75) { }

Form::Form( const Form& other )
	: name(other.getName()), sign(other.getSign()),
		r_sign_it(other.getSignIt()),
		r_execute_it(other.getExecuteIt())
{ }

Form&	Form::operator=( const Form& other ) {
	if ( this == &other )
		return ( *this );
	this->sign = other.getSign();
	return ( *this );
}

Form::~Form() { }
/////--------------------------------------------------------------------/////


/////--------------------------------------------------------------------/////
string	Form::getName( void ) const {
	return (this->name);
}

int		Form::getSign( void ) const {
	return (this->sign);
}

void	Form::setSign( bool flag ) {
	this->sign = flag;
}

int		Form::getSignIt( void ) const {
	return (this->r_sign_it);
}

int		Form::getExecuteIt( void ) const {
	return (this->r_execute_it);
}
/////--------------------------------------------------------------------/////


/////--------------------------------------------------------------------/////
void	Form::beSigned( Bureaucrat& other ) {
	if ( other.getGrade() <= this->getSignIt())
		this->setSign( true );
	else
		throw Form::GradeTooLowException();
}
/////--------------------------------------------------------------------/////
