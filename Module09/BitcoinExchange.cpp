/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:15:20 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/27 21:00:26 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() 
{
	itr = data.begin();
	data_base.open("data.csv", std::ios::in);
	if (data_base.is_open()) {
		std::string line;
		std::cout << "sucessfully opened database" << std::endl;
		while (getline(data_base, line)) {
			std::string strv = line.substr(line.find(",") + 1, line.size());
			std::cout << strv.c_str() << std::endl;
			//data[line.substr(0, line.find(","))] = std::atof(strv.c_str());
			//std::cout << "date :" << itr->first << "value :" << itr->second << std::endl;
		}
	}
	else
		std::cout << "could not open the database" << std::endl;
}

BitcoinExchange::BitcoinExchange(const char *str)
{
	std::cout << str << std::endl;
	in_fname.open(str, std::ios::in);
	if (in_fname.is_open()) {
		std::string line;
		std::cout << "sucessfully opened " << str << std::endl;
		while (getline(in_fname, line)) {
			std::cout << line.substr(0, line.find(" | ")) << " -> ";
			if (line.find(" | ") != std::string::npos)
				std::cout << line.substr(line.find(" | ") + 3, line.size()) << std::endl;
			else
				std::cout << std::endl;
		}
	}
	else
		std::cout << "could not open the file " << str << std::endl;
}

