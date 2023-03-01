/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:44:41 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/03/01 17:22:47 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include <list>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

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

template<typename T>
typename std::map<T, int>::iterator easyfind(std::map<T, int> &container, int value) {
	if (container.find(value) == container.end())
		throw NotFound();
	return container.find(value);

}


#endif
