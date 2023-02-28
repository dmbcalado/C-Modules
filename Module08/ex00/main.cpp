/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/27 16:48:15 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

//Overload of operator << for lists

template <typename S>
std::ostream& operator<<(std::ostream& os, const std::list<S> &List)
{
	for (std::list<int>::const_iterator it = List.begin(); it != List.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	return os;
}

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
	// For Lists
	{
		std::list<int> FirstList(2,11);
		std::list<int>::iterator itr;
		FirstList.push_back(3);
		FirstList.push_back(5);
		FirstList.push_back(7);
		std::cout << "List :" << std::endl;
		std::cout << FirstList << std::endl;

		try {
			itr = std::find(FirstList.begin(), FirstList.end(), 5);
			std::list<int>::iterator itr2 = easyfind(FirstList, 5);
			std::cout << "itr : " << std::distance(FirstList.begin(), itr);
			std::cout << " | " << "itr2 :" << std::distance(FirstList.begin(), itr2) << std::endl;
			itr = std::find(FirstList.begin(), FirstList.end(), 33);
			itr2 = easyfind(FirstList, 33);
			std::cout << "itr : " << std::distance(FirstList.begin(), itr);
			std::cout << " | " << "itr2 :" << std::distance(FirstList.begin(), itr2) << std::endl;
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
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
			itr = std::find(FirstVector.begin(), FirstVector.end(), 300);
			std::vector<int>::iterator itr2 = easyfind(FirstVector, 300);
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
	std::cout << std::endl;
	std::cout << std::endl;
	// For Map
	{
		std::map<int, int> testmap;
		std::map<int, int>::iterator itr;
		testmap [0] = 1; 
		testmap [1] = 3; 
		testmap [2] = 6; 
		testmap [3] = 2; 
		testmap [4] = 7; 
		testmap [5] = 4;

		std::cout << "Map :" << std::endl;
		try {
			std::cout << easyfind(testmap, 2)->second << std::endl;
			std::cout << easyfind(testmap, 5)->second << std::endl;
			std::cout << easyfind(testmap, 6)->second << std::endl;
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}

	//sample_map.insert({1, 12});
	//sample_map.insert({4, 20});

	return 0;
}

