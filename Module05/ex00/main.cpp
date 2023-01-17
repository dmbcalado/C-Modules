
# include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Tereza("Tereza", 1);
	Bureaucrat Jorge("Jorge", 2);
	Bureaucrat Toze;

	Tereza.getName();
	Tereza.getGrade();
	try{
		Tereza.IncreaseGrade();
	}
	catch (int)
	{
		Bureaucrat::GradeTooHighException().what();
	}
	catch (...)
	{
		Bureaucrat::GradeTooHighException().what() ;
	}
}