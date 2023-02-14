/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:04 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/14 15:04:44 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

const char	*TooLowException::what() const throw() {
	std::cout << " is the worst already. Time to fire him.\n" << std::endl;
	return ("Bureaucrat already is the worst");
}