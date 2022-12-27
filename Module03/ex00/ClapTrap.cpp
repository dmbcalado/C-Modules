
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string nam) {
	Name = nam;
	std::cout << "ClapTrap "<< nam << " created." ;
	std::cout << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap "<< Name << " destroyed.";
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	Hit_Points -= amount;
	if (Hit_Points < 0) {
		Hit_Points = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	Hit_Points += amount;
	if (Hit_Points > 10) {
		Hit_Points = 10;
	}
	Energy_Points--;
}

void	ClapTrap::attack(const std::string& target) {
	Energy_Points--;
	std::cout << "ClapTrap " << Name << " attacks ";
	std::cout << target << ", causing " << Att_Damage;
	std::cout << "points of damage!" << std::endl;
}

int		ClapTrap::checker() {
	if(Hit_Points < 1 || Energy_Points < 1) {
		return 1;
	}
	return 0;
}

void	ClapTrap::repairment() {
	std::cout << Name << " found a potion." << std::endl;
	repair = 1 + rand() % 10;
	this->beRepaired(repair);
	std::cout << "It has " << repair << "hit points." << std::endl;
	std::cout << "Now " << Name << " has " << this->ret_Hitpoints();
}

std::string	ClapTrap::targets_name() {
	return(this->Name);
}

int	ClapTrap::ret_Hitpoints() {
	return(Hit_Points);
}

int	ClapTrap::ret_Energypoints() {
	return(Hit_Points);
}