/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:04 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/14 18:37:20 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

const char	*TooLowException::what() const throw() {
	std::cout << "\033[101m\033[1mToo low grade. No can do.\033[0m\n" << std::endl;
	return ("Too low grade error.");
}