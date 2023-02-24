/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:19:10 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/18 19:52:56 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The trick in this ScalarConverter is using static_cast<int> template.

#include "ScalarConverter.hpp"

int			ScalarConverter::integer;
float		ScalarConverter::floater;
double		ScalarConverter::doubler;
std::string	ScalarConverter::argument;
char		ScalarConverter::character;

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter Constructor called." << std::endl;
}

ScalarConverter::ScalarConverter(std::string argument) {
	argument = argument;
	std::cout << "ScalarConverter Constructor called." << std::endl;
}

ScalarConverter::~ScalarConverter() {
	std::cout << " ScalarConverter Destructor called." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &original) {
	this->argument = original.argument;
	this->character = original.character;
	this->integer = original.integer;
	this->floater = original.floater;
	this->doubler = original.doubler;
	std::cout << " ScalarConverter Copy Constructor called." << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &original) {
	this->argument = original.argument;
	this->character = original.character;
	this->doubler = original.doubler;
	this->floater = original.floater;
	this->integer = original.integer;
	return (*this);
	std::cout << " ScalarConverter Copy Assigment operator called" << std::endl;
}

void	ScalarConverter::convertArgToType(void) {
	char	*end;
	int	j;
	long long	in;
	long double test;

	for (size_t i = 0; i < argument.length(); i++)
	{
		if (!std::isdigit(argument.c_str()[i]))
		{
			if (argument.length() == 1)
			{
				setChar(argument.c_str()[0]);
				convertChar();
				return ;
			}
			else if (argument[i] == '.')
			{
				if (!argument[++i] || !std::isdigit(argument.c_str()[i]))
					return ;
				j = i;
				while (std::isdigit(argument.c_str()[i++])){}
				if (argument[i - 1] == 'f' && !argument[i])
				{
					test = atof(argument.c_str());
					if (test < FLT_MIN || test > FLT_MAX)
					{
						std::cout << "Float Overflow" << std::endl;
						return ;
					}
					else
					{
						setFloat(test);
						convertFloat(argument.length() - j - 1);
						return ;
					}
				}
				else if (argument[i - 2] && !argument[i - 1])
				{
					test = std::strtod(argument.c_str(), &end);
					if (test < DBL_MIN || test > DBL_MAX)
					{
						std::cout << "Double Overflow" << std::endl;
						return ;
					}
					else
					{
						setDouble(std::strtod(argument.c_str(), &end));
						convertDouble(argument.length() - j);
						return ;
					}
				}
			}
			else if (!argument.compare("nanf") || !argument.compare("-inff") || !argument.compare("+inff"))
			{
				setFloat(atof(argument.c_str()));
				convertSpecialFloat();
				return ;
			}
			else if (!argument.compare("nan") || !argument.compare("-inf") || !argument.compare("+inf"))
			{
				setDouble(atof(argument.c_str()));
				convertSpecialDouble();
				return ;
			}
			else if (argument[i] == '-')
				i++;
			else
			{
				std::cout << "Wrong parameter" << std::endl;
				return ;
			}
		}
		}
		in = atol(argument.c_str());
		if (in < INT_MIN || in > INT_MAX)
		{
			std::cout << "Int overflow" << std::endl;
			return ;
		}
		else
		{
			setInt(in);
			convertInt();
		}
}

void	ScalarConverter::convertChar(void) {
	std::cout << std::endl;
	std::cout << "\033[103m\033[1mChar ScalarConverter called.\033[0m" << std::endl;
	std::cout << std::endl;
	if (getChar() < 0 && getChar() > 126)
		std::cout << "\033[101m\033[1mchar: impossible\033[0m  " << std::endl;
	else if (!std::isprint(getChar()))
		std::cout << "\033[101m\033[1mchar: not displayable\033[0m  " << std::endl;
	else
		std::cout << "\033[104m\033[1mchar:  \033[0m  " << getChar() << std::endl;
	setInt(static_cast<int>(getChar()));
	std::cout << "\033[104m\033[1mint:   \033[0m  " << getInt() << std::endl;
	setFloat(static_cast<float>(getChar()));
	std::cout << "\033[104m\033[1mfloat: \033[0m  " << std::setprecision(1) << std::fixed << getFloat() << "f" << std::endl;
	setDouble(static_cast<double>(getChar()));
	std::cout << "\033[104m\033[1mdouble:\033[0m  " << std::setprecision(1) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	ScalarConverter::convertInt(void) {
	std::cout << std::endl;
	std::cout << "\033[103m\033[1mInt ScalarConverter called.\033[0m" << std::endl;
	std::cout << std::endl;
	if (getInt() < 0 || getInt() > 255)
		std::cout << "\033[101m\033[1mchar: impossible\033[0m  " << std::endl;
	else
	{
		if (!std::isprint(getInt()))
			std::cout << "\033[101m\033[1mchar: not displayable\033[0m  " << std::endl;
		else
		{
			setChar(static_cast<char>(getInt()));
			std::cout << "\033[104m\033[1mchar:  \033[0m  " << getChar() << std::endl;
		}
	}
	std::cout << "\033[104m\033[1mint:   \033[0m  " << getInt() << std::endl;
	setFloat(static_cast<float>(getInt()));
	std::cout << "\033[104m\033[1mfloat:   \033[0m  " << std::setprecision(1) << std::fixed << getFloat() << "f" << std::endl;
	setDouble(static_cast<double>(getInt()));
	std::cout << "\033[104m\033[1mdouble:   \033[0m  " << std::setprecision(1) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	ScalarConverter::convertFloat(int x) {
	setFloat(x);
	std::cout << std::endl;
	std::cout << "\033[103m\033[1mFloat ScalarConverter called.\033[0m" << std::endl;
	std::cout << std::endl;
	if (getFloat() < 0 || getFloat() > 255)
		std::cout << "\033[101m\033[1mchar: impossible\033[0m  " << std::endl;
	else
	{
		if (!std::isprint(getFloat()))
			std::cout << "\033[101m\033[1mchar: not displayable\033[0m  " << std::endl;
		else
		{
			setChar(static_cast<char>(getFloat()));
				std::cout << "\033[104m\033[1mchar:  \033[0m  " << getChar() << std::endl;
		}
	}
	setInt(static_cast<int>(getFloat()));
	std::cout << "\033[104m\033[1mint:   \033[0m  " << getInt() << std::endl;
	setFloat(static_cast<float>(getInt()));
	std::cout << "\033[104m\033[1mfloat:   \033[0m  " << std::setprecision(1) << std::fixed << getFloat() << "f" << std::endl;
	setDouble(static_cast<double>(getFloat()));
	std::cout << "\033[104m\033[1mdouble:   \033[0m  " << std::setprecision(1) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	ScalarConverter::convertDouble(int x) {
	std::cout << std::endl;
	std::cout << "   Double convert" << std::endl;
	std::cout << std::endl;
	if (getDouble() < 0 || getDouble() > 255)
		std::cout << "   char: impossible" << std::endl;
	else
	{
		if (!std::isprint(getDouble()))
			std::cout << "   char: not displayable" << std::endl;
		else
		{
			setChar(static_cast<char>(getDouble()));
			std::cout << "   char: " << getChar() << std::endl;
		}
	}
	setInt(static_cast<int>(getDouble()));
	std::cout << "   int: " << getInt() << std::endl;
	setFloat(static_cast<float>(getDouble()));
	std::cout << "   float: " << std::setprecision(x) << std::fixed << getFloat() << "f" << std::endl;
	std::cout << "   double: " << std::setprecision(x) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	ScalarConverter::convertSpecialFloat(void) {
	std::cout << std::endl;
	std::cout << "   Float Special convert" << std::endl;
	std::cout << std::endl;
	if (!std::isprint(getChar()))
		std::cout << "   char: impossible" << std::endl;
	else
	{
		setChar(static_cast<char>(getFloat()));
		std::cout << "   char: " << getChar() << std::endl;
	}
	setInt(static_cast<int>(getFloat()));
	//std::cout << "   int: " << getInt() << std::endl;
	std::cout << "   int: impossible" << std::endl;
	std::cout << "   float: " << std::setprecision(1) << std::fixed << getFloat() << "f" << std::endl;
	setDouble(static_cast<float>(getFloat()));
	std::cout << "   double: " << std::setprecision(1) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	ScalarConverter::convertSpecialDouble(void) {
	std::cout << std::endl;
	std::cout << "   Double Special convert" << std::endl;
	std::cout << std::endl;
	if (!std::isprint(getChar()))
		std::cout << "   char: impossible" << std::endl;
	else {
		setChar(static_cast<char>(getDouble()));
		std::cout << "   char: " << getChar() << std::endl;
	}
	setInt(static_cast<int>(getDouble()));
	//std::cout << "   int: " << getInt() << std::endl;
	std::cout << "   int: impossible" << std::endl;
	setFloat(static_cast<float>(getDouble()));
	std::cout << "   float: " << std::setprecision(1) << std::fixed << getFloat() << "f" << std::endl;
	std::cout << "   double: " << std::setprecision(1) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	ScalarConverter::setInt(int x) {
	integer = x;
}

void	ScalarConverter::setChar(char x) {
	character = x;
}

void	ScalarConverter::setFloat(float x) {
	floater = x;
}

void	ScalarConverter::setDouble(double x) {
	doubler = x;
}

int	ScalarConverter::getInt(void) {
	return (integer);
}

char	ScalarConverter::getChar(void) {
	return (character);
}

float	ScalarConverter::getFloat(void) {
	return (floater);
}

double	ScalarConverter::getDouble(void) {
	return (doubler);
}
