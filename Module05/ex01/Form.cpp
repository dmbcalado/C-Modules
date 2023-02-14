/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:09:01 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/14 18:01:50 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//	FORM FUNCTIONS

Form::Form(std::string name, int signinggrade, int executiongrade) : Name(name), signingGrade(signinggrade), executionGrade(executiongrade)
{
	if (signinggrade < 1 ) {
		std::cout << "Form " << Name << std::endl;
		throw(GradeTooHighException);
	}
	else if (signinggrade > 150) {
		std::cout << "Form " << Name << std::endl;
		throw(GradeTooLowException);
	}
	std::cout << "form " << Name << " with required grade = " << signingGrade << " was created." << std::endl;
}

std::string Form::getName() const {
	return Name;
}

bool Form::getIsSigned() const {
	return isSigned;
}

int Form::getSigningGrade() const {
	return signingGrade;
}

int Form::getExecutionGrade() const {
	return executionGrade;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
		if (bureaucrat.getGrade() <= signingGrade)
		{
			isSigned = true;
			bureaucrat.signForm(this->getName(), isSigned);
		}
		throw GradeTooLowException;
	}

// OVERLOAD OF << OPERATOR

std::ostream& operator<<(std::ostream& stream, Form const &form) {
	stream << "Form: " << form.getName() << std::endl;
	stream << "Signed: " << form.getIsSigned() << std::endl;
	stream << "Signing Grade: " << form.getSigningGrade() << std::endl;
	stream << "Execution Grade: " << form.getExecutionGrade();
	return stream;
}
