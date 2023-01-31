/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Auxiliar.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 05:49:16 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/01/31 15:37:34 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	atack_moment(ClapTrap& atacker, ClapTrap& Defenser) {
	int	ADamage = 1 + rand() % 5;
	std::string target = Defenser.targets_name();
	atacker.setDamage(ADamage);
	atacker.atack(target);
	Defenser.takeDamage(ADamage);
}

void	printHP(ClapTrap& Hero, ClapTrap& Vilan) {
	std::cout << std::endl;
	std::cout << "Hero :   " << Hero.ret_Hitpoints() << " HP";
	std::cout << " | " << Hero.ret_Energypoints() << " EP";
	std::cout << std::endl;
	std::cout << "Vilan : " << Vilan.ret_Hitpoints() << " HP";
	std::cout << " | " << Vilan.ret_Energypoints() << " EP";
	std::cout << std::endl << std:: endl;
}