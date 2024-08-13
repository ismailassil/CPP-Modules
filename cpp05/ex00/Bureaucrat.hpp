/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 03:40:39 by iassil            #+#    #+#             */
/*   Updated: 2024/08/13 06:01:04 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream> // IWYU pragma: keep
#include <ostream>

using std::string;
using std::exception;

class Bureaucrat {
	private:
		const string	name;
		int				grade;

	public:
		Bureaucrat( const string& name, int grade ); // Parametric Constructor
		Bureaucrat( const Bureaucrat& other ); // Copy Constructor
		~Bureaucrat();

		string	getName( void ) const ;
		int		getGrade( void ) const ;

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
};

std::ostream& operator<<( std::ostream& out, const Bureaucrat& obj );