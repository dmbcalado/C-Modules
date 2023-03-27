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

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	//std::cout << "PmergeMe created." << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
	this->stack = obj.stack;
	//std::cout << " PmergeMe Copy Constructor called." << std::endl;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
	this->stack = obj.stack;
	//std::cout << " PmergeMe Copy Assigment operator called." << std::endl;
	return (*this);
}

void	PmergeMe::Merge(int nbr)
{
	
}

void	PmergeMe::Insertion(int start, int last)
{
	for (int i = start; i <= last; i++)
	{
		int tmp = stack[i];
		int j = i;
		while ((j >= 1) && (stack[j - 1] > tmp))
		{
			stack[j] = stack[j - 1];
			j--;
		}
		stack[j] = tmp;
	}
}
