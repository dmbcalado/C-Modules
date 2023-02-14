
#include "Bureaucrat.hpp"

// ------------- Standard Constructor-------------
Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat created." << std::endl;
}

// ------------- Parameterized Constructor-------------
Bureaucrat::Bureaucrat(std::string name, int grade) {
	Name = name;
	if (grade > 0 && grade < 150) {
		Grade = grade;
	}
	else if (grade < 1) {
		throw(Bureaucrat::GradeTooHighException);
	}
	else if (grade > 150) {
		throw(Bureaucrat::GradeTooLowException);
	}
	std::cout << "Bureaucrat " << Name << std::endl;
	std::cout << "With grade: " << Grade << std::endl;
	std::cout << "created." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) {
	Name = obj.Name;
	Grade = obj.Grade;
	std::cout << "Animal Class created." ;
}


Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destroyed.";
	std::cout << std::endl;
}

std::ostream& operator<<(std::ostream& stream, Bureaucrat& Bc) {
	stream << "Name : " << Bc.getName() << std::endl;
	stream << "Grade : " << Bc.getGrade() << "\n" << std::endl;
	return stream;
}


std::string	Bureaucrat::getName() {
	return Name;
}

int	Bureaucrat::getGrade() {
	return Grade;
}

void	Bureaucrat::IncreaseGrade() {
	if (Grade > 1) {
		Grade--;
		std::cout << "Bureaucrat " << Name << " has climbed the letter." << std::endl;
	}
	else {
		std::cout << "Bureaucrat " << Name;
		throw(Bureaucrat::GradeTooHighException);
	}
}

void	Bureaucrat::DecreaseGrade() {
	if (Grade < 150) {
		Grade++;
		std::cout << "Bureaucrat " << Name << " has lower in the ladder." << std::endl;
	}
	else {
		std::cout << "Bureaucrat " << Name;
		throw(Bureaucrat::GradeTooLowException);
	}
}

void	Bureaucrat::signForm(std::string form_name, bool isSigned) {
	if (isSigned == true)
		std::cout << Name << " signed " << form_name;
	else
		std::cout << Name << " couldn't sign " << form_name << " because the grade wasn't enough." << std::endl;
}
