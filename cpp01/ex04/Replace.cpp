/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:00:36 by iassil            #+#    #+#             */
/*   Updated: 2024/06/06 12:32:27 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Replace::Replace( std::string filename, char* s1, char* s2 ) {
	this->FileName = filename;
	this->s1 = s1;
	this->s2 = s2;
}

Replace::~Replace( void ) {
	this->InputFile.close();
	this->OutputFile.close();
}

bool	Replace::OpenFiles( void ) {
	this->InputFile.open(this->FileName, std::fstream::in);
	if (this->InputFile.fail())
	{
		std::cerr << "Error opening  [" << this->FileName << "]" << std::endl;
		return (true);
	}
	this->OutputFile.open(this->FileName.append(".replace"), std::fstream::app);
	if (this->OutputFile.fail())
	{
		std::cerr << "Error opening [" << this->FileName.append(".replace") << "]" << std::endl;
		return (true);
	}
	return (false);
}

void	Replace::ReplaceString( void ) {
	std::string	input;
	
	if (Replace::OpenFiles())
		return ;
	while (std::getline(this->InputFile, input)) {
		const char*	line = input.c_str();
		for ( int i = 0; i < (int)strlen(line); ) {
			if (!std::strncmp(line + i, this->s1, strlen(s1))) {
				this->OutputFile << s2;
				i += (strlen(s2) - 1);
			}
			else
			{
				this->OutputFile << line[i];
				i++;
			}
		}
		this->OutputFile << '\n';
	}
}
