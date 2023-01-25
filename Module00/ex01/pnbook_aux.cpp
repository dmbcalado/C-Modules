
#include "phonebook.hpp"

void	print_start(void)
{
	std::cout << std::endl;
	std::cout << "\033[103;34m\033[1mHello and welcome to my small Phonebook." << std::endl;
	std::cout << std::endl;
	std::cout << "You will be able to add up to 8 contacts, along with the fields required." << std::endl;
	std::cout << std::endl;
	std::cout << "Choose on of the following commands:" << std::endl;
	std::cout << "ADD :    to add a new contact." << std::endl;
	std::cout << "SEARCH : to show all the contacts that exist and they're content." << std::endl;
	std::cout << "EXIT :   to exit the program." << std::endl << std::endl;
}

void	print_n_char(std::string str, int n)
{
	int	i = -1;
	while(++i < n)
		std::cout << str[i] ;
}

int	size_of_str(std::string str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_str(std::string str)
{
	int	i = -1;
	int	size = size_of_str(str);
	if (size_of_str(str) < 10)
	{
		while (++i < 10 - size)
		{
			std::cout << " ";
		}
		print_n_char(str, size);
	}
	else if (size == 10)
	{
		print_n_char(str, size);
	}
	else
	{
		print_n_char(str, 9);
		std::cout << ".";
	}
}