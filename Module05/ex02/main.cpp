/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 04:37:02 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{	// Tereza should be hired in 2nd attempt
	{
		RobotomyRequestForm Robot_Form("you");
		PresidentialPardonForm Pres_Form("Me");
		ShrubberyCreationForm TreeLover("Hippie");
		Bureaucrat Tereza("Tereza", 3);
		Bureaucrat Jorge("Jorge", 5);
		std::cout << std::endl;

		Tereza.getName();
		Tereza.getGrade();
		try{
			TreeLover.beSigned(Jorge);
			Jorge.executeForm(TreeLover);
			Pres_Form.beSigned(Tereza);
			Tereza.executeForm(Pres_Form);
			Tereza.executeForm(Robot_Form);
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
}