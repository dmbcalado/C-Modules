
# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(std::string nam){
	Att_Damage = 20;
	Hit_Points = 100;
	Energy_Points = 50;
	std::cout << "ScavTrap "<< nam << " created." ;
	std::cout << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap "<< Name << " destroyed.";
	std::cout << std::endl;
}

// -------------         Actions          -------------
// Take damage : -<amount> HP
void	ScavTrap::takeDamage(unsigned int amount) {
	Hits_Points -= amount;
	if (Hits_Points < 0) {
		Hits_Points = 0;
	}
}

// Repair : +<amount> HP | -1 EP
void	ScavTrap::beRepaired(unsigned int amount) {
	Hits_Points += amount;
	if (Hits_Points > 10) {
		Hits_Points = 10;
	}
	Energy_Points--;
}

// Attack : -1 EP
void	ScavTrap::attack(const std::string& target) {
	Energy_Points--;
	std::cout << "ScavTrap " << Name << " attacks ";
	std::cout << target << ", causing " << Att_Damage;
	std::cout << " AD!" << std::endl;
}

// -------------     extra functions      -------------

void	ScavTrap::repairment() {
	std::cout << Name << " found a potion." << std::endl;
	repair = 1 + rand() % 10;
	this->beRepaired(repair);
	std::cout << "The potion has " << repair << " HP." << std::endl;
	std::cout << "Now " << Name << " has " << this->ret_Hitpoints();
	std::cout << " HP" << std::endl;
}

void	ScavTrap::setDamage(unsigned int ADamage){
	Att_Damage = ADamage;
}

int		ScavTrap::checker() {
	if(Hits_Points < 1 || Energy_Points < 1) {
		return 1;
	}
	return 0;
}

std::string	ScavTrap::targets_name() {
	return(this->Name);
}

int	ScavTrap::ret_Hitpoints() {
	return(Hits_Points);
}

int	ScavTrap::ret_Energypoints() {
	return(Energy_Points);
}