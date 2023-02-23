/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 04:50:05 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/23 05:30:35 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template<typename T>
void	swap(T &value_1 , T &value_2)
{
	T save;
	save = value_1;
	value_1 = value_2;
	value_2 = save;
}

template<typename T>
T	min(T &value_1 , T &value_2)
{
	if(value_1 < value_2)
		return(value_1);
	return(value_2);
}

template<typename T>
T	max(T &value_1 , T &value_2)
{
	if(value_1 > value_2)
		return(value_1);
	return(value_2);
}

#endif