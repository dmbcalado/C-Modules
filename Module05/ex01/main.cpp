/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/03/01 17:02:57 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{	// Elon should be hired in 2nd attempt
	{
		Form Hiring("beHired", 2, 5);
		Bureaucrat Elon("Elon", 3);
		Bureaucrat Jorge("Jorge", 5);
		std::cout << std::endl;

		Elon.getName();
		Elon.getGrade();
		try{
			Jorge.DecreaseGrade();
			Hiring.beSigned(Elon);
			Elon.IncreaseGrade();
			Hiring.beSigned(Elon);
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
	// GradeTooLowException should be hited in Jorge's 2nd attempt
	std::cout << std::endl;
	{
		Form Hiring("beHired", 2, 5);
		Bureaucrat Elon("Elon", 3);
		Bureaucrat Jorge("Jorge", 4);
		std::cout << std::endl;

		Elon.getName();
		Elon.getGrade();
		try{
			Jorge.DecreaseGrade();
			Hiring.beSigned(Elon);
			Hiring.beSigned(Jorge);
			Jorge.DecreaseGrade();
			Hiring.beSigned(Jorge);
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
	// GradeTooLowException should be hited in Elon
	std::cout << std::endl;
	{
		Form Hiring("beHired", 2, 5);
		Bureaucrat Elon("Elon", 1);
		Bureaucrat Jorge("Jorge", 4);
		std::cout << std::endl;

		Elon.getName();
		Elon.getGrade();
		try{
			Elon.IncreaseGrade();
			Hiring.beSigned(Elon);
			Hiring.beSigned(Jorge);
			Hiring.beSigned(Elon);
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
}
