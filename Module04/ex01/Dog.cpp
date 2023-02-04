/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:06:21 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/04 17:11:33 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal::Animal("Dog") {
	AnimalBrain = new Brain() ;
	std::cout << "\033[102m\033[1mA lovely dog has born.\033[0m" ;
	std::cout << std::endl;
}

Dog::~Dog(){
	delete AnimalBrain;
	std::cout << "\033[101m\033[1mThe dog died from old age. RIP.\033[0m";
	std::cout << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "\033[103m\033[1m* barks *\033[0m"<<std::endl;
}