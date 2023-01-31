/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Auxiliar.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 05:49:16 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/01/31 16:14:14 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	atack_moment(ScavTrap &Atacker, ScavTrap &Defenser) {
	std::string target = Defenser.targets_name();
	Atacker.atack(target);
	Defenser.takeDamage(Atacker.ret_AD());
}

void	printHP(ScavTrap& Hero, ScavTrap& Vilan) {
	std::cout << std::endl;
	std::cout << "Hero :   " << Hero.ret_Hitpoints() << " HP";
	std::cout << " | " << Hero.ret_Energypoints() << " EP";
	std::cout << std::endl;
	std::cout << "Vilan : " << Vilan.ret_Hitpoints() << " HP";
	std::cout << " | " << Vilan.ret_Energypoints() << " EP";
	std::cout << std::endl << std:: endl;
}
