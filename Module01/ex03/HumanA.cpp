/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 04:22:24 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/01/28 19:41:15 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &new_weapon) : weapon(new_weapon) {
	Name = name;
}

void	HumanA::attack()
{
	std::cout << "\033[31m" << Name << " attacks with their " << weapon.getType() << "\033[0m" << std::endl;
}