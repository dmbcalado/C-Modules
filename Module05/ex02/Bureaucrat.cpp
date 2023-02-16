/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:19:10 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 04:21:36 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ------------- Standard Constructor-------------
Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat created." << std::endl;
}

// ------------- Parameterized Constructor-------------
Bureaucrat::Bureaucrat(std::string name, int grade) {
	Name = name;
	if (grade > 0 && grade < 150) {
		Grade = grade;
	}
	else if (grade < 1) {
		throw(Bureaucrat::GradeTooHighException);
	}
	else if (grade >= 150) {
		throw(Bureaucrat::GradeTooLowException);
	}
	std::cout << "Bureaucrat " << Name;
	std::cout << " with grade = " << Grade;
	std::cout << " created." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) {
	Name = obj.Name;
	Grade = obj.Grade;
	std::cout << "Animal Class created." ;
}


Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destroyed.";
	std::cout << std::endl;
}

std::string	Bureaucrat::getName() {
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