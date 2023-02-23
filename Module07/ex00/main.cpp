/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/23 05:32:52 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"

int main(void)
{
	{
		int a = 1, b = 2;
		std::cout << "\nbefore swap :" << std::endl;
		std::cout << a << " " << b << std::endl;
		swap(a, b);
		std::cout << "\nafter swap :" << std::endl;
		std::cout << a << " " << b << std::endl;
	}
	{
		std::string a = "Palavras", b = "Trocadas";
		std::cout << "\nbefore swap :" << std::endl;
		std::cout << a << " " << b << std::endl;
		swap(a, b);
		std::cout << "\nafter swap :" << std::endl;
		std::cout << a << " " << b << std::endl;
		std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
	}
	{

		std::string str = "ok";
		std::string str_2 = "meu";

		std::cout << "\nbefore swap :" << std::endl;
		std::cout << str << " " << str_2 << std::endl;
		swap(str, str_2);
		std::cout << "\nafter swap :" << std::endl;
		std::cout << str << " " << str_2 << std::endl;
		std::cout << "min( a, b ) = " << min( str, str_2 ) << std::endl;
		std::cout << "max( a, b ) = " << max( str, str_2 ) << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << std::endl;
		std::cout << "Main given in subject : " << std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;		
	}
}
