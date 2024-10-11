/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:28:38 by iassil            #+#    #+#             */
/*   Updated: 2024/10/11 12:22:52 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ostream>

class Bureaucrat {
	private:
		const std::string	name;
		int					grade;
	
	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade); // Parametric Constructor
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		~Bureaucrat();
		
		
		const std::string	getName() const ;
		int				getGrade() const ;

		void	incrementGrade();
		void	decrementGrade();

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char*	what() const throw();
		};
};

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& obj );
