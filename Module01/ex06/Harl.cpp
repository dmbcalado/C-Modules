/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:18:57 by dmendonc          #+#    #+#             */
/*   Updated: 2023/01/30 18:16:33 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void	Harl::debug(void)
{
	std::cout << "\033[103m\033[1mDEBUG:\033[0m The debuger found an error, you should too." << std::endl;
}

void Harl::info(void)
{
	std::cout << "\033[103m\033[1mINFO:\033[0mSome extensive information like this one that doesnt says nothing." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "\033[103m\033[1mWARNING:\033[0m a mermaid is singing next to you." << std::endl;
}

void Harl::error(void)
{
	std::cout << "\033[103m\033[1mERROR:\033[0m What your trying to do is completly wrong." << std::endl;
}

void	Harl::start_cases(void)
{
	cases[0] = "INFO";
	cases[1] = "DEBUG";
	cases[2] = "ERROR";
	cases[3] = "WARNING";
	cases[4] = "NOTHING";
}

void	Harl::complain(std::string level)
{
	int	i = -1;
	int	type = 0;
	void (Harl::*pmf)();

	while(level.compare(cases[++i]) != 0 && i < 5);
	type = i + 1;
	switch(type)
	{
		case INFO:
			pmf = &Harl::info;
			(this->*pmf)();
		case DEBUG:
			pmf = &Harl::debug;
			(this->*pmf)();
		case WARNING:
			pmf = &Harl::warning;
			(this->*pmf)();
		case ERROR:
			pmf = &Harl::error;
			(this->*pmf)();
		case NOTHING:
			pmf = NULL;
			break;
	}
}