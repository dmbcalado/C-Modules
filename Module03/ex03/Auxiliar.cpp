/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Auxiliar.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 05:49:16 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/03 19:44:28 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	atack_moment(DiamondTrap &Atacker, DiamondTrap &Defenser) {
	std::string target = Defenser.getName();
	Atacker.atack(target);
	Defenser.FragTrap::takeDamage(Atacker.FragTrap::ret_AD());
}

void	atack_moment(DiamondTrap &Atacker, FragTrap &Defenser) {
	std::string target = Defenser.targets_name();
	Atacker.atack(target);
	Defenser.takeDamage(Atacker.FragTrap::ret_AD());
}

void	atack_moment(FragTrap &Atacker, DiamondTrap& Defenser) {
	std::string target = Defenser.getName();
	Atacker.atack(target);
	Defenser.FragTrap::takeDamage(Atacker.ret_AD());
}

void	printHP(DiamondTrap& Hero, DiamondTrap& Vilan) {
	std::cout << std::endl;
	std::cout << "Hero :   " << Hero.FragTrap::ret_Hitpoints() << " HP";
	std::cout << " | " << Hero.ScavTrap::ret_Energypoints() << " EP";
	std::cout << std::endl;
	std::cout << "Vilan : " << Vilan.FragTrap::ret_Hitpoints() << " HP";
	std::cout << " | " << Vilan.ScavTrap::ret_Energypoints() << " EP";
	std::cout << std::endl << std:: endl;
}

void	printHP(DiamondTrap& Hero, FragTrap& Vilan) {
	std::cout << std::endl;
	std::cout << "Hero :   " << Hero.FragTrap::ret_Hitpoints() << " HP";
	std::cout << " | " << Hero.ScavTrap::ret_Energypoints() << " EP";
	std::cout << std::endl;
	std::cout << "Vilan : " << Vilan.ret_Hitpoints() << " HP";
	std::cout << " | " << Vilan.ret_Energypoints() << " EP";
	std::cout << std::endl << std:: endl;
}

void	printHP(FragTrap& Hero, DiamondTrap& Vilan) {
	std::cout << std::endl;
	std::cout << "Hero :   " << Hero.ret_Hitpoints() << " HP";
	std::cout << " | " << Hero.ret_Energypoints() << " EP";
	std::cout << std::endl;
	std::cout << "Vilan : " << Vilan.FragTrap::ret_Hitpoints() << " HP";
	std::cout << " | " << Vilan.ScavTrap::ret_Energypoints() << " EP";
	std::cout << std::endl << std:: endl;
}