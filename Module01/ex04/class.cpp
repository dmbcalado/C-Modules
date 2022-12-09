
#include "header.hpp"

void	Class::get_strings(std::string string1, std::string string2)
{
	forbidden = string1;
	to_replace = string2;
}

void	Class::open_files(std::string filename)
{
	char	c;

	std::stringstream Stream(filename);

	stream = &Stream;
	fd_in = std::ifstream(filename, std::ifstream::in);
	if (fd_in.is_open() == true)
	{
		write_str_fd();
	}
	
}

void	Class::write_str_fd(void)
{
	std::string line;

	fd_out = std::ofstream(new_filename, std::ifstream::out);
	while (std::getline(fd_in, line))
		{
			std::cout << line << std::endl;
			if (line.compare(forbidden) != 0)
				fd_out << line;
			else
				fd_out << to_replace;

			fd_out << "\n";
		}
}
