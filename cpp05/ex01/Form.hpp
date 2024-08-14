/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 01:20:45 by iassil            #+#    #+#             */
/*   Updated: 2024/08/14 05:06:14 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream> // IWYU pragma: keep
#include "Bureaucrat.hpp"

using std::string;
using std::exception;

class Bureaucrat;

class Form {
	private:
		const string	name;
		bool			sign;
		const int		r_sign_it;
		const int		r_execute_it;
	
	public:
		// Parameteric Constructors
		Form(const string& name);
		Form(const string name, const int sign_it);
		Form(const string name, const int sign_it, const int r_execute_it);
		
		Form( void ); // Default Constructor
		Form( const Form& other ); // Copy Constructor
		Form&	operator=( const Form& other ); // Copy Assignement Operator
		~Form(); // Destructor
		
		string	getName( void ) const ;
		int		getSign( void ) const ;
		void	setSign( bool flag );
		int		getSignIt( void ) const ;
		int		getExecuteIt( void ) const ;

		void	beSigned( Bureaucrat& other );

		class GradeTooLowException : public exception {
			virtual const char * what() const throw();
		};

		class GradeTooHighException : public exception {
			virtual const char * what() const throw();
		};
};

std::ostream&	operator<<( std::ostream& out, const Form& other );
