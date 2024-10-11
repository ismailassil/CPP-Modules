/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:43:03 by iassil            #+#    #+#             */
/*   Updated: 2024/10/11 11:29:15 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <unistd.h>

int ShrubberyCreationForm::sign = 145;
int ShrubberyCreationForm::exec = 137;

ShrubberyCreationForm::ShrubberyCreationForm() 
	:	AForm("Unknown", 145, 137), target("Unknown") { }

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target )
	:	AForm(target, 145, 137), target(target) { }

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& obj )
	:	AForm(obj.target, 145, 137), target(obj.target) { }

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj ) {
	if ( &obj == this )
		return ( *this );
	target = obj.target;
	return ( *this );
}

ShrubberyCreationForm::~ShrubberyCreationForm() { }

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	if ( executor.getGrade() > exec )
		throw AForm::GradeTooLowException();
	else if ( !this->getIsSigned() )
		throw AForm::FormNotSignedException();
	std::fstream file; file.open((target + "_shrubbery").c_str(), std::fstream::out);
	if (!file.is_open()) {
		std::cerr << "Error Opening the file" << std::endl;
		return ;
	}
	file << "											.				\n\
                                              .         ;  				\n\
                 .              .              ;$     ;;  				\n\
                   ,           ,                :;$  $;   				\n\
                    :         ;                   :;$;'     .,   		\n\
           ,.        $;     $;            ;        $;'    ,;			\n\
             ;       ;$;  $$;        ,     $;    ;$;    ,$'				\n\
              $;       ;$;;      ,  ;       $;  ;$;   ,$;' 				\n\
               ;$;      $;        ;$;        $ ;$;  ,$;'				\n\
                `$;.     ;$;     $;'         `;$$;.$;'					\n\
                 `:;$.    ;$$. $@;        $; ;@$;$'						\n\
                    `:$;.  :;bd$;          $;@$;'						\n\
                      `@$:.  :;$.         ;@@$;'  						\n\
                        `@$.  `;@$.      ;@@$;    						\n\
                          `@$$. `@$$    ;@@$;     						\n\
                            ;@$. :@$$  $@@$;      						\n\
                              $@bd$$$bd$$:;								\n\
                                #@$$$$$:;;								\n\
                                $@@$$$::;								\n\
                                $@@@$(o);  . '   						\n\
                                $@@@o$;:(.,'     						\n\
                            `.. $@@@o$::;        						\n\
                               `)@@@o$::;        						\n\
                                $@@(o)::;        						\n\
                               .$@@@@$::;        						\n\
                               ;$@@@@$::;.       						\n\
                              ;$@@@@$$:;;;.								\n\
                          ...;$@@@@@$$:;;;;,.."							<< std::endl;
	file.close();
}

const std::string	ShrubberyCreationForm::getTarget() const {
	return ( this->target );
}