/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:19:10 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/22 18:44:39 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The trick in this Serializer is using static_cast<int> template.

#include "Data.hpp"
#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << "Default Serializer constructed." << std::endl;
}

Serializer::~Serializer() {
	std::cout << "Serializer destroyed." << std::endl;
}

Serializer::Serializer(const Serializer &original)
{
	std::cout << " Serializer Copy Constructor called." << std::endl;
}

Serializer &Serializer::operator=(const Serializer &original)
{
	std::cout << " Serializer Copy Assigment operator called" << std::endl;
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr) {
	return (uintptr_t) ptr;
}

Data* Serializer::deserialize(uintptr_t raw) {
	return (Data*) raw;
}
