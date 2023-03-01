/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:31:22 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/03/01 17:13:42 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : AForm("RobotomyRequestForm", 72, 45), target(Target)
{
	std::cout << "RobotomyRequestForm Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) : AForm(original), target(original.target)
{
	std::cout << "Robotomy Copy Constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destroyed." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &original)
{
	this->target = original.target;
	std::cout << "RobotomyRequestForm Copy Assignment" << std::endl;
	return (*this);
}

void	RobotomyRequestForm::function() const
{
	std::string noises = "* drilling noises *";
	for (int count = 0; count < 3 ; count++) {
		std::cout << noises << std::endl;
		sleep(1);
	}
	struct timeval tm;
	gettimeofday(&tm, NULL);
	srandom(tm.tv_usec % 1000);
	int num = rand() % 100;
	if (num > 50)
		std::cout << target << " has been robotomized successfully 50% of the time." << std::endl;
	else
		std::cout << target << " Robotomy has failed." << std::endl;
}
