/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:19:22 by dmendonc          #+#    #+#             */
/*   Updated: 2023/02/03 19:47:38 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int	main(void)
{
	int			random, repair;
	std::string	targets_name;
	DiamondTrap	Hero("Allies");
	FragTrap	Vilan("Nazis");

	usleep(1);
	while(!Hero.ScavTrap::checker() && !Vilan.checker()) {
		random = rand() % 100;
		if (random < 35) {
			atack_moment(Hero, Vilan);
		}
		else if (random >= 35 && random < 70) {
			atack_moment(Vilan, Hero);
		}
		else if (random < 80) {
			repair = 1 + rand() % 100;
			if (repair > 50) {
				/* if (Hero.FragTrap::ret_Hitpoints() < 100) {
					Hero.FragTrap::repairment();
				}
				else  */{
					std::cout << "DiamondTrap " << Hero.getName() << " has found a potion," ;
					std::cout << " but since its max HP already, nothing happens." << std::endl;
				}
			}
			else {
				if (Vilan.ret_Hitpoints() < 100) {
					Vilan.repairment();
				}
				else{
					std::cout << "DiamondTrap " << Vilan.ret_Name() << " has found a potion," ;
					std::cout << " but since its max HP already, nothing happens." << std::endl;
				}
			}
		}
		else if (random < 90){
			Vilan.highfiveguys();
		}
		else {
			Hero.guardGate();
		}
		printHP(Hero, Vilan);
		sleep(1);
	}
}
