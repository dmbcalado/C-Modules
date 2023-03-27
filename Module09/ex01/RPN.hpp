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


#ifndef RPN_HPP
# define RPN_HPP
# define MAX_INT 1000

# include <stack>
# include <cctype>
# include <algorithm>
# include <iostream>
# include <fstream>
# include <string>
# include <cstring>
# include <bits/stdc++.h>

class ReversePN
{
public:

	ReversePN();
	ReversePN(const ReversePN &obj);
	ReversePN &operator = (const ReversePN &obj);

	void	AddNbr(int nbr);
	int		CharToInt(char c);
	int		CharToOperator(char c);
	int		PerformOperation(int oper);
	int		ReturnTop(void);
	int		ReturnSize();

private:
	std::stack<int> data;
};

#endif