/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 07:31:45 by iassil            #+#    #+#             */
/*   Updated: 2024/10/23 15:41:43 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>

template <typename T, typename F>
void	iter( T& arr, size_t n, F func ) {
	
	if ( !arr )
		return ;

	for ( size_t i = 0; i < n; i++ ) {
		func(arr[i]);
	}
	
}
