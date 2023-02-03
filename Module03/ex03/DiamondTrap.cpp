/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:10:17 by dmendonc          #+#    #+#             */
/*   Updated: 2023/02/03 20:04:02 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string nam) :  FragTrap(nam.append("_clap_name")), ScavTrap(nam, nam) {
	Name = nam;
	//std::cout << this->ret_AD() << std::endl;
	std::cout << "DiamondTrap "<< nam << " created." ;
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &obj) : FragTrap(obj.Name.append("_clap_name")), ScavTrap(obj.Name.append("_clap_name")) {
	Name = obj.Name;
	//std::cout << this->FragTrap::ret_AD() << std::endl;
	std::cout << "DiamondTrap "<< Name << " created." ;
	std::cout << std::endl;
}

DiamondTrap &DiamondTrap::operator = (DiamondTrap& obj) {
	DiamondTrap* ptr = new DiamondTrap(obj);
	return *ptr;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destroyed.";
	std::cout << std::endl;
}

// atack : -1 EP
void	DiamondTrap::atack(const std::string& target) {
	std::cout << "DiamondTrap " << Name << " shoot ";
	std::cout << target << "! causing " << this->FragTrap::ret_AD();
	std::cout << " AD!" << std::endl;
}

std::string	DiamondTrap::getName(void) {
	return Name;
}
