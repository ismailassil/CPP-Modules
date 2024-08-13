/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 03:40:37 by iassil            #+#    #+#             */
/*   Updated: 2024/08/13 06:15:21 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ( "Grade too Hight" );
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
		return ( "Grade too Low" );
}

Bureaucrat::Bureaucrat( const string& name, int grade ) : name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other )
	: name(other.name), grade(other.grade) { }

Bureaucrat::~Bureaucrat() { }

string	Bureaucrat::getName( void ) const {
	return (this->name);
}

int	Bureaucrat::getGrade( void ) const {
	return (this->grade);
}

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

std::ostream& operator<<( std::ostream& out, const Bureaucrat& obj ) {
	return (out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".");
}