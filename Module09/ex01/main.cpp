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

#include "RPN.hpp"

//Overload of operator << for lists

int main(int argc, char *argv[])
{
	int	nbr, oper;

	if (argc >= 2)
	{
		ReversePN	Calculator;

		if (argc == 2 && argv[1][0])
		{
			std::string str = argv[1], splited_str;
			std::stringstream stream(str);
			while(std::getline(stream, splited_str, ' '))
			{
				if (std::isdigit(splited_str[0]))
				{
					nbr = Calculator.CharToInt(splited_str[0]);
					if(nbr >= 0)
						Calculator.AddNbr(nbr);
				}
				else if (splited_str[0] == '+' || splited_str[0] == '-' || splited_str[0] == '*' || splited_str[0] == '/')
				{
					oper = Calculator.CharToOperator(splited_str[0]);
					if (Calculator.PerformOperation(oper) < 0)
						return (-1);
				}
				else
					std::cout << "\033[101m\033[1mError\033[0m" << std::endl;
			}
			if (Calculator.ReturnSize() == 1)
				std::cout << "\033[102m\033[1m" << Calculator.ReturnTop() << "\033[0m" << std::endl;
			else
					std::cout << "\033[101m\033[1mError\033[0m" << std::endl;
		}
	}
	return (0);
}
