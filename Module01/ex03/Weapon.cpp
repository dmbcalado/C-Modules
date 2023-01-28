/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 04:16:23 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/01/28 15:10:28 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon() {}

Weapon::Weapon(std::string weaponType)
{
	std::cout << "weapon " << weaponType << " constructed" << std::endl;
	type = weaponType;
}

std::string	Weapon::getType() {
		if (type.empty() == false) {
			return type;
		}
		else {
			return NULL;
		}
}

void Weapon::setType(std::string newType) {
		type = newType;
	}