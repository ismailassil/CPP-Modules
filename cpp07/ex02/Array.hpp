/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 07:45:06 by iassil            #+#    #+#             */
/*   Updated: 2024/10/04 10:12:25 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <exception>
#include <sys/_types/_u_int.h>

template <typename T>
class Array {
	private:
		u_int	length;
		T*		arr;

	public:
		Array( void ) : length(0) {
			arr = NULL;
		}
		Array( u_int n ) : length(n) {
			arr = new T[n];
			for ( u_int i = 0; i < n; i++ )
				arr[i] = T();
		}
		Array( const Array& obj ) {
			length = obj.size();
			arr = new T[length];
			for ( u_int i = 0; i < length; i++ )
				arr[i] = obj.arr[i];
		}
		Array& operator=( const Array& obj ) {
			if ( &obj == this )
				return ( *this );
			delete[] arr;
			length = obj.size();
			arr = new T[length];
			for ( u_int i = 0; i < length; i++ )
				arr[i] = obj.arr[i];
			return ( *this );
		}
		~Array() {
			delete[] arr;
		}
		
		u_int	size( void ) const {
			return (length);
		}

		T& operator[] (u_int index) {
			if (index < 0 || index >= length)
				throw Array::IndexOutOfBoundException();
			return (arr[index]);
		}

		const T& operator[] (u_int index) const {
			if (index < 0 || index >= length)
				throw Array::IndexOutOfBoundException();
			
			return (arr[index]);
		}

		class IndexOutOfBoundException : public std::exception {
			public:
				const char * what() const throw() {
					return ( "Watch out! - Index out of range" );
				}
		};
};