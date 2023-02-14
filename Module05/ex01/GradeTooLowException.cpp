/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:04 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/14 17:35:56 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

const char	*TooLowException::what() const throw() {
	std::cout << " wants a lower grade then the best. No can do.\n" << std::endl;
	return ("Too low grade error.");
}