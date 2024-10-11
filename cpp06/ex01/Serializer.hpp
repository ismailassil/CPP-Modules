/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:24:43 by iassil            #+#    #+#             */
/*   Updated: 2024/10/03 18:58:33 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdint>
#include <iostream> // IWYU pragma: keep

struct Data {
	int			ivalue;
	float		fvalue;
	double		dvalue;
	char		character;
	std::string	myString;
};

class Serializer {
	private:
		Serializer();
		Serializer( const Serializer& obj );
		Serializer operator=( const Serializer& obj );
		~Serializer();

	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};