
#ifndef HARL_HPP
# define HARL_HPP

# include <fstream>
# include <iostream>
# include <string>
# include <cstring>
# include <bits/stdc++.h>

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3
class Harl
{
	public:
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