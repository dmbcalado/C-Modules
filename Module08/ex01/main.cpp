/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/27 21:00:59 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//Overload of operator << for lists

int main()
{
	{
		try {
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			sp.addNumber(23);
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
		
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		try {
			Span sp = Span(10000);
			sp.addNumbers(1, 10000);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		try {
			Span sp = Span(5);
			sp.addNumber(6);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			sp.addNumber(23);
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
		
	}
	return 0;
}
