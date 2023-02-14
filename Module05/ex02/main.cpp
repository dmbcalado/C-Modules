/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/14 18:39:23 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{	// Tereza should be hired in 2nd attempt
	{
		Form Hiring("beHired", 2, 5);
		Bureaucrat Tereza("Tereza", 3);
		Bureaucrat Jorge("Jorge", 5);
		std::cout << std::endl;

		Tereza.getName();
		Tereza.getGrade();
		try{
			Jorge.DecreaseGrade();
			Hiring.beSigned(Tereza);
			Tereza.IncreaseGrade();
			Hiring.beSigned(Tereza);
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
	// GradeTooLowException should be hited in Jorge's 2nd attempt
	std::cout << std::endl;
	{
		Form Hiring("beHired", 2, 5);
		Bureaucrat Tereza("Tereza", 3);
		Bureaucrat Jorge("Jorge", 4);
		std::cout << std::endl;

		Tereza.getName();
		Tereza.getGrade();
		try{
			Jorge.DecreaseGrade();
			Hiring.beSigned(Tereza);
			Hiring.beSigned(Jorge);
			Jorge.DecreaseGrade();
			Hiring.beSigned(Jorge);
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
	// GradeTooLowException should be hited in Tereza
	std::cout << std::endl;
	{
		Form Hiring("beHired", 2, 5);
		Bureaucrat Tereza("Tereza", 1);
		Bureaucrat Jorge("Jorge", 4);
		std::cout << std::endl;

		Tereza.getName();
		Tereza.getGrade();
		try{
			Tereza.IncreaseGrade();
			Hiring.beSigned(Tereza);
			Hiring.beSigned(Jorge);
			Hiring.beSigned(Tereza);
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
}