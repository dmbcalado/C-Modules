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

# include <vector>
# include <algorithm>
# include <iostream>
# include <fstream>
# include <string>
# include <cstring>
# include <bits/stdc++.h>

class PmergeMe
{
public:

	PmergeMe();
	PmergeMe(const PmergeMe &obj);
	PmergeMe &operator = (const PmergeMe &obj);

	void	Merge(int nbr);
	void	Insertion(int start, int last);
	int		Sort(char c);

private:
	std::vector<int> stack;
};

#endif