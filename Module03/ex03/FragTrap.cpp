/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:36:21 by dmendonc          #+#    #+#             */
/*   Updated: 2023/02/03 18:09:46 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(std::string nam) : ClapTrap::ClapTrap(nam, 30){
	setEP(100);
	setHP(100);
	setDamage(30);
	std::cout << "FragTrap "<< nam << " created." ;
	std::cout << std::endl;
}

FragTrap::FragTrap(FragTrap &obj) : ClapTrap::ClapTrap(obj.ret_Name(), 30) {
	this->setDamage(obj.ret_AD());
	this->setHP(obj.ret_Hitpoints());
	this->setEP(obj.ret_Energypoints());
}

FragTrap &FragTrap::operator = (FragTrap& obj) {
	this->setName(obj.ret_Name());
	this->setDamage(obj.ret_AD());
	this->setHP(obj.ret_Hitpoints());
	this->setEP(obj.ret_Energypoints());
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap "<< ret_Name() << " destroyed.";
	std::cout << std::endl;
}

// atack : -1 EP
void	FragTrap::atack(const std::string& target) {
	setEP(-1);
	std::cout << "FragTrap " << ret_Name() << " shoot ";
	std::cout << target << "! causing " << ret_AD();
	std::cout << " AD!" << std::endl;
}

void	FragTrap::highfiveguys(){
	std::cout << "FragTrap " << ret_Name() << " highfives";
	std::cout << " the boys, they all happy." << std::endl;
}
