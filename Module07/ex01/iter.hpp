/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 04:50:05 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/23 15:22:55 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef ITER_HPP
# define ITER_HPP

template<class T>
void	iter(T *addr, size_t len, void (*f)(const T &temp)) {
	if (!addr)
		return ;
	for (size_t i = 0; i < len ; i++) {
		f(addr[i]);
	}
}

/* 
template<typename T>
void	replace_a(const T &array) {
	
}
 */
#endif