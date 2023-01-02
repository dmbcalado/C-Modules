
# include "ScavTrap.hpp"

/* ScavTrap::ScavTrap(std::string nam) : ClapTrap(nam){
	Att_Damage = 20;
	Hit_Points = 100;
	Energy_Points = 50;
	std::cout << "ScavTrap "<< nam << " created." ;
	std::cout << std::endl;
} */

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap "<< ret_Name() << " destroyed.";
	std::cout << std::endl;
}

// Attack : -1 EP
void	ScavTrap::attack(const std::string& target) {
	setEP(-1);
	std::cout << "ScavTrap " << ret_Name() << " attacks! ";
	std::cout << target << ", causing " << ret_AD();
	std::cout << " AD!" << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap" << ret_Name() << "is guarding";
	std::cout << " the gate." << std::endl;
}
