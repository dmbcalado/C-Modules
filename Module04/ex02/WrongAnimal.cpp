/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:17:10 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/05 15:05:20 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Wrong Animal Class created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string name_type) {
	type = name_type;
	std::cout << "Wrong Animal Class created." ;
	std::cout << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
	type = obj.type;
	std::cout << "Animal Class created." ;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal& obj) {
	this->type = obj.type;
	std::cout << "Animal Class copied." ;
	return(*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Wrong Animal Class destroyed.";
	std::cout << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << " * piupius * " << std::endl;
}

std::string	WrongAnimal::getType() const {
	if (!type.empty()) {
		return type;
	}
	else {
		return "";
	}
}
