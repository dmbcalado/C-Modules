/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:31:22 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 15:46:55 by ratinhosujo      ###   ########.fr       */
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
	srandom(tm.tv_sec + tm.tv_usec * 1000000ul);
	int num = rand();
	num = num % 100;
	if (num > 50)
		std::cout << target << " has been robotomized successfully 50% of the time." << std::endl;
	else
		std::cout << target << " Robotomy has failed." << std::endl;
}