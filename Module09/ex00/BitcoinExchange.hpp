/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:44:41 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/27 20:55:35 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# define MAX_INT 1000

# include <map>
# include <algorithm>
# include <iostream>
# include <fstream>
# include <string>
# include <cstring>

class BitcoinExchange
{
public:

	BitcoinExchange();

	int		CheckValidDate(std::string line);
	int		CheckValidNmbr(std::string line);
	void	MakeCalculations(std::string line, float ExRate);
	void	ExchangeRateData(const char *str);
	int		NextEnd(const char *line, int nth);
	std::map<std::string, float>::iterator FindBestKey(std::string date, float ExRate);
	std::map<std::string, float>::iterator FindClosestKey(std::string date);

private:
	std::fstream	in_fname;
	std::ifstream	data_base;
	std::map<std::string, float> data;
	std::map<std::string, float>::iterator itr;

};

#endif