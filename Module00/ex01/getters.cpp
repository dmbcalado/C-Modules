
#include "phonebook.hpp"

void	PhoneBook::get_first_name(void)
{
	std::string str;

	std::cout << "Please write the contact's first name:" << std::endl;
	std::cin >> str;
	first_name = str;
}

void	PhoneBook::get_last_name(void)
{
	std::string str;
	std::cout << "Please write the contact's last name:" << std::endl;
	std::cin >> str;
	last_name = str;
}

void	PhoneBook::get_nickname(void)
{
	std::string str;
	std::cout << "Please write the contact's nickname:" << std::endl;
	std::cin >> str;
	nickname = str;
}

void	PhoneBook::get_d_secret(void)
{
	std::string str;
	std::cout << "Please write the contact's darkest secret:" << std::endl;
	std::cin >> str;
	dark_secret = str;
}