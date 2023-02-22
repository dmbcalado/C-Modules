/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/22 18:48:44 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	return (uintptr_t) ptr;
}

Data* deserialize(uintptr_t raw) {
	return (Data*) raw;
}

int main() {

	std::string	args[3];

	args[0] = "first arg";
	args[1] = "second arg";
	args[2] = "third arg";
	Data	myData;
	Data	yourData("Your Data Structure", 3, args);

	// Serialize the pointer to the Data object
	uintptr_t myPtrValue = serialize(&myData);
	uintptr_t yourPtrValue = serialize(&yourData);

	std::cout << "myPtrValue : " << myPtrValue << std::endl;
	// Deserialize the pointer value and compare with the original pointer
	if (deserialize(myPtrValue) == &myData) {
		std::cout << "Serialization and deserialization successful." << std::endl;
	}
	if (deserialize(yourPtrValue) == &yourData) {
		std::cout << "Serialization and deserialization successful." << std::endl;
	}
	else {
	std::cout << "Serialization and deserialization failed." << std::endl;
	}

	return 0;
}
