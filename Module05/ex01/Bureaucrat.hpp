
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

class Form {

public:
	Form(std::string const &name, int signingGrade, int executionGrade);

	std::string getName() const;
	bool getIsSigned() const;
	int getSigningGrade() const;
	int getExecutionGrade() const;
	void beSigned(Bureaucrat &bureaucrat);

	friend std::ostream& operator<<(std::ostream& os, Form const &form);

	class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
	} ;

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	} ;

private:
	const std::string name;
	bool isSigned;
	const int signingGrade;
	const int executionGrade;
} ;

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
			virtual const char* what() const throw();
	} ;

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	} ;

private:
	std::string	Name;
	int			Grade;
} ;

#endif