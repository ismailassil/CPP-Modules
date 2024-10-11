/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:43:05 by iassil            #+#    #+#             */
/*   Updated: 2024/10/02 20:38:57 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string		target;
		static int		sign;
		static int		exec;

		RobotomyRequestForm();

	public:
		RobotomyRequestForm( const std::string& target );
		RobotomyRequestForm( const RobotomyRequestForm& obj );
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& obj );
		virtual ~RobotomyRequestForm();

		virtual void	execute(Bureaucrat const & executor) const ;
		const std::string	getTarget() const ;
};