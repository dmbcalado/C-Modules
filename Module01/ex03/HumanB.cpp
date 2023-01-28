/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 04:22:24 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/01/28 15:11:15 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
		Name = name;
}

void HumanB::setWeapon(Weapon &new_weapon) {
		weapon = new_weapon;
}

void	HumanB::attack() {
	if (weapon.getType().empty() == false) {
		std::cout << "\033[31m" << Name << " attacks with their " << weapon.getType() << "\033[0m" << std::endl;
	}
	else {
		std::cout << Name << "attacks with his fists." << std::endl;
	}
}