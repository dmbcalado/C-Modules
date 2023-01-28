/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 04:22:24 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/01/27 17:17:15 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, std::string weaponType) : Weapon::Weapon(weaponType)
{
	Name = name;
}

HumanA::HumanA(std::string name, Weapon &new_weapon)
{
	Name = name;
	weapon = new_weapon;
}

void	HumanA::attack()
{
	std::cout << "\033[31m" << Name << " attacks with their " << weapon.getType() << "\033[0m" << std::endl;
}