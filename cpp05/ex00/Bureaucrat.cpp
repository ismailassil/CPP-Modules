/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:28:40 by iassil            #+#    #+#             */
/*   Updated: 2024/10/02 20:37:13 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ( "Grade too high!" );
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ( "Grade too low!" );
}

Bureaucrat::Bureaucrat()
	: name("Unknown"), grade(13) { }

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
	: name(obj.name), grade(obj.grade) { }

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {	
	if (&obj == this)
		return ( *this );
	(std::string)this->name = obj.getName();
	this->grade = obj.getGrade();
	return ( *this );
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) {
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

std::ostream& operator<<( std::ostream& out, const Bureaucrat& obj ) {
	return (out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".");
}
