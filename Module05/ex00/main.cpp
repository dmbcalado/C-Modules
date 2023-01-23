
# include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Tereza("Tereza", 1);
	Bureaucrat Jorge("Jorge", 2);

	Tereza.getName();
	Tereza.getGrade();

// Running the first tests:

	try{
		Jorge.DecreaseGrade();
		Tereza.DecreaseGrade();
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
	std::cout <<Tereza;
	std::cout <<Jorge;

// More tests:

	Bureaucrat Diogo("Calado", 1);
	Bureaucrat Pedro("Pedro", 3);
	Bureaucrat Lopes = Pedro;

	try{
		Diogo.DecreaseGrade();
		Jorge.DecreaseGrade();
		Lopes.DecreaseGrade();
		Diogo.IncreaseGrade();
		Diogo.IncreaseGrade();
		Tereza.IncreaseGrade();
		Lopes.DecreaseGrade();
	}
	catch (int)
	{
		Bureaucrat::GradeTooHighException().what();
	}
	catch (...)
	{
		Bureaucrat::GradeTooHighException().what() ;
	}
	std::cout <<Diogo;
	std::cout <<Tereza;
	std::cout <<Pedro;
	std::cout <<Lopes;
	std::cout <<Jorge;
}