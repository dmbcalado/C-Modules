
# include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Tereza("Tereza", 1);
	Bureaucrat Jorge("Jorge", 2);

	Tereza.getName();
	Tereza.getGrade();
	try{
		Jorge.DecreaseGrade();
		Tereza.IncreaseGrade();
		Jorge.DecreaseGrade();
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