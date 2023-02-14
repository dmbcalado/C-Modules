/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:48 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/14 14:37:08 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define  BUREAUCRAT_HPP

# include <exception>
# include <unistd.h>
# include <string>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <iostream>
# include <bits/stdc++.h>

#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class Bureaucrat {

public:

	//Constructors & Destructors
	Bureaucrat();
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	Bureaucrat &operator = (const Bureaucrat& old) {
		Name = old.Name;
		Grade = old.Grade;
		std::cout << "Copy assignement operator activated." << std::endl;
		return *this;
	}

	// Getters
	int			getGrade();
	std::string	getName();

	//Increase and Decrease grade
	void	IncreaseGrade();
	void	DecreaseGrade();

	TooHighException GradeTooHighException;
	TooLowException GradeTooLowException;

	

private:
	std::string	Name;
	int			Grade;

} ;

std::ostream &operator<<(std::ostream &stream, Bureaucrat &Bc);

#endif