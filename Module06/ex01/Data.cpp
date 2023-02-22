/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:19:10 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/22 18:44:39 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The trick in this Data is using static_cast<int> template.

#include "Data.hpp"

Data::Data() {
	std::string arg_default[1];
	arg_default[0] = "Standard Initialization.";
	std::cout << "Default Data constructed." << std::endl;
	Name = "Default Data Structure";
	args = arg_default;
	nbr_args = 1;
}

Data::Data(std::string name, int n_args, std::string *args) {
	std::cout << "Parameterized Data constructed." << std::endl;
	Name = name;
	args = args;
	nbr_args = n_args;
}

Data::~Data() {
	std::cout << Name << " destroyed." << std::endl;
}

Data::Data(const Data &original)
{
	this->Name = original.Name;
	this->args = original.args;
	this->nbr_args = original.nbr_args;
	std::cout << " Data Copy Constructor called." << std::endl;
}

Data &Data::operator=(const Data &original)
{
	this->Name = original.Name;
	this->args = original.args;
	this->nbr_args = original.nbr_args;
	std::cout << " Data Copy Assigment operator called" << std::endl;
	return (*this);
}