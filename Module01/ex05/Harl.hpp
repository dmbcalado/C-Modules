
#ifndef HARL_HPP
# define HARL_HPP

# include <fstream>
# include <iostream>
# include <string>
# include <cstring>
# include <bits/stdc++.h>

class Harl
{
	public:

		void complain(std::string level);

	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		std::ifstream	fd_in;
		std::ofstream	fd_out;
		std::string		forbidden;
		std::string		to_replace;
		std::string		
		new_filename = "new_file.txt";
		std::stringstream *stream;
} ;

#endif