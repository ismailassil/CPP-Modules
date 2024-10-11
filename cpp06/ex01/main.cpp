/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:55:24 by iassil            #+#    #+#             */
/*   Updated: 2024/10/03 20:27:29 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main( void ) {

	Data originalData = {42, 3.1432f, 87.912, 'S', "OriginalDataString"};

	std::cout << "Original Data:" << std::endl;
	std::cout << "\tInteger Value:\t" << originalData.ivalue << std::endl;
	std::cout << "\tFloat Value:\t" << originalData.fvalue << std::endl;
	std::cout << "\tDouble Value:\t" << originalData.dvalue << std::endl;
	std::cout << "\tCharacter:\t" << originalData.character << std::endl;
	std::cout << "\tString:\t" << originalData.myString << std::endl;

	uintptr_t	serializedData		= Serializer::serialize(&originalData);

	Data*		deserializedData	= Serializer::deserialize(serializedData);

	if (&originalData == deserializedData) {
		std::cout << "\nSerialization and Deserialization successful!" << std::endl;

		// Print the deserialized data to verify it's the same
		std::cout << "Deserialized Data:" << std::endl;
		std::cout << "\tInteger Value:\t" << deserializedData->ivalue << std::endl;
		std::cout << "\tFloat Value:\t" << deserializedData->fvalue << std::endl;
		std::cout << "\tDouble Value:\t" << deserializedData->dvalue << std::endl;
		std::cout << "\tCharacter:\t" << deserializedData->character << std::endl;
		std::cout << "\tString:\t" << deserializedData->myString << std::endl;
	} else {
		std::cerr << "\nError: Deserialized pointer does not match the original pointer!" << std::endl;
	}
	
	return ( 0 );
}