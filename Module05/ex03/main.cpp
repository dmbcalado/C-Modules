/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 17:06:11 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{	// Junior shouldn't run Robot -> not signed
	std::cout << std::endl;
	std::cout << std::endl;
	{
		Intern Rookie;
		AForm *Robot_Form = Rookie.makeForm("robotomy request", "Eu");
		AForm *Pres_Form = Rookie.makeForm("presidential pardon", "Tu");
		AForm *Berry_Form = Rookie.makeForm("shrubbery creation", "Ele");
		AForm *Wrong_Form = Rookie.makeForm("wrong form", "Ele");
		std::cout << std::endl;

		Bureaucrat Junior("Junior", 3);
		Bureaucrat Senior("Senior", 1);
		std::cout << std::endl;

		try{
			AForm *noForm_Form = Rookie.makeForm("", "Nos");
			Robot_Form->beSigned(Senior);
			Senior.executeForm(*Robot_Form);
			Pres_Form->beSigned(Junior);
			Junior.executeForm(*Pres_Form);
			Berry_Form->beSigned(Senior);
			Wrong_Form->beSigned(Junior);
			noForm_Form->beSigned(Junior);
			Junior.executeForm(*Robot_Form);
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
			delete Robot_Form;
			delete Pres_Form;
			delete Berry_Form;
		}
	}
}