/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:25:17 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 17:42:02 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"


class UnSigned : public std::exception {
public:
	const char	*what() const throw() {
	std::cout << "\033[101m\033[1mForm not signed.\033[0m\n" << std::endl;
	return ("\033[103m\033[1mUnsigned Form.\033[0m");
}
} ;

class ExecutGrade : public std::exception {
public:
	const char	*what() const throw() {
	std::cout << "\033[101m\033[1mGrade too low for execution. \033[0m\n" << std::endl;
	return ("\033[103m\033[1mExecution error.\033[0m");
}
} ;

class AForm {

public:

	AForm(std::string name, int signinggrade, int executiongrade);
	AForm(const AForm &obj);
	AForm &operator = (const AForm &obj);
	virtual ~AForm();

	virtual bool getIsSigned() const;
	virtual std::string getName() const;
	virtual int getSigningGrade() const;
	virtual int getExecutionGrade() const;
	virtual void beSigned(Bureaucrat &bureaucrat);

	UnSigned     NotSigned;
	ExecutGrade  ExecutionGrade;
	GradeTooLow  GradeTooLowException;
	GradeTooHigh GradeTooHighException;
	
	virtual void execute(Bureaucrat const &executor) const {
		if (executor.getGrade() <= executionGrade)
		{
			if (isSigned)
			{
				std::cout << "form " << Name << " is signed." << std::endl;
				function();
			}
			else
			{
				std::cout << Name << ": ";
				throw(NotSigned);
			}
		}
		else
		{
			std::cout << executor.getName() << " : ";
			throw(ExecutionGrade);
		}
	}
	virtual void function() const = 0;

private:
	bool isSigned;
	const std::string Name;
	const int signingGrade;
	const int executionGrade;
} ;

std::ostream& operator <<(std::ostream &stream, AForm const &form);

#endif