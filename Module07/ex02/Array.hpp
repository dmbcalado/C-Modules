/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 04:50:05 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/23 20:34:00 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<class T>
class Array {
public:
	Array();
	Array(int n);
	Array(const Array &obj);
	Array &operator =(const Array &obj);
	T &operator [](std::size_t index);
	~Array();
	
	std::size_t size() const {return array_size;}
	std::size_t getElement(int i) {return elements[i];}

	class OutOfRange : public std::exception {
	private:
			virtual const char* what() const throw();
	};

private:
	T *elements;
	std::size_t array_size;
};

template<class T>
Array<T>::~Array(){
	if (elements)
		delete[] elements;
	std::cout << "Array destroyed." << std::endl;
}

template<class T>
Array<T>::Array() {
	array_size = 0;
	elements = new T[array_size]();
	std::cout << "Array Default Constructor called." << std::endl;
}

template<class T>
Array<T>::Array(int n) {
	array_size = n;
	elements = new T[array_size]();
	std::cout << "Array Sized Constructor called." << std::endl;
}


template<class T>
Array<T>::Array(const Array &obj) {
	this->array_size = obj.size();
	this->elements = new T[this->size]();
	*this = obj;
	std::cout << "Array Copy Constructor called." << std::endl;
}

template<class T>
Array<T> &Array<T>::operator =(const Array &obj) {
	this->array_size = obj.size();
	this->elements = new T[this->array_size]();
	*this = obj;
	return (*this);
	std::cout << "Array Copy Assignment operator called." << std::endl;
}
template<class T>
T &Array<T>::operator [](std::size_t index) {
	if (index < this->size()) {
			return (elements[index]);
	}
	else
		throw OutOfRange();
}

template <class T>
const char* Array<T>::OutOfRange::what() const throw()
{
	return ("Trying to access outside of the range of the array.");
}
#endif