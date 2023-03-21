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


#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# define MAX_INT 1000

# include <map>
# include <algorithm>
# include <iostream>
# include <fstream>
# include <string>
# include <cstring>

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

class BitcoinExchange {
public:
	BitcoinExchange();
	BitcoinExchange(const char *str);

private:
	std::fstream	in_fname;
	std::ifstream	data_base;
	std::map<std::string, float> data;
	std::map<std::string, float>::iterator itr;

};

#endif