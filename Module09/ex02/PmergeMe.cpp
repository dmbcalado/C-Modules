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
	threshould = 1;
	gettimeofday(&start, NULL);
	//std::cout << "PmergeMe created." << std::endl;
}

PmergeMe::PmergeMe(int argc, char *argv[])
{
	threshould = 1;
	gettimeofday(&start, NULL);
	for (int i = 1; i < argc; i++)
		stack.push_back(std::atoi(argv[i]));
}

PmergeMe::PmergeMe(int argc, char *argv[], int flag)
{
	(void)flag;
	threshould = 1;
	gettimeofday(&start, NULL);
	for (int i = 1; i < argc; i++)
		stack_deque.push_back(std::atoi(argv[i]));
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
	this->threshould = obj.threshould;
	this->stack = obj.stack;
	this->stack_deque = obj.stack_deque;
	//std::cout << " PmergeMe Copy Constructor called." << std::endl;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
	this->threshould = obj.threshould;
	this->stack = obj.stack;
	this->stack_deque = obj.stack_deque;
	//std::cout << " PmergeMe Copy Assigment operator called." << std::endl;
	return (*this);
}

void	PmergeMe::PrintStack(void)
{
	std::vector<int>::iterator itr = stack.begin();
	while(itr != stack.end())
	{
		std::cout << *itr << " ";
		itr++;
	}
	std::cout << std::endl;
}

void	PmergeMe::PrintDStack(void)
{
	std::deque<int>::iterator itr = stack_deque.begin();
	while(itr != stack_deque.end())
	{
		std::cout << *itr << " ";
		itr++;
	}
	std::cout << std::endl;
}

void	PmergeMe::Merge(int left, int mid, int right)
{
	int i = 0, j = 0, k = left;
	int end_l = mid - left + 1;
	int end_r = right - mid;
	std::vector<int>::iterator itr_l = stack.begin() + left;
	std::vector<int>::iterator itr_r = stack.begin() + mid + 1;
	std::vector<int> l_vec(itr_l, itr_l + end_l);
	std::vector<int> r_vec(itr_r, itr_r + end_r);
	while (i < end_l && j < end_r)
	{
		if (l_vec[i] <= r_vec[j])
		{
			stack[k] = l_vec[i];
			i++;
		}
		else
		{
			stack[k] = r_vec[j];
			j++;
		}
		k++;
	}
	while (i < end_l) {
		stack[k] = l_vec[i];
		i++;
		k++;
	}
	while (j < end_r)
	{
		stack[k] = r_vec[j];
		j++;
		k++;
	}
}

void	PmergeMe::Insertion(int left, int right)
{
	for (int i = left + 1; i <= right; i++)
	{
		int key = stack[i];
		int j = i - 1;
		while (j >= left && stack[j] > key)
		{
			stack[j + 1] = stack[j];
			j--;
		}
		stack[j + 1] = key;
	}
}

void	PmergeMe::MergeInsertionSort(int left, int right)
{
	if (right - left + 1 <= threshould)
		Insertion(left, right);
	else
	{
		int mid = left + (right - left) / 2;
		MergeInsertionSort(left, mid);
		MergeInsertionSort(mid + 1, right);
		Merge(left, mid, right);
	}
}

void	PmergeMe::MergeD(int left, int mid, int right)
{
	int i = 0, j = 0, k = left;
	int end_l = mid - left + 1;
	int end_r = right - mid;
	std::deque<int>::iterator itr_l = stack_deque.begin() + left;
	std::deque<int>::iterator itr_r = stack_deque.begin() + mid + 1;
	std::deque<int> l_deque(itr_l, itr_l + end_l);
	std::deque<int> r_deque(itr_r, itr_r + end_r);
	while (i < end_l && j < end_r)
	{
		if (l_deque[i] <= r_deque[j])
		{
			stack_deque[k] = l_deque[i];
			i++;
		}
		else
		{
			stack_deque[k] = r_deque[j];
			j++;
		}
		k++;
	}
	while (i < end_l) {
		stack_deque[k] = l_deque[i];
		i++;
		k++;
	}
	while (j < end_r)
	{
		stack_deque[k] = r_deque[j];
		j++;
		k++;
	}
}

void	PmergeMe::InsertionD(int left, int right)
{
	for (int i = left + 1; i <= right; i++)
	{
		int key = stack_deque[i];
		int j = i - 1;
		while (j >= left && stack_deque[j] > key)
		{
			stack_deque[j + 1] = stack_deque[j];
			j--;
		}
		stack_deque[j + 1] = key;
	}
}

void	PmergeMe::MergeInsertionSortD(int left, int right)
{
	if (right - left + 1 <= threshould)
		InsertionD(left, right);
	else
	{
		int mid = left + (right - left) / 2;
		MergeInsertionSortD(left, mid);
		MergeInsertionSortD(mid + 1, right);
		MergeD(left, mid, right);
	}
}

double	PmergeMe::GetTime(void)
{
	gettimeofday(&end, NULL);
	double elapsed_time = (end.tv_usec - start.tv_usec);
	return elapsed_time;
}