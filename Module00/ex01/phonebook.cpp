
#include "phonebook.hpp"

int	PhoneBook::compare(std::string str)
{
	char *ptr;

	ptr = &str[0];
	if (strcmp(ptr, "ADD") == 0 || strcmp(ptr, "Add") == 0 || strcmp(ptr, "add") == 0)
		return (1);
	else if (strcmp(ptr, "SEARCH") == 0 || strcmp(ptr, "Search") == 0 || strcmp(ptr, "search") == 0)
		return (2);
	else if (strcmp(ptr, "EXIT") == 0 || strcmp(ptr, "Exit") == 0 || strcmp(ptr, "exit") == 0)
		return (3);
	return (0);
}

void	PhoneBook::add(void)
{
	PhoneBook::get_first_name();
	PhoneBook::get_last_name();
	PhoneBook::get_nickname();
	PhoneBook::get_d_secret();
	PhoneBook::get_phone_nbr();
}

void	PhoneBook::search(void)
{
		std::cout << "|";
		print_str(first_name);
		std::cout << "|";
		print_str(first_name);
		std::cout << "|";
		print_str(last_name);
		std::cout << "|";
		print_str(nickname);
		std::cout << "|";
		std::cout << std::endl;
}

void	PhoneBook::deep_search(void)
{
		std::cout << "first name   : ";
		std::cout << first_name << std::endl;
		std::cout << "last name    : ";
		std::cout << last_name << std::endl;
		std::cout << "nickname     : ";
		std::cout << nickname << std::endl;
		std::cout << "dark secret  : ";
		std::cout << dark_secret << std::endl;
		std::cout << "phone number : ";
		std::cout << phone_number << std::endl;
		std::cout << std::endl;
}

