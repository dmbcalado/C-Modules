/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:19:04 by dmendonc          #+#    #+#             */
/*   Updated: 2023/01/28 18:27:13 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

# include <fstream>
# include <iostream>
# include <string>
# include <cstring>
# include <bits/stdc++.h>

# define INFO 1
# define DEBUG 2
# define ERROR 3
# define WARNING 4
# define NOTHING 5

class Harl
{
	public:
		std::string cases[5];
		void	start_cases(void);
		void	get_case(std::string level);
		void	complain(std::string level);

	private :
		//functions
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
} ;

#endif