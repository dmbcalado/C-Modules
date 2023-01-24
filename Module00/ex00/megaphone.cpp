#include <iostream>
#include <string>

class Capitalize
{
	public:
		void capitalizer(std::string str);
};

void Capitalize::capitalizer(std::string str)
{
	int i = -1;
	while(str[++i])
	{
		if (str[i] >= 97 && str[i] <= 122) {
			std::cout << char((int)str[i] - 32);
		}
		else {
			std::cout << char(str[i]);
		}
	}
}

int	main(int argc, char **argv)
{
	int i;
	Capitalize megaphone;

	if (argc > 1) {
		i = 0;
		while(++i < argc) {
			megaphone.capitalizer((std::string)argv[i]);
		}
		std::cout << std::endl;
	}
	else {
		std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE * ";
		std::cout << std::endl;
	}
	return (0);
}
