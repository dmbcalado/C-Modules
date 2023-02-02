/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:13:32 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/02 23:34:10 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string nam) : ClapTrap(nam, 20) {
	std::cout << "ScavTrap "<< nam << " created.";
	std::cout << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &obj) : ClapTrap(obj.ret_Name(), 20){
	this->setDamage(obj.ret_AD());
	this->setHP(obj.ret_Hitpoints());
	this->setEP(obj.ret_Energypoints());
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap "<< ret_Name() << " destroyed.";
	std::cout << std::endl;
}


ScavTrap &ScavTrap::operator = (ScavTrap& obj) {
	this->setName(obj.ret_Name());
	this->setDamage(obj.ret_AD());
	this->setHP(obj.ret_Hitpoints());
	this->setEP(obj.ret_Energypoints());
	return *this;
}

void	ScavTrap::atack(const std::string& target) {
	setEP(-1);
	std::cout << "ScavTrap " << ret_Name() << " atacks ";
	std::cout << target << "! causing " << ret_AD();
	std::cout << " AD!" << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << ret_Name() << " is guarding";
	std::cout << " the gate." << std::endl;
}
