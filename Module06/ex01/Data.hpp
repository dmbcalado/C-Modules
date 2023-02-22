/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:48 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/22 18:40:19 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define  DATA_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits.h>
#include <float.h>
#include <stdint.h>

#pragma once

class Data
{
public:
	Data();
	Data(std::string Name, int nbr_args, std::string *args);
	~Data();
	Data(const Data &original);
	Data &operator=(const Data &original);

private:
		std::string Name;
		std::string *args;
		int			nbr_args;
};



#endif