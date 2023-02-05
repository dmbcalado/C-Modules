/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:04:33 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/05 15:04:59 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "\033[102m\033[1mA lovely cat has born.\033[0m" ;
	std::cout << std::endl;
}

Cat::~Cat(){
	std::cout << "\033[101m\033[1mThe cat died from old age. RIP.\033[0m";
	std::cout << std::endl;
}

Cat::Cat(const Cat &obj) : Animal("Cat") {
	type = obj.type;
	std::cout << "Cat Class created." ;
}

Cat &Cat::operator = (const Cat& obj) {
	this->type = obj.type;
	std::cout << "Cat Class copied." ;
	return(*this);
}

void	Cat::makeSound() const {
	std::cout << "\033[103m\033[1m* miaus *\033[0m"<<std::endl;
}