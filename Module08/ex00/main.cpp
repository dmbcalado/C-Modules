/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/24 21:24:57 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

// Linked List with begin() , end() , size()

template<typename T>
class LinkedList
{
public:

	LinkedList(T v, LinkedList *prv) {
		value = v;
		next = NULL;
		if (prv)
			prev = prv;
	}

/* 	T::iterator begin(void) {

	}

	T::iterator end(void) {

	} */
	T value;
	LinkedList *next;
	LinkedList *prev;
};

//Overload of operator << for vectors

template <typename S>
std::ostream& operator<<(std::ostream& os, const std::vector<S>& vector)
{
	for (size_t i = 0; i < vector.size(); i++) {
		std::cout << vector[i] << " ";
	}
	std::cout << std::endl;
	return os;
}

int main(void)
{
	// For Vectors
	{
		std::vector<int> FirstVector(2,11);
		std::vector<int>::iterator itr;
		itr = FirstVector.end();
		itr = FirstVector.insert (itr , 200);
		FirstVector.insert (itr, 2, 300);

		std::cout << "Vector :" << std::endl;
		std::cout << FirstVector << std::endl;

		try {
			itr = std::find(FirstVector.begin(), FirstVector.end(), 11);
			std::vector<int>::iterator itr2 = easyfind(FirstVector, 11);
			std::cout << "itr : " << std::distance(FirstVector.begin(), itr);
			std::cout << " | " << "itr2 :" << std::distance(FirstVector.begin(), itr2) << std::endl;
			itr = std::find(FirstVector.begin(), FirstVector.end(), 33);
			itr2 = easyfind(FirstVector, 33);
			std::cout << "itr : " << std::distance(FirstVector.begin(), itr);
			std::cout << " | " << "itr2 :" << std::distance(FirstVector.begin(), itr2) << std::endl;
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
	// For Linked Lists
	{
		LinkedList<int>	LL(3);


		itr = std::find(FirstVector.begin(), FirstVector.end(), 11);
		std::vector<int>::iterator itr2 = easyfind(FirstVector, 11);
		std::cout << "itr : " << std::distance(FirstVector.begin(), itr);
		std::cout << " | " << "itr2 :" << std::distance(FirstVector.begin(), itr2) << std::endl;
		itr = std::find(FirstVector.begin(), FirstVector.end(), 33);
		itr2 = easyfind(FirstVector, 33);
		std::cout << "itr : " << std::distance(FirstVector.begin(), itr);
		std::cout << " | " << "itr2 :" << std::distance(FirstVector.begin(), itr2) << std::endl;
	}

	//sample_map.insert({1, 12});
	//sample_map.insert({4, 20});

	return 0;
}

