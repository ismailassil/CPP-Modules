/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:53:26 by iassil            #+#    #+#             */
/*   Updated: 2024/10/01 12:11:32 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include <exception>
#include <iostream> // IWYU pragma: keep
#include <ostream>

class Bureaucrat;

class AForm {
	private:
		const std::string	name;
		bool			is_signed;
		const int		gr_sign_required;
		const int		gr_execute_required;

	public:
		AForm();
		AForm(const std::string& name, int gr_sign_required, int gr_execute_required);
		AForm(const AForm& obj);
		AForm& operator=(const AForm &obj);
		virtual ~AForm();

		const std::string	getName() const ;
		bool			getIsSigned() const ;
		int				getGradeReqSignIt() const ;
		int				getGradeReqExecuteIt() const ;

		void			beSigned(const Bureaucrat& bureaucrat);

		virtual void	execute(Bureaucrat const & executor) const = 0;
		
		class	GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		class	FormNotSignedException : public std::exception {
			public:
				const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const AForm& obj);