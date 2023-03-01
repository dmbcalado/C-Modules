/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:19:10 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/03/01 16:56:50 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ------------- Parameterized Constructor-------------
Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name), Grade(grade) {
	if (Grade < 1) {
		throw(Bureaucrat::GradeTooHighException);
	}
	else if (Grade >= 150) {
		throw(Bureaucrat::GradeTooLowException);
	}
	std::cout << "Bureaucrat " << Name;
	std::cout << " with grade = " << Grade;
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



std::string	Bureaucrat::getName() {
	return Name;
}

int	Bureaucrat::getGrade() {
	return Grade;
}

void	Bureaucrat::increaseGrade() {
	if (Grade > 1) {
		Grade--;
		std::cout << "Bureaucrat " << Name << " has climbed the letter." << std::endl;
		std::cout << Name << ", bureaucrat grade ";
		std::cout << Grade << "." << std::endl;
	}
	else {
		std::cout << "You tried to promote " << Name << ":" << std::endl;
		std::cout << "Bureaucrat " << Name << " has ";
		throw(Bureaucrat::GradeTooHighException);
	}
}

void	Bureaucrat::decreaseGrade() {
	if (Grade < 150) {
		Grade++;
		std::cout << Name << " has lower in the ladder." << std::endl;
		std::cout << Name << ", bureaucrat grade ";
		std::cout << Grade << "." << std::endl;
	}
	else {
		std::cout << "You tried to lower " << Name << ":" << std::endl;
		std::cout << "Bureaucrat " << Name << " has ";
		throw(Bureaucrat::GradeTooLowException);
	}
}

std::ostream& operator<<(std::ostream& stream, Bureaucrat& Bc) {
	stream << Bc.getName() << ", bureaucrat grade ";
	stream << Bc.getGrade() << "." << std::endl;
	return stream;
}
