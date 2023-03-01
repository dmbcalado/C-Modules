/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/03/01 16:57:31 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// GradeTooHighException should be hited in SMaster
	{
		Bureaucrat SMaster("SMaster", 1);
		Bureaucrat Jorge("Jorge", 2);

		std::cout << Jorge.getName() << std::endl;
		std::cout << Jorge.getGrade() << std::endl;
		try{

			std::cout << std::endl;
			std::cout << SMaster;
			std::cout << Jorge;
			Jorge.decreaseGrade();
			SMaster.increaseGrade();
			Jorge.decreaseGrade();
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
	std::cout << std::endl;
	// GradeTooLowException should be hited in Jorge
	{
		Bureaucrat SMaster("SMaster", 1);
		Bureaucrat Jorge("Jorge", 149);
		try{

			std::cout << std::endl;
			SMaster.getName();
			SMaster.getGrade();
			Jorge.decreaseGrade();
			SMaster.decreaseGrade();
			Jorge.decreaseGrade();
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
	std::cout << std::endl;
	// GradeTooLowException on creation
	{
		try{
			Bureaucrat SMaster("SMaster", 1);
			Bureaucrat Jorge("Jorge", 151);

			std::cout << std::endl;
			SMaster.getName();
			SMaster.getGrade();
			std::cout << Jorge;
			std::cout << SMaster;
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
}
