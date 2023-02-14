/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:13:28 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/14 18:22:59 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"

class Form {

public:

	Form(std::string name, int signinggrade, int executiongrade);
	bool getIsSigned() const;
	std::string getName() const;
	int getSigningGrade() const;
	int getExecutionGrade() const;
	void beSigned(Bureaucrat &bureaucrat);

	TooHighException GradeTooHighException;
	TooLowException  GradeTooLowException;

private:
	bool isSigned;
	const std::string Name;
	const int signingGrade;
	const int executionGrade;
} ;

std::ostream& operator <<(std::ostream &stream, Form const &form);

#endif