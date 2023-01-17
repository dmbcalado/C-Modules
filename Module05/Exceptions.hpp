
#ifndef EXCEPTIONS_HPP
# define  EXCEPTIONS_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat::GradeTooLowException : std::exception {

	Bureaucrat::GradeTooLowException() {
		std::cout << "Grade too low to lower more. Exception open." << std::endl;
	};
	
} ;

class	Bureaucrat::GradeTooHighException : std::exception {

	Bureaucrat::GradeTooHighException() {
		std::cout << "Grade too low to lower more. Exception open." << std::endl;
	};
	
} ;

#endif