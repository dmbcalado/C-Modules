/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:19:10 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 17:31:55 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ------------- Parameterized Constructor-------------
Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name), Grade(grade){
	if (grade < 1) {
		throw(Bureaucrat::GradeTooHighException);
	}
	else if (grade >= 150) {
		throw(Bureaucrat::GradeTooLowException);
	}
	std::cout << "Bureaucrat " << Name;
	std::cout << " with grade : " << Grade;
	std::cout << " created." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : Name(obj.Name), Grade(obj.Grade) {
	std::cout << "Bureaucrat Copy Constructor called." ;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat& obj) {
	Grade = obj.Grade;
	return(*this);
}


Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destroyed.";
	std::cout << std::endl;
}

std::string	Bureaucrat::getName() const {
	return Name;
}

int	Bureaucrat::getGrade() const {
	return Grade;
}

void	Bureaucrat::IncreaseGrade() {
	if (Grade > 1) {
		Grade--;
		std::cout << "Bureaucrat " << Name << " has climbed the letter." << std::endl;
	}
	else {
		std::cout << "Bureaucrat " << Name << " has ";
		throw(Bureaucrat::GradeTooHighException);
	}
}

void	Bureaucrat::DecreaseGrade() {
	if (Grade < 150) {
		Grade++;
		std::cout << "Bureaucrat " << Name << " has lower in the ladder." << std::endl;
	}
	else {
		std::cout << "Bureaucrat " << Name << " has ";
		throw(Bureaucrat::GradeTooLowException);
	}
}

void	Bureaucrat::signForm(std::string form_name, bool isSigned) {
	if (isSigned == true)
		std::cout << Name << " \033[102m\033[1msigned " << form_name << "\033[0m" << std::endl;
	else
		std::cout << Name << " \033[104m\033[1mcouldn't sign " << form_name << "\033[0m because the grade wasn't enough." << std::endl;
}

void	Bureaucrat::executeForm(AForm const &form) {
		form.execute(*this);
}

std::ostream& operator <<(std::ostream& stream, Bureaucrat& Bc) {
	stream << "Name : " << Bc.getName() << std::endl;
	stream << "Grade : " << Bc.getGrade() << "\n" << std::endl;
	return stream;
}