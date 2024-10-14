/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 07:45:06 by iassil            #+#    #+#             */
/*   Updated: 2024/10/14 12:02:53 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <exception>

template <typename T>
class Array {
	private:
		size_t	length;
		T*		arr;

	public:
		Array( void ) : length(0) {
			arr = NULL;
		}
		Array( size_t n ) : length(n) {
			arr = new T[n];
			for ( size_t i = 0; i < n; i++ )
				arr[i] = T();
		}
		Array( const Array& obj ) {
			length = obj.size();
			arr = new T[length];
			for ( size_t i = 0; i < length; i++ )
				arr[i] = obj.arr[i];
		}
		Array& operator=( const Array& obj ) {
			if ( &obj == this )
				return ( *this );
			delete[] arr;
			length = obj.size();
			arr = new T[length];
			for ( size_t i = 0; i < length; i++ )
				arr[i] = obj.arr[i];
			return ( *this );
		}
		~Array() {
			delete[] arr;
		}
		
		size_t	size( void ) const {
			return (length);
		}

		T& operator[] ( size_t index ) {
			if (index < 0 || index >= length)
				throw Array::IndexOutOfBoundException();
			return (arr[index]);
		}

		const T& operator[] ( size_t index ) const {
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