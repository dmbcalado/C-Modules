/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/24 19:07:38 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main() {

	std::string	args[3];

	args[0] = "first arg";
	args[1] = "second arg";
	args[2] = "third arg";
	Data	myData;
	Serializer ser;
	Data	yourData("Your Data Structure", 3, args);

	// Serialize the pointer to the Data object
	uintptr_t myPtrValue = ser.serialize(&myData);
	uintptr_t yourPtrValue = ser.serialize(&yourData);

	std::cout << "myPtrValue : " << myPtrValue << std::endl;
	// Deserialize the pointer value and compare with the original pointer
	if (ser.deserialize(myPtrValue) == &myData) {
		std::cout << "Serialization and deserialization successful." << std::endl;
	}
	if (ser.deserialize(yourPtrValue) == &yourData) {
		std::cout << "Serialization and deserialization successful." << std::endl;
	}
	else {
	std::cout << "Serialization and deserialization failed." << std::endl;
	}

	return 0;
}
