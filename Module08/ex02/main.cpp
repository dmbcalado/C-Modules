/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/28 03:48:37 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

//Overload of operator << for lists

int main(void)
{
	int	save;
	int N = 30;

	std::cout << "Tests on std::stack functions" << std::endl;
	std::cout << std::endl;
	MutantStack<int> my_stack;

	// push all primes till N
	for (int i = 1 ; i < N ; i++) {
		save = 0;
		for (int j = 2 ; j< i; j++) {
			if (i % j == 0)
				save++;
		}
		if (save == 0) {
			my_stack.push(i);
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << my_stack.top() << std::endl; //shows last
	my_stack.pop(); // removes last
	std::cout << my_stack.top() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Tests on iterator, begin() and end()" << std::endl;
	std::cout << std::endl;
	MutantStack<int>::iterator it_begin = my_stack.begin();
	MutantStack<int>::iterator it_end = my_stack.end();
	std::cout << "begin :" << *it_begin << std::endl;
	std::cout << "end :" << *it_end << std::endl;
	std::cout << "all :" << std::endl;
	while (it_begin != it_end)
	{
		std::cout << *it_begin << std::endl;
		++it_begin;
	}

	++it_begin;
	--it_begin;

	return (0);
}