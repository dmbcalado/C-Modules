/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:25:17 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/14 20:27:18 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class AForm {

public:

	AForm(std::string name, int signinggrade, int executiongrade);
	virtual bool getIsSigned() const;
	virtual std::string getName() const;
	virtual int getSigningGrade() const;
	virtual int getExecutionGrade() const;
	virtual void beSigned(Bureaucrat &bureaucrat);

	GradeTooHigh GradeTooHighException;
	GradeTooLow  GradeTooLowException;

private:
	bool isSigned;
	const std::string Name;
	const int signingGrade;
	const int executionGrade;
} ;

std::ostream& operator <<(std::ostream &stream, AForm const &form);

#endif