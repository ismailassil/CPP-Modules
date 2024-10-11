/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 07:09:16 by iassil            #+#    #+#             */
/*   Updated: 2024/10/04 07:22:50 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	swap(T& a, T& b) {
	T t = a;
	a = b;
	b = t;
}

template <typename T>
T&	min(T& a, T& b) {
	return ( (a == b) ? b : ((a > b) ? b : a) );
}

template <typename T>
T&	max(T& a, T& b) {
	return ( (a == b) ? b : ((a > b) ? a : b));
}