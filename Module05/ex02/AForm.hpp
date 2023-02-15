/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:25:17 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/15 06:52:51 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class ExecutGrade : public std::exception {
public:
	const char	*what() const throw() {
	std::cout << "\033[101m\033[1mGrade too low for execution. \033[0m\n" << std::endl;
	return ("\033[103m\033[1mexecution error.\033[0m");
}
} ;

class UnSigned : public std::exception {
public:
	const char	*what() const throw() {
	std::cout << "\033[101m\033[1mForm not signed.\033[0m\n" << std::endl;
	return ("\033[103m\033[1mform error.\033[0m");
}
} ;

class AForm {

public:

	AForm(std::string name, int signinggrade, int executiongrade);
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
		if (executor.getGrade() >= executionGrade)
		{
			if (isSigned)
			{
				std::cout << "form " << Name << " is signed." << std::endl;
				function();
			}
			else
				throw(NotSigned);
		}
		else
			throw(ExecutionGrade);
	}

protected:
		virtual void function() const = 0;
private:
	bool isSigned;
	const std::string Name;
	const int signingGrade;
	const int executionGrade;
} ;

std::ostream& operator <<(std::ostream &stream, AForm const &form);

#endif