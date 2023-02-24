/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:48 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/24 19:07:29 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits.h>
#include <float.h>
#include <stdint.h>

#pragma once

#include "Data.hpp"

class Serializer
{
public:
	Serializer();
	~Serializer();
	Serializer(const Serializer &original);
	Serializer &operator=(const Serializer &original);

	uintptr_t	serialize(Data *ptr);
	Data*		deserialize(uintptr_t raw);
};

#endif
