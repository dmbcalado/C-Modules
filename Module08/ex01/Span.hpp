/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:44:41 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/27 20:55:35 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include <list>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# define MAX_INT 2147483647
class OutOfRange : public std::exception {
public:
	const char	*what() const throw() {
	std::cout << "\033[101m\033[1mOut of Range of the Span List. \033[0m\n" << std::endl;
	return ("\033[103m\033[1mOut of Range\033[0m");
}
} ;

class LessThenTwoNbrs : public std::exception {
public:
	const char	*what() const throw() {
	std::cout << "\033[101m\033[1mNot enought members in List. \033[0m\n" << std::endl;
	return ("\033[103m\033[1mNot enought members\033[0m");
}
} ;

class Span {
public:
	Span(unsigned int n);

	void addNumber(int nbr);
	void addNumbers(int nbr_start, int nbr_end);
	int  shortestSpan(void);
	int  longestSpan(void);


private:
	unsigned int N;
	unsigned int n_stored;
	std::vector<int> List;
};

#endif