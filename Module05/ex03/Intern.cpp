/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:19:10 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 17:50:18 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// ------------- Standard Constructor-------------
Intern::Intern() {
	std::cout << "Intern created." << std::endl;
}

Intern::Intern(const Intern &obj) {
	(void)obj;
	std::cout << "Intern Copy Constructor called." ;
}

Intern &Intern::operator = (Intern const &obj) {
	(void)obj;
	std::cout << "Intern Copy Assignment called." << std::endl;
	return (*this);
}

Intern::~Intern(){
	std::cout << "Intern destroyed.";
	std::cout << std::endl;
}

AForm *Intern::makeForm(std::string formName, std::string Target) {
	int i;
	std::string forms[4];

	forms[0] = "shrubbery creation";
	forms[1] = "robotomy request";
	forms[2] = "presidential pardon";
	forms[3] = "NULL";
	if(formName.empty() == false) {
		for(i = 0; i < 4; i++) {
			if (!formName.compare(forms[i]))
				break;
		}
		switch(i) {
			case 0:
				std::cout << "Intern create shrubbery form" << std::endl;
				return (new ShrubberyCreationForm(Target));
				break ;
			case 1:
				std::cout << "Intern create robotomy form" << std::endl;
				return (new RobotomyRequestForm(Target));
				break ;
			case 2:
				std::cout << "Intern create presidential form" << std::endl;
				return (new PresidentialPardonForm(Target));
				break ;
			default:
				std::cout << "Not a valid form" << std::endl;
		}
	}
	else
		throw(NoNameGiven);
	return(NULL);
}


std::ostream& operator <<(std::ostream& stream, Intern& Bc) {
	(void)Bc;
	stream << "Intern" << std::endl;
	return stream;
}