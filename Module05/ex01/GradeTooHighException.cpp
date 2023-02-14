/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:04 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/14 18:38:34 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

const char	*TooHighException::what() const throw() {
	std::cout << "\033[101m\033[1mToo high grade. No can do.\033[0m\n" << std::endl;
	return ("Too high grade error.");
}