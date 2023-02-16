/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:26:47 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 17:41:23 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//	AForm FUNCTIONS

AForm::AForm(std::string name, int signinggrade, int executiongrade) : \
	 isSigned(false), Name(name), signingGrade(signinggrade), executionGrade(executiongrade)
{
	if (signinggrade < 1 ) {
		std::cout << "AForm " << Name << std::endl;
		throw(GradeTooHighException);
	}
	else if (signinggrade > 150) {
		std::cout << "AForm " << Name << std::endl;
		throw(GradeTooLowException);
	}
	std::cout << "AForm " << Name << std::endl;
	std::cout << "with signingGrade : " << signingGrade << " | executionGrade : " << executionGrade << std::endl;
	std::cout << "was created. " << std::endl;
}

AForm::AForm(const AForm &obj) : \
	isSigned(false), Name(obj.Name), signingGrade(obj.signingGrade), executionGrade(obj.executionGrade)
{
	std::cout << "AForm Copy Constructor called.." ;
}

AForm &AForm::operator = (const AForm &obj)
{
	isSigned = obj.isSigned;
	return (*this);
}


AForm::~AForm() {
	std::cout << "AForm " << Name << " destroyed." << std::endl;
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
	if (bureaucrat.getGrade() <= signingGrade) {
			isSigned = true;
			bureaucrat.signForm(this->getName(), isSigned);
		}
	else
	{
		std::cout << bureaucrat.getName() << " couldn't sign : ";
		throw(GradeTooLowException);
	}
}

// OVERLOAD OF << OPERATOR

std::ostream& operator <<(std::ostream& stream, AForm const &AForm) {
	stream << "AForm: " << AForm.getName() << std::endl;
	stream << "Signed: " << AForm.getIsSigned() << std::endl;
	stream << "Signing Grade: " << AForm.getSigningGrade() << std::endl;
	stream << "Execution Grade: " << AForm.getExecutionGrade();
	return stream;
}
