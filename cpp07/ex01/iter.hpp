/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 07:31:45 by iassil            #+#    #+#             */
/*   Updated: 2024/10/14 11:38:44 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>

template <typename T, typename F>
void	iter( T& arr, size_t n, F func ) {
	
	for ( size_t i = 0; i < n; i++ ) {
		func(arr[i]);
	}
	
}
