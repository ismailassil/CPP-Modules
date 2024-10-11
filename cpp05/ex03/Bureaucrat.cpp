/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:28:40 by iassil            #+#    #+#             */
/*   Updated: 2024/10/02 20:39:23 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ( "Grade too high!" );
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ( "Grade too low!" );
}

Bureaucrat::Bureaucrat()
	: name("Unknown"), grade(13) { }

Bureaucrat::Bureaucrat( const Bureaucrat& obj )
	: name(obj.name), grade(obj.grade) { }

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj ) {	
	if (&obj == this)
		return ( *this );
	(std::string)this->name = obj.getName();
	this->grade = obj.getGrade();
	return ( *this );
}

Bureaucrat::Bureaucrat( const std::string& name, int grade ) : name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat() { }

const std::string	Bureaucrat::getName() const {
	return ( this->name );
}

int		Bureaucrat::getGrade() const {
	return ( this->grade );
}

void	Bureaucrat::decrementGrade() {
	this->grade++;
	if (this->grade > 150) {
		this->grade--;
		throw Bureaucrat::GradeTooLowException();
	}
}

void	Bureaucrat::incrementGrade() {
	this->grade--;
	if (this->grade < 1) {
		this->grade++;
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::signForm( const AForm& AForm ) const {
	if (AForm.getIsSigned()) {
		std::cout << this->getName() << " signed " << AForm.getName() << std::endl;
	} else {
		std::cout << this->getName() << " couldn't sign " << AForm.getName() << " because ";
		if (AForm.getGradeReqSignIt() > this->grade)
			std::cout << this->getName() << " grade is too Low!" << std::endl;
	}
}

void	Bureaucrat::executeForm( AForm const & form ) const {
	try {
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << "." << std::endl;
	} catch (std::exception& e) {	
		std::cout << this->name << " could not execute " << form.getName() << ", because "
			<< e.what() << std::endl;
	}
}

std::ostream& operator<<( std::ostream& out, const Bureaucrat& obj ) {
	return (out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".");
}
