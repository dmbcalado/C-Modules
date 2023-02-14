/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/14 17:48:53 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Form Hiring("beHired", 2, 3);
	Bureaucrat Tereza("Tereza", 3);
	Bureaucrat Jorge("Jorge", 4);

	Tereza.getName();
	Tereza.getGrade();
	try{
		Jorge.DecreaseGrade();
		Tereza.IncreaseGrade();
		Jorge.DecreaseGrade();
	}
	catch (std::exception &error) {
		std::cerr << error.what() << std::endl;
	}
}