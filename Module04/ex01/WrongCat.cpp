/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:10:00 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/04 16:12:07 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("Wrong Cat") {
	std::cout << "A wrong cat has born." ;
	std::cout << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "A wrong cat died from cancer.";
	std::cout << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << " * wrong miaus * "<< std::endl;
}