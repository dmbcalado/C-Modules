/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/24 14:36:55 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

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
		itr = FirstVector.begin();
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
/* 	// For Maps
	{
		std::map<int, int> sample_map;
		std::map<int, int>::iterator itr;
		itr = sample_map.begin();
		itr = sample_map.insert(itr , <int, int>(200, 12));
		FirstVector.insert (itr, 2, 300);
		
		
		itr = std::find(FirstVector.begin(), FirstVector.end(), 33);
		std::vector<int>::iterator itr2 = easyfind(FirstVector, 33);
		std::cout << "itr : " << std::distance(FirstVector.begin(), itr) << " | " << "itr2 :" << std::distance(FirstVector.begin(), itr) << std::endl;
	}
	 */
	//sample_map.insert({1, 12});
	//sample_map.insert({4, 20});

	return 0;
}

