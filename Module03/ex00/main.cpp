/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 05:49:08 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/03 19:14:23 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"


int	main(void)
{
	int	random, repair;
	ClapTrap	a("Benfica");
	ClapTrap	Vilan("Sporting");

	ClapTrap	Hero = a;
	usleep(1);
	while(!Hero.checker() && !Vilan.checker()) {
		random = rand() % 100;
		if (random < 45) {
			atack_moment(Hero, Vilan);
		}
		else if (random >= 45 && random < 90) {
			atack_moment(Vilan, Hero);
		}
		else {
			repair = 1 + rand() % 100;
			if (repair > 50) {
				Hero.repairment();
			}
			else {
				Vilan.repairment();
			}
		}
		sleep(1);
		printHP(Hero, Vilan);
		sleep(1);
	}
}
