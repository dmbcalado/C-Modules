/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:47:28 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/15 04:48:49 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("ShruberryCreationForm", 145, 137), target(target)
{
	std::cout << "PresidentialPardonForm Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original) : AForm(original), target(target)
{
	std::cout << "Robotomy Copy Constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Robotomy Destructor called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &original)
{
	this->target = original.target;
	std::cout << "PresidentialPardonForm Copy Assignment" << std::endl;
	return (*this);
}

void	PresidentialPardonForm::function() const
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}