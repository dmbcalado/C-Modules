/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:48 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 16:12:24 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define  INTERN_HPP

# include <exception>
# include <unistd.h>
# include <string>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <iostream>
# include <sys/time.h>
# include <bits/stdc++.h>

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class AForm;

class unNamed : public std::exception {
public:
	const char	*what() const throw() {
	std::cout << "\033[101m\033[1mForm without name.\033[0m\n" << std::endl;
	return ("\033[103m\033[1mNo creation available without a name.\033[0m");
	}
} ;


class Intern {

public:

	//Constructors & Destructors
	Intern();
	Intern(const Intern &obj);
	
	Intern &operator = (Intern const &obj);
	~Intern();

	AForm *makeForm(std::string formName, std::string Target);

	unNamed NoNameGiven;

} ;

# include "AForm.hpp"

std::ostream &operator<<(std::ostream &stream, Intern &Bc);

#endif