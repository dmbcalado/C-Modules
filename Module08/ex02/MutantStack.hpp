/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 03:14:03 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/28 03:35:21 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <map>
#include <list>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# define MAX_INT 2147483647


template<class T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() {}
	MutantStack(const MutantStack &obj) {this = obj;}
	MutantStack &operator=(const MutantStack &obj) {this = obj;}
	~MutantStack(){}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {return this->c.begin();}
	iterator end() {return this->c.end();}


private:
	unsigned int N;
	unsigned int n_stored;
	std::vector<int> List;
};
#endif