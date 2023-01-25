
#include "phonebook.hpp"

std::string	legit(std::string str) {
	int	i = -1;
	int	index = 0;
	int	tab_count = 1;
	std::string new_str;
	while(str[++i]) {
		if (str[i] == 9 && tab_count == 0) {
			new_str.push_back(str[i]);
			index++;
			tab_count++;
		}
		else if(str[i] == 32 && tab_count == 0) {
			new_str.push_back(str[i]);
			index++;
			tab_count++;
		}
		else if (str[i] != 9 && str[i] != 32) {
			new_str.push_back(str[i]);
			index++;
			tab_count = 0;
		}
	}
	return (new_str);
}

void	PhoneBook::get_first_name(void)
{
	std::string str;
	std::string legit_str;

	std::cout << "Please write the contact's first name:" << std::endl;
	std::getline(std::cin, str);
	legit_str = legit(str);
	first_name = legit_str;
}

void	PhoneBook::get_last_name(void)
{
	std::string str;
	std::string legit_str;

	std::cout << "Please write the contact's last name:" << std::endl;
	std::getline(std::cin, str);
	legit_str = legit(str);
	last_name = legit_str;
}

void	PhoneBook::get_nickname(void)
{
	std::string str;
	std::string legit_str;

	std::cout << "Please write the contact's nickname:" << std::endl;
	std::getline(std::cin, str);
	legit_str = legit(str);
	nickname = legit_str;
}

void	PhoneBook::get_d_secret(void)
{
	std::string str;
	std::string legit_str;

	std::cout << "Please write the contact's darkest secret:" << std::endl;
	std::getline(std::cin, str);
	legit_str = legit(str);
	dark_secret = legit_str;
}

void	PhoneBook::get_phone_nbr(void)
{
	std::string str;
	std::string legit_str;

	std::cout << "Please write the contact's phone number:" << std::endl;
	std::getline(std::cin, str);
	legit_str = legit(str);
	phone_number = legit_str;
}