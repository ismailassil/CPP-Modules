/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 03:40:39 by iassil            #+#    #+#             */
/*   Updated: 2024/08/14 04:20:27 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream> // IWYU pragma: keep
#include <ostream>
#include "Form.hpp"

using std::string;
using std::cout;
using std::endl;
using std::exception;

class Form;

class Bureaucrat {
	private:
		const string	name;
		int				grade;

	public:
		Bureaucrat( const string& name, int grade ); // Parametric Constructor
		
		Bureaucrat( void ); // Default Constructor
		Bureaucrat( const Bureaucrat& other ); // Copy Constructor
		Bureaucrat&	operator=( const Bureaucrat& other ); // Copy Assignement Operator
		~Bureaucrat(); // Destructor

		const string	getName( void ) const ;
		int				getGrade( void ) const ;

		void	incrementGrade( void );
		void	decrementGrade( void );

		class GradeTooHighException : public exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public exception {
			public:
				virtual const char* what() const throw();
		};

		void	signForm( const Form& other );
};

std::ostream& operator<<( std::ostream& out, const Bureaucrat& obj );