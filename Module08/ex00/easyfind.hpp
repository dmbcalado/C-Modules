/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:44:41 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/24 14:25:53 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

class NotFound : public std::exception {
public:
	const char	*what() const throw() {
	std::cout << "\033[101m\033[1mValue not found. \033[0m\n" << std::endl;
	return ("\033[103m\033[1mValue does not exist.\033[0m");
}
} ;

template<typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator itr = std::find(container.begin(), container.end(), value);
	if (itr == container.end())
		throw NotFound();
	return itr;
}


#endif