/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:52:06 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/05 15:17:08 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::string	temp = "idea";
	ideas = new std::string[100];
	for(int i = 0; i < 100; i++) {
		ideas[i] = temp;
	}
	std::cout << "The brain was created" << std::endl;
}

Brain::Brain(const Brain &obj) {
	ideas = obj.ideas;
	std::cout << "Brain Class created." ;
}

Brain &Brain::operator = (const Brain& obj) {
	this->ideas = obj.ideas;
	std::cout << "Brain Class copied." ;
	return(*this);
}

Brain::~Brain() {
	delete[] ideas;
	std::cout << "The brain was destroyed." << std::endl;
}
