/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:24:46 by iassil            #+#    #+#             */
/*   Updated: 2024/10/10 18:20:37 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() { }

Serializer::Serializer( const Serializer& obj ) {
	(void)obj;
}

Serializer Serializer::operator=( const Serializer& obj ) {
	(void)obj;
	return ( *this );
}

Serializer::~Serializer() { }

uintptr_t	Serializer::serialize(Data* ptr) {
	return ( reinterpret_cast<uintptr_t>(ptr) );
}

Data*		Serializer::deserialize(uintptr_t raw) {
	return ( reinterpret_cast<Data*>(raw) );
}
