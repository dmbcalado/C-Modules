/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:48 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 19:10:11 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define  CONVERTER_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits.h>
#include <float.h>

#pragma once

class Converter
{
	public:
		Converter();
		Converter(std::string arg);
		Converter(const Converter &original);
		Converter &operator=(const Converter &original);
		~Converter();

		void   setInt(int x);
		void   setChar(char x);
		void   setFloat(float x);
		void   setDouble(double x);
		int    getInt(void);
		char   getChar(void);
		float  getFloat(void);
		double getDouble(void);
		void   convertArgToType(void);
		void   convertChar(void);
		void   convertInt(void);
		void   convertFloat(int x);
		void   convertSpecialFloat(void);
		void   convertDouble(int x);
		void   convertSpecialDouble(void);

private:
		std::string argument;
		int			integer;
		char		character;
		float		floater;
		double		doubler;
};


#endif