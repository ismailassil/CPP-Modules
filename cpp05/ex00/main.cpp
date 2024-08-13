/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 03:40:44 by iassil            #+#    #+#             */
/*   Updated: 2024/08/13 04:14:03 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // IWYU pragma: keep

using std::string;

int main( void )
{
	int *a = NULL;
	try
	{
		a = new int[35555555555555];
		throw std::exception();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Everything is good" << std::endl;
	if (a != NULL)
		delete a;
}
