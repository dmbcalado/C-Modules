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
	int	cnt = 0, nbr, oper;

	std::cout << std::endl;
	if (argc >= 2)
	{
		ReversePN	Calculator;

		if (argc == 2)
		{
			std::string str = argv[1], splited_str;
			std::stringstream stream(str);
			while(std::getline(stream, splited_str, ' '))
			{
				if (cnt == 0 || cnt % 2 == 1)
				{
					nbr = Calculator.CharToInt(splited_str[0]);
					std::cout << nbr << std::endl;
					if(nbr >= 0)
						Calculator.AddNbr(nbr);
				}
				else
				{
					oper = Calculator.CharToOperator(splited_str[0]);
					if (oper > 0)
						Calculator.PerformOperation(oper);
				}
				cnt++;
			}
		}
	}
}
