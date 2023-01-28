# include <iostream>
# include <string>
# include <cstring>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string const &stringREF = (std::string const&)str;

	std::cout << "Memory address of the string variable:" << std::endl; 
	std::cout << &str << std::endl;
	std::cout << "Memory address held by stringPTR:" << std::endl; 
	std::cout << &stringPTR << std::endl;
	std::cout << "Memory address held by stringREF:" << std::endl; 
	std::cout << &stringREF << std::endl << std::endl;
	std::cout << "Value of the string variable:" << std::endl; 
	std::cout << str << std::endl;
	std::cout << "Value pointed to by stringPTR:" << std::endl; 
	std::cout << stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF:" << std::endl; 
	std::cout << stringREF << std::endl << std::endl;
}