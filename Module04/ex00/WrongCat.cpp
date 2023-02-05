/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:10:00 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/05 15:05:31 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat") {
	std::cout << "A wrong cat has born." ;
	std::cout << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "A wrong cat died from cancer.";
	std::cout << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal("Cat") {
	type = obj.type;
	std::cout << "WrongCat Class created." ;
}

WrongCat &WrongCat::operator = (const WrongCat& obj) {
	this->type = obj.type;
	std::cout << "WrongCat Class copied." ;
	return(*this);
}

void	WrongCat::makeSound() const {
	std::cout << " * wrong miaus * "<< std::endl;
}