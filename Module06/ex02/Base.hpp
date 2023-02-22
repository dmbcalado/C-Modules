/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:48 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/22 18:52:51 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
#include <unistd.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits.h>
#include <float.h>
#include <sys/time.h>

#pragma once

class Base
{
	public:
		Base();
		Base(std::string arg);
		Base(const Base &original);
		Base &operator=(const Base &original);
		virtual ~Base();

		std::string	getType();

private:
		std::string type;
};

class A : public Base {
public:
	A();
	~A();
};

class B : public Base {
public:
	B();
	~B();
};

class C : public Base {
public:
	C();
	~C();
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);


#endif