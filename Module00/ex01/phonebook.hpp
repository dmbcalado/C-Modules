/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:04:41 by dmendonc          #+#    #+#             */
/*   Updated: 2023/01/24 21:50:06 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <stdlib.h>
# include <iostream>
# include <string>
# include <cstring>

int		size_of_str(std::string str);
void	print_n_char(std::string str, int n);
void	print_str(std::string str);
void	print_start(void);

class PhoneBook
{
public:


	//	getters
	void	get_first_name();
	void	get_last_name();
	void	get_nickname();
	void	get_d_secret();
	//	commands
	void	start();
	void	add();
	void	search();
	int		compare(std::string str);
	void	print_n_char(std::string str, int n, int flag);

private:
	int	phone_number;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string dark_secret;
};

#endif