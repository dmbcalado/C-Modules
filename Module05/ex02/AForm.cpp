/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:26:47 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/15 06:25:09 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//	AForm FUNCTIONS

AForm::AForm(std::string name, int signinggrade, int executiongrade) : Name(name), signingGrade(signinggrade), executionGrade(executiongrade)
{
	if (signinggrade < 1 ) {
		std::cout << "AForm " << Name << std::endl;
		throw(GradeTooHighException);
	}
	else if (signinggrade > 150) {
		std::cout << "AForm " << Name << std::endl;
		throw(GradeTooLowException);
	}
	std::cout << "AForm " << Name << " with sign grade = " << signingGrade << " was created." << std::endl;
}

std::string AForm::getName() const {
	return Name;
}

bool AForm::getIsSigned() const {
	return isSigned;
}

int AForm::getSigningGrade() const {
	return signingGrade;
}

int AForm::getExecutionGrade() const {
	return executionGrade;
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= executionGrade)
	{
		if (bureaucrat.getGrade() <= signingGrade)
		{
			isSigned = true;
			bureaucrat.signForm(this->getName(), isSigned);
		}
		else
			bureaucrat.signForm(this->getName(), isSigned);
	}
	else
		throw(GradeTooLowException);
}

// OVERLOAD OF << OPERATOR

std::ostream& operator <<(std::ostream& stream, AForm const &AForm) {
	stream << "AForm: " << AForm.getName() << std::endl;
	stream << "Signed: " << AForm.getIsSigned() << std::endl;
	stream << "Signing Grade: " << AForm.getSigningGrade() << std::endl;
	stream << "Execution Grade: " << AForm.getExecutionGrade();
	return stream;
}
