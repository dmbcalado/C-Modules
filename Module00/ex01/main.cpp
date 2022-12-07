
# include "phonebook.hpp"

int	main(void)
{
	int i;
	int	oldest;
	int	count_counter;
	PhoneBook Book[8];

	oldest = 0;
	count_counter = 0;
	print_start();
	while (1)
	{
		
		std::cout << "Write the command you want to execute:" << std::endl;
		int	ret;
		std::string str;
		std::cin >> str;
		ret = Book[oldest].compare(str);
		if (ret == 1)
		{
			std::cout << std::endl;
			Book[oldest].add();
			oldest++;
			if (oldest > 7)
				oldest -= 8;
			if (count_counter < 8)
				count_counter++;
		}
		else if (ret == 2)
		{
			i = -1;
			std::cout << std::endl;
			while (++i < count_counter)
				Book[i].search();
		}
		else if (ret == 3)
			exit(0);
		else
			std::cout << str << " : command not found." << std::endl << std::endl;

		std::cout << std::endl << std::endl;
	}
}
