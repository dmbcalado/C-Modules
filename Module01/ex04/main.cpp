
/* Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.

It will open the file <filename> and copies its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2. */

# include "header.hpp"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		Class op;

		op.get_strings(argv[2], argv[3]);
		op.open_files(argv[1]);
		op.append_str();
	}
	else
	{
		std::cout << "Wrong parameters number. \n You should give at least 3 parameters. \nExiting" << std::endl;
	}
	return (0);
}