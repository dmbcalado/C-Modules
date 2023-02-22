/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/22 21:58:23 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base* base = generate();

	identify(base);
	identify(*base);
	delete base;
	
	Base* base2 = generate();
	
	identify(base2);
	identify(*base2);
	delete base2;
	
	Base* base3 = generate();

	identify(base3);
	identify(*base3);
	delete base3;

	Base* base4 = generate();

	identify(base4);
	identify(*base4);
	delete base4;

	Base* base5 = generate();

	identify(base5);
	identify(*base5);
	delete base5;
}