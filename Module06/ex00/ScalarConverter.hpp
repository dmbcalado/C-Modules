/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:48 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/24 16:55:39 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <limits.h>
#include <float.h>

#pragma once

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(std::string arg);
		ScalarConverter(const ScalarConverter &original);
		ScalarConverter &operator=(const ScalarConverter &original);
		~ScalarConverter();

		static void	setInt(int x);
		static void	setChar(char x);
		static void	setFloat(float x);
		static void	setDouble(double x);
		static int		getInt(void);
		static char	getChar(void);
		static float	getFloat(void);
		static double	getDouble(void);
		static void	convertArgToType(void);
		static void	convertChar(void);
		static void	convertInt(void);
		static void	convertFloat(int x);
		static void	convertSpecialFloat(void);
		static void	convertDouble(int x);
		static void	convertSpecialDouble(void);

private:
		static std::string	argument;
		static int			integer;
		static char		character;
		static float		floater;
		static double		doubler;
};

#endif
