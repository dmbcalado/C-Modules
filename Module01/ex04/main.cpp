/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:33:46 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/01/28 17:12:17 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// std::string::npos -> means "until the end of the string"

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	std::string		line;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc == 4) {
		std::string		str1 = argv[2];
		std::string		str2 = argv[3];
		infile.open(argv[1]);
		if(!infile) {
			std::cerr << "Error: infile could not be opened" << std::endl;
			exit(1);
		}
		strcat(argv[1], ".replace");
		outfile.open(argv[1]);
		if(!outfile) {
			std::cerr << "Error: outfile could not be opened" << std::endl;
			exit(1);
		}
		while(std::getline(infile, line)) {
			size_t	lenght = str1.length();
			size_t	pos = line.find(str1, 0);
			while(pos != std::string::npos) {
				line.erase(pos, lenght);
				line.insert(pos, str2);
				pos = line.find(str1, pos);
			}
			outfile << line << std::endl;
		}
	}
	return 0;
}