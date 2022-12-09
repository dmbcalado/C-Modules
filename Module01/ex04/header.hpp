
#ifndef HEADER_HPP
# define HEADER_HPP

# include <fstream>
# include <iostream>
# include <string>
# include <cstring>
# include <bits/stdc++.h>

class Class
{
	public:

		//getters
		void		open_files(std::string filename);
		void		get_strings(std::string string1, std::string string2);
		void		append_str();

	private :
		std::ifstream	fd_in;
		std::ofstream	fd_out;
		std::string		forbidden;
		std::string		read_line;
		std::string		to_replace;
		std::string		new_filename = "new_file.txt";
		std::stringstream *stream;
} ;

#endif