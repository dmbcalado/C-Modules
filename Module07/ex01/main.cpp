/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/24 16:50:49 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// prints replacing 'a' for '*'
void	replace_a(const char &str_i) {
	if (str_i == 'a') {
		std::cout << '*';
	}
	else
		std::cout << str_i;
}

// prints prime numbers
void	print_prime(const int &nbr) {
	for(int i = 2 ; i < nbr ; i++){
		if (nbr % i == 0)
			return ;
	}
	std::cout << "prime :" << nbr << std::endl;
}


//instantiated function template (print)
template< typename T >
void print( T const & x ) {
	std::cout << x;
}

int main(void)
{
	{
		char str[] = {'v','o','c','e',' ','p','a','s','s','a',' ','e','u',' ','a','c','h','o',' ','g','r','a','c','a','\n','\0'};
		int int_array [] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
		std::cout << "\niter in int array (with print) :" << std::endl;
		iter(int_array, 15, print);
		std::cout << "\niter in int array (with print_prime) :" << std::endl;
		iter(int_array, 15, print_prime);
		std::cout << std::endl;
		std::cout << "\niter in char array (with replace_a) :" << std::endl;
		iter(str, 26, replace_a);
	}
}
