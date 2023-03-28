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


#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# define MAX_INT 1000

# include <deque>
# include <vector>
# include <iostream>
# include <string>
# include <cstring>
# include <bits/stdc++.h>
# include  <sys/time.h>

class NotANbr : public std::exception {
public:
	const char	*what() const throw() {
	std::cout << "\033[101m\033[1mArgument different then an integer found.\033[0m\n" << std::endl;
	return ("\033[103m\033[1mInvalid Argument.\033[0m");
}
} ;

class PmergeMe
{
public:

	PmergeMe();
	//for vectors
	PmergeMe(int argc, char *argv[]);
	//for lists
	PmergeMe(int argc, char * argv[], int flag);
	PmergeMe(const PmergeMe &obj);
	PmergeMe &operator = (const PmergeMe &obj);

	// for vectors
	void	Merge(int left, int mid, int right);
	void	Insertion(int left, int right);
	void	MergeInsertionSort(int left, int right);
	void	PrintStack(void);
	// for lists
	void	MergeD(int left, int mid, int right);
	void	InsertionD(int left, int right);
	void	MergeInsertionSortD(int left, int right);
	void	PrintDStack(void);
	double	GetTime(void);

	NotANbr NotANbrException;
private:
	int		threshould;
	struct timeval start, end;
	std::vector<int> stack;
	std::deque<int> stack_deque;
};

#endif