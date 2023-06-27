/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:30:58 by psuanpro          #+#    #+#             */
/*   Updated: 2023/06/28 03:51:01 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>

class Array {
	public:
		Array( void ): _size(0), _data(NULL){
			std::cout << "Empty Array created!!" << std::endl;
		};
		Array( const unsigned int n ): _size(n) {
				std::cout << "Copy constructor created!!" << std::endl;
				_data = new T[_size];
		};
		Array<T>( const Array<T>& cp ): _size(cp._size), _data(new T[cp._size]){
			for (unsigned int i = 0; i < _size; i++){
				_data[i] = cp._data[i];
			}
		}
		Array<T>& operator=( const Array<T>& cp ){
			if (this != &cp) {
				delete [] _data;
				_size = cp._size;
				_data = new T[_size];
				for (unsigned int i = 0; i < _size; i++) {
					_data[i] = cp._data[i];
				}
			}
			return (*this);
		};
		T&	operator[](const unsigned int index) {
			if (index < 0 || _size < 0 || index >= _size)
				throw std::overflow_error("index is out of bounds");
			else
				return _data[index];
		};
		unsigned int	size(void){
			return _size;
		};
		~Array(){
			delete [] _data;
			// std::cout << "Array destroy!!" << std::endl;
		};

	private:
		unsigned int	_size;
		T*				_data;
};

#endif
