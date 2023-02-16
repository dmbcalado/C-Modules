/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:19:10 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 19:01:38 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter()
{
	std::cout << "\n Convert default Constructor called" << std::endl;
}

Converter::Converter(std::string argument) : argument(argument)
{
	std::cout << "\n Convert Constructor called" << std::endl;
}

Converter::~Converter()
{
	std::cout << " Convert Destructor called\n" << std::endl;
}

Converter::Converter(const Converter &original)
{
	this->argument = original.argument;
	this->character = original.character;
	this->integer = original.integer;
	this->floater = original.floater;
	this->doubler = original.doubler;
	std::cout << " Convert Copy Constructor called" << std::endl;
}

Converter &Converter::operator=(const Converter &original)
{
	this->argument = original.argument;
	this->character = original.character;
	this->doubler = original.doubler;
	this->floater = original.floater;
	this->integer = original.integer;
	return (*this);
	std::cout << " Convert Copy Assigment operator called" << std::endl;
}

void	Converter::convertArgToType(void)
{
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

void	Converter::convertChar(void)
{
	std::cout << std::endl;
	std::cout << "   Char convert" << std::endl;
	std::cout << std::endl;
	if (getChar() < 0 && getChar() > 126)
		std::cout << "   char: impossible" << std::endl;
	else if (!std::isprint(getChar()))
		std::cout << "   char: not displayable" << std::endl;
	else
		std::cout << "   char: " << getChar() << std::endl;
	setInt(static_cast<int>(getChar()));
	std::cout << "   int: " << getInt() << std::endl;
	setFloat(static_cast<float>(getChar()));
	std::cout << "   float: " << std::setprecision(1) << std::fixed << getFloat() << "f" << std::endl;
	setDouble(static_cast<double>(getChar()));
	std::cout << "   double: " << std::setprecision(1) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	Converter::convertInt(void)
{
	std::cout << std::endl;
	std::cout << "   Int convert" << std::endl;
	std::cout << std::endl;
	if (getInt() < 0 || getInt() > 255)
		std::cout << "   char: impossible" << std::endl;
	else
	{
		if (!std::isprint(getInt()))
			std::cout << "   char: not displayable" << std::endl;
		else
		{
			setChar(static_cast<char>(getInt()));
			std::cout << "   char: " << getChar() << std::endl;
		}
	}
	std::cout << "   int: " << getInt() << std::endl;
	setFloat(static_cast<float>(getInt()));
	std::cout << "   float: " << std::setprecision(1) << std::fixed << getFloat() << "f" << std::endl;
	setDouble(static_cast<double>(getInt()));
	std::cout << "   double: " << std::setprecision(1) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	Converter::convertFloat(int x)
{
	std::cout << std::endl;
	std::cout << "   Float convert" << std::endl;
	std::cout << std::endl;
	if (getFloat() < 0 || getFloat() > 255)
		std::cout << "   char: impossible" << std::endl;
	else
	{
		if (!std::isprint(getFloat()))
			std::cout << "   char: not displayable" << std::endl;
		else
		{
			setChar(static_cast<char>(getFloat()));
			std::cout << "   char: " << getChar() << std::endl;
		}
	}
	setInt(static_cast<int>(getFloat()));
	std::cout << "   int: " << getInt() << std::endl;
	std::cout << "   float: " << std::setprecision(x) << std::fixed << getFloat() << "f" << std::endl;
	setDouble(static_cast<double>(getFloat()));
	std::cout << "   double: " << std::setprecision(x) << std::fixed << getDouble() << std::endl;
	std::cout << std::endl;
}

void	Converter::convertDouble(int x)
{
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

void	Converter::convertSpecialFloat(void)
{
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
	//https://stackoverflow.com/questions/38795544/is-casting-of-infinity-to-integer-undefined
	std::cout << std::endl;
}

void	Converter::convertSpecialDouble(void)
{
	std::cout << std::endl;
	std::cout << "   Double Special convert" << std::endl;
	std::cout << std::endl;
	if (!std::isprint(getChar()))
		std::cout << "   char: impossible" << std::endl;
	else
	{
		setChar(static_cast<char>(getDouble()));
		std::cout << "   char: " << getChar() << std::endl;
	}
	setInt(static_cast<int>(getDouble()));
	//std::cout << "   int: " << getInt() << std::endl;
	std::cout << "   int: impossible" << std::endl;
	setFloat(static_cast<float>(getDouble()));
	std::cout << "   float: " << std::setprecision(1) << std::fixed << getFloat() << "f" << std::endl;
	std::cout << "   double: " << std::setprecision(1) << std::fixed << getDouble() << std::endl;
	//https://stackoverflow.com/questions/38795544/is-casting-of-infinity-to-integer-undefined
	std::cout << std::endl;
}

void	Converter::setInt(int x)
{
	this->integer = x;
}

void	Converter::setChar(char x)
{
	this->character = x;
}

void	Converter::setFloat(float x)
{
	this->floater = x;
}

void	Converter::setDouble(double x)
{
	this->doubler = x;
}

int	Converter::getInt(void)
{
	return (this->integer);
}

char	Converter::getChar(void)
{
	return (this->character);
}

float	Converter::getFloat(void)
{
	return (this->floater);
}

double	Converter::getDouble(void)
{
	return (this->doubler);
}