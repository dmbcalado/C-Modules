
# include "phonebook.hpp"

int	cpp_atoi(std::string indexing)
{
	int i = -1;

	while(indexing[++i]);
	if (i > 1){
		return (-1);
	}
	else if (int(indexing[0]) > 48 && int(indexing[0]) < 57) {
		return (int(indexing[0]) - 48);
	}
	else {
		return(-1);
	}
}

void	run_search(PhoneBook *Book, int count_counter)
{
	int i = -1;
	std::string will;
	std::string indexing;
	char *ptr;

	std::cout << std::endl;
	while (++i < count_counter) {
		std::cout << " |         " << i + 1;
		Book[i].search();
	}
	std::cout << std::endl;
	std::cout << "If you want to check more information on a specific contact,";
	std::cout << "write Y. Otherwise, write N." << std::endl;
	std::getline(std::cin, will);
	ptr = &will[0];
	if (strcmp(ptr, "Y") == 0 || strcmp(ptr, "y") == 0) {
		std::cout << "write the index of the contact:" << std::endl;
		std::getline(std::cin, indexing);
		if (cpp_atoi(indexing) > 0  && cpp_atoi(indexing) <= count_counter) {
			std::cout << std::endl;
			std::cout << "index : " << cpp_atoi(indexing) << std::endl;
			Book[cpp_atoi(indexing) - 1].deep_search();
		}
		else if (cpp_atoi(indexing) > 0) {
			std::cout << "index out of range. No contact with that index." << std::endl;
		}
		else {
			std::cout << "Wrong index." << std::endl;
		}
	}

}


int	main(void)
{
	int	oldest = 0;
	int	count_counter = 0;
	PhoneBook Book[8];

	print_start();
	while (1)
	{
		std::cout << "Write the command you want to execute:" << std::endl;
		int	ret;
		std::string str;
		std::getline(std::cin, str);
		ret = Book[oldest].compare(str);
		if (ret == 1) {
			std::cout << std::endl;
			Book[oldest].add();
			oldest++;
			if (oldest > 7)
				oldest -= 8;
			if (count_counter < 8)
				count_counter++;
		}
		else if (ret == 2) {
			run_search(Book, count_counter);
		}
		else if (ret == 3) {
			std::cout << "\033[0m";
			exit(0);
		}
		else {
			std::cout << str << " : command not found." << std::endl << std::endl;
		}
		std::cout << std::endl << std::endl;
	}
}
