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

#include "PmergeMe.hpp"

//Overload of operator << for lists

int main(int argc, char *argv[])
{
	{
		if (argc > 1)
		{
			PmergeMe Sorter(argc, argv);
			std::cout << "Before: ";
			Sorter.PrintStack();
			Sorter.MergeInsertionSort(0, argc - 2);
			std::cout << "After: ";
			Sorter.PrintStack();
			Sorter.GetTime();
			std::cout << "Time to process a range of " << argc -2;
			std::cout << " elements with std::vector : "<< Sorter.GetTime() << " us" << std::endl;
		}
	}
	{
		if (argc > 1)
		{
			PmergeMe SorterD(argc, argv, 0);
			//SorterD.PrintDStack();
			SorterD.MergeInsertionSortD(0, argc - 2);
			//std::cout << std::endl;
			//Sorter.PrintDStack();
			//::cout << std::endl;
			std::cout << "Time to process a range of " << argc -2;
			std::cout << " elements with std::deque : "<< SorterD.GetTime() << " us" << std::endl;
		}
	}
}
