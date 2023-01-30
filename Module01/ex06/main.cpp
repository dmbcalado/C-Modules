/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:29:20 by dmendonc          #+#    #+#             */
/*   Updated: 2023/01/30 18:17:40 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main(int argc, char **argv)
{
	int	flag = 0;
	int	i = 0;
	int	j = -1;
	Harl Minina;

	if (argc > 1) {
		std::string	argument[argc -1];
		while(++i < argc) { 
			argument[i - 1] = argv[i];
		}
		Minina.start_cases();
		i = -1;
		while(++i < argc - 1) {
			while (++j < 4) {
				if (argument[i].compare(Minina.cases[j]) == 0) {
					Minina.complain(Minina.cases[j]);
					flag = 1;
				}
			}
			j = -1;
			if (flag == 0) {
				std::cout << "no complain was made.\nargument ";
				std::cout << argument[i] << " does not exist."<< std::endl;
			}
			std::cout << std::endl;
		}
	}
	else {
		std::cout << "In this exercise you should pass what you want to complain about as a parameter." << std::endl;
	}
	return (0);
}