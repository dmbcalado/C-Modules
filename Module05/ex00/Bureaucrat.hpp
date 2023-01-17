
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

class Bureaucrat {

public:

	//Constructors & Destructors
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	// Getters
	int			getGrade();
	std::string	getName();

	//Increase and Decrease grade
	void	IncreaseGrade();
	void	DecreaseGrade();


	class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw(int);
	} ;

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw(int);
	} ;

private:
	std::string	Name;
	int			Grade;

} ;

#endif