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
	data_base.open("data.csv", std::ios::in);
	if (data_base.is_open()) {
		std::string line;
		std::cout << "\033[104m\033[1msuccessfully opened database\033[0m" << std::endl;
		while (getline(data_base, line)) {
			std::string strv = line.substr(line.find(",") + 1, line.size());
			data[line.substr(0, line.find(","))] = std::atof(strv.c_str());
		}
		itr = data.begin();
		while(itr++ != data.end());
		itr--;
	}
	else
		std::cout << "could not open the database" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
	this->data = obj.data;
	std::cout << " BitcoinExchange Copy Constructor called." << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	this->data = obj.data;
	std::cout << " BitcoinExchange Copy Assigment operator called." << std::endl;
	return (*this);
}


int	BitcoinExchange::NextEnd(const char *line, int nth)
{
	char *res = (char *)line;
	for (int i = 1; i <= nth ; i++) {
		res = strstr(res, "-");
		if (!res)
			return -1;
		else if(i != nth)
			res++;
	}
	return res - line;
}

int	BitcoinExchange::CheckValidDate(std::string line)
{
	size_t	start = 0;
	int	cnt = 1, end;

	while(cnt <= 3) {
		if (cnt < 3)
			end = NextEnd(line.c_str(), cnt);
		else
			end = line.find(" | ");
		if (end <= 0)
		{
			std::cout << "\033[101m\033[1mError: invalid structure. Expected : date | value\033[0m" << std::endl;
			std::cout << std::endl;
			return (-1);
		}
		std::string strv = line.substr(start, end);
		if (std::atof(strv.c_str()) <= 0)
		{
			std::cout << "\033[101m\033[1mError: invalid date => " << line.substr(0, line.find(" | ")) << "\033[0m" << std::endl;
			std::cout << std::endl;
			return (-1);
		}
		start = end + 1;
		cnt++;
	}
	//std::cout << "valid date: " << line.substr(0, line.find(" | ")) << std::endl;
	return (1);
}

int	BitcoinExchange::CheckValidNmbr(std::string line)
{
	std::string save;
	if (line.find(" | ") != std::string::npos) {
		std::string strv = line.substr(line.find(" | ") + 3, line.size());
		if (strv.empty()) {
			std::cout << "\033[101m\033[1mError: no exchange rate given.\033[0m" << std::endl;
			std::cout << std::endl;
			return (-1);
		}
		if (std::atof(strv.c_str()) <= 0 || std::atof(strv.c_str()) >= 1000) {
			std::cout << "\033[101m\033[1mError: not a valid number : " << strv.c_str()  << "\033[0m" << std::endl;\
			std::cout << std::endl;
			return (-2);
		}
		else
			MakeCalculations(line, std::atof(strv.c_str()));
		save = strv;
	}
	else
		return (-1);
	return (1);
}

void	BitcoinExchange::MakeCalculations(std::string line, float ExRate)
{
	std::map<std::string, float>::iterator iter;

	iter = FindBestKey(line.substr(0, line.find(" | ")), ExRate);
	if (iter != data.end())
	{
		std::cout << "\033[102m\033[1m" << iter->first << " => " << iter->second * ExRate << "\033[0m" << std::endl;
	}
	else
		std::cout << std::endl;
	std::cout << std::endl;
}

std::map<std::string, float>::iterator BitcoinExchange::FindClosestKey(std::string date)
{
	size_t	start = 0;
	int	end;

	itr = data.begin();
	while(itr != data.end())
	{
		end = NextEnd(date.c_str(), 2);
		std::string strv = date.substr(start, end);
		std::string strd = itr->first.substr(start, end);
		if (strv == strd)
		{
			//std::cout << strd << " vs " << strv << std::endl;
			while(itr != data.end())
			{
				start = 0;
				end = date.size();
				strv = date.substr(start, end);
				strd = itr->first.substr(start, end);
				if (strd < strv)
					itr++;
				else
				{
					//std::cout << "closest of : " << strv << " is :" << strd << std::endl;
					return(itr--);
				}
			}
			break;
		}
		else
			itr++;
	}
	std::cout << "\033[101m\033[1mError: invalid input date => " << date << "\033[0m" << std::endl;
	return (itr);
}

std::map<std::string, float>::iterator BitcoinExchange::FindBestKey(std::string date, float ExRate)
{
	(void)ExRate;
	std::map<std::string, float>::iterator iter;
	iter = data.begin();
	while(iter != data.end())
	{
		if (iter->first.compare(date) == 0)
			return(iter);
		iter++;
	}
	iter = FindClosestKey(date);
	return (iter);
}

void	BitcoinExchange::ExchangeRateData(const char *str)
{
	std::string line;

	in_fname.open(str, std::ios::in);
	if (in_fname.is_open()) {
		std::cout << "\033[104m\033[1msuccessfully opened " << str << "\033[0m" << std::endl;
		std::cout << std::endl;
		while (getline(in_fname, line)) {
			if (line == "date | value")
				continue ;
			if (CheckValidDate(line) < 0)
				continue ;
			if (CheckValidNmbr(line) < 0)
				continue ;
		}
	}
	else
		std::cout << "could not open the file " << str << std::endl;
	in_fname.close();
	data_base.close();
	std::cout << "\033[104m\033[1msuccessfully closed input file\033[0m" << std::endl;
	std::cout << "\033[104m\033[1msuccessfully closeed database\033[0m" << std::endl;
	std::cout << std::endl;
}