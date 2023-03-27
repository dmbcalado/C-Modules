/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:15:20 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/27 21:00:26 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

ReversePN::ReversePN() 
{
	//std::cout << "ReversePN created." << std::endl;
}

ReversePN::ReversePN(const ReversePN &obj)
{
	this->data = obj.data;
	//std::cout << " ReversePN Copy Constructor called." << std::endl;
}

ReversePN &ReversePN::operator=(const ReversePN &obj)
{
	this->data = obj.data;
	//std::cout << " ReversePN Copy Assigment operator called." << std::endl;
	return (*this);
}

int		ReversePN::ReturnSize(void)
{
	return (data.size());
}

int		ReversePN::ReturnTop(void)
{
	return (data.top());
}

void	ReversePN::AddNbr(int nbr)
{
	data.push(nbr);
}

int	ReversePN::PerformOperation(int oper)
{
	int f_nbr, s_nbr;
	if (data.size() < 2) {
		std::cout << "Error" << std::endl;
		return (-1);
	}
	f_nbr = data.top();
	data.pop();
	s_nbr = data.top();
	data.pop();
	if (oper == 1)
		data.push(s_nbr + f_nbr);
	if (oper == 2)
		data.push(s_nbr - f_nbr);
	if (oper == 3)
		data.push(s_nbr / f_nbr);
	if (oper == 4)
		data.push(s_nbr * f_nbr);
	return (1);
	//std::cout << "result is : " <<  data.top() << std::endl;
}

int	ReversePN::CharToInt(char c)
{
	if (c >= 48 && c < 58)
		return (c - 48);
	else
		return (-1);
}

int	ReversePN::CharToOperator(char c)
{
	if (c == '+')
		return (1);
	if (c == '-')
		return (2);
	if (c == '/')
		return (3);
	if (c == '*')
		return (4);
	return (-1);
}