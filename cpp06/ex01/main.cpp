/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:55:24 by iassil            #+#    #+#             */
/*   Updated: 2024/10/12 14:03:15 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main( void ) {

	Data originalData = {42, 3.1432f, 87.912, 'S', "OriginalDataString"};

	std::cout << "Original Data:" << std::endl;
	std::cout << "- Integer Value:\t" << originalData.ivalue << std::endl;
	std::cout << "- Float Value:\t\t" << originalData.fvalue << std::endl;
	std::cout << "- Double Value:\t\t" << originalData.dvalue << std::endl;
	std::cout << "- Character:\t\t" << originalData.character << std::endl;
	std::cout << "- String:\t\t" << originalData.myString << std::endl;

	uintptr_t	serializedData		= Serializer::serialize(&originalData);

	// std::cout << "\nSerializedData: " << serializedData << std::endl;

	Data*		deserializedData	= Serializer::deserialize(serializedData);

	if (&originalData == deserializedData) {
		std::cout << "\n*** Serialization and Deserialization successful! ***" << std::endl;

		std::cout << "Deserialized Data:" << std::endl;
		std::cout << "- Integer Value:\t" << deserializedData->ivalue << std::endl;
		std::cout << "- Float Value:\t\t" << deserializedData->fvalue << std::endl;
		std::cout << "- Double Value:\t\t" << deserializedData->dvalue << std::endl;
		std::cout << "- Character:\t\t" << deserializedData->character << std::endl;
		std::cout << "- String:\t\t" << deserializedData->myString << std::endl;
	} else {
		std::cerr << "\nError: Deserialized pointer does not match the original pointer!" << std::endl;
	}
	
	return ( 0 );
}