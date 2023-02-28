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

#include "Span.hpp"

Span::Span(unsigned int n) {
	N = n;
	n_stored = 0;
	std::cout << "Span with N = " << N << " created." << std::endl;
}

void	Span::addNumber(int nbr) {
	if(n_stored < N) {
		List.push_back(nbr);
		n_stored++;
	}
	else
		throw(OutOfRange());
}

void	Span::addNumbers(int nbr_start, int nbr_end)
{
	for(int i = nbr_start; i <= nbr_end; i++)
	{
		if (n_stored < N)
		{
			n_stored++;
			List.push_back(i);
		}
		else
			throw (OutOfRange());
	}
}

int	Span::shortestSpan(void) {
	int	shortest = MAX_INT;
	int	dist;
	if (n_stored > 1) {
		for (int i = 1 ; i < (int)n_stored ; i++) {
			dist = abs(List[i] - List[i - 1]);
			if (dist < shortest) {
				shortest = dist;
			}
		}
		return shortest;
	}
	else
		throw(LessThenTwoNbrs());
}

int	Span::longestSpan(void) {
	int	longest = 0;
	int	dist;
	if (n_stored > 1) {
		for (int i = 1 ; i < (int)n_stored ; i++) {
			dist = abs(List[i] - List[i - 1]);
			if (dist > longest) {
				longest = dist;
			}
		}
		return longest;
	}
	else
		throw(LessThenTwoNbrs());
}