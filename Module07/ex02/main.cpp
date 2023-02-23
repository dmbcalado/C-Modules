/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/23 20:44:27 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	{
		try {
			Array<int> Temp_Class;
			Array<int> Temp_Class_2(5);
	
			std::cout << Temp_Class_2[2] << std::endl;
			std::cout << Temp_Class_2[4] << std::endl;
			std::cout << Temp_Class_2[5] << std::endl;
		}
		catch (std::exception &error) {
			std::cout << error.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		try {
			Array<char> Temp_Class_2(5);
			Array<char> Temp_Class;
			Temp_Class = Temp_Class_2;

			std::cout << Temp_Class_2[2] << std::endl;
			std::cout << Temp_Class_2[4] << std::endl;
			std::cout << Temp_Class[2] << std::endl;
			std::cout << Temp_Class[4] << std::endl;
		}
		catch (std::exception &error) {
			std::cout << error.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		try {
			Array<size_t> Temp_Class_2(5);
			Array<size_t> Temp_Class = Temp_Class_2;
	
			std::cout << Temp_Class_2[2] << std::endl;
			std::cout << Temp_Class[0] << std::endl;
			std::cout << Temp_Class[1] << std::endl;
			std::cout << Temp_Class[5] << std::endl;
		}
		catch (std::exception &error) {
			std::cout << error.what() << std::endl;
		}
	}
}

