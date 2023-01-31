
# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string nam) : ClapTrap(nam, 20) {
	std::cout << "ScavTrap "<< nam << " created." ;
	std::cout << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap "<< ret_Name() << " destroyed.";
	std::cout << std::endl;
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
