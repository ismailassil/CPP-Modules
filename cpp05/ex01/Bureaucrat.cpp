/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 03:40:37 by iassil            #+#    #+#             */
/*   Updated: 2024/08/14 04:24:06 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/////--------------------------------------------------------------------/////
const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ( "Grade too Hight" );
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
		return ( "Grade too Low" );
}
/////--------------------------------------------------------------------/////
/////--------------------------------------------------------------------/////

/////--------------------------------------------------------------------/////
Bureaucrat::Bureaucrat( const string& name, int grade ) : name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}
/////--------------------------------------------------------------------/////
/////--------------------------------------------------------------------/////


/////--------------------------------------------------------------------/////
Bureaucrat::Bureaucrat() : name("Unknown"), grade(75) { }

Bureaucrat::Bureaucrat( const Bureaucrat& other )
	: name(other.name), grade(other.grade) { }

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other ) {
	if ( this == &other )
		return ( *this );
	this->grade = other.getGrade();
	return ( *this );
}

Bureaucrat::~Bureaucrat() { }
/////--------------------------------------------------------------------/////
/////--------------------------------------------------------------------/////


/////////////////////////////////////////////////////////////////////////////
const string	Bureaucrat::getName( void ) const {
	return (this->name);
}

int	Bureaucrat::getGrade( void ) const {
	return (this->grade);
}
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
void	Bureaucrat::incrementGrade( void ) {
	this->grade--;
	if (this->grade <= 0) {
		this->grade++;
		throw Bureaucrat::GradeTooHighException();
	}
}
void	Bureaucrat::decrementGrade( void ) {
	this->grade++;
	if (this->grade >= 151) {
		this->grade--;
		throw Bureaucrat::GradeTooLowException();
	}
}
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
void	Bureaucrat::signForm( const Form& other ) {
	if (other.getSign())
		cout << this->getName() + " signed " + other.getName() << endl;
	else
		cout << this->getName() + " couldn't sign " + other.getName() + " because " << endl; // TODO: <reason>
}
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
std::ostream& operator<<( std::ostream& out, const Bureaucrat& obj ) {
	return (out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".");
}
/////////////////////////////////////////////////////////////////////////////
