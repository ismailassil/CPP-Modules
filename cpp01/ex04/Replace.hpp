/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:00:36 by iassil            #+#    #+#             */
/*   Updated: 2024/06/06 12:28:25 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP
#include "main.hpp"

class Replace {
	private:
		std::fstream	InputFile;
		std::fstream	OutputFile;
		std::string		FileName;
		char*			s1;
		char*			s2;
	
	public:
		Replace( std::string filename, char* s1, char* s2 );
		std::string	getFileName( void );
		bool		OpenFiles( void );
		void		ReplaceString( void );
		~Replace( void );
};

#endif // !REPLACE_HPP

