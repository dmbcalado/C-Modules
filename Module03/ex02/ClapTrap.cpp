
#include "ClapTrap.hpp"

// ------------- Constructor and Destructor -------------
ClapTrap::ClapTrap(std::string name) {
	Name = name;
	A_Damage = 0;
	Hit_Points = 10;
	Energy_Points = 10;
	std::cout << "ClapTrap "<< name << " created." ;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(std::string name, int AD) {
	Name = name;
	A_Damage = AD;
	Hit_Points = 100;
	Energy_Points = 50;
	std::cout << "ClapTrap "<< name << " created." ;
	std::cout << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap "<< Name << " destroyed.";
	std::cout << std::endl;
}

// -------------         Actions          -------------
// Take damage : -<amount> HP
void	ClapTrap::takeDamage(unsigned int amount) {
	Hit_Points -= amount;
	if (Hit_Points < 0) {
		Hit_Points = 0;
	}
}

// Repair : +<amount> HP | -1 EP
void	ClapTrap::beRepaired(unsigned int amount) {
	Hit_Points += amount;
	Energy_Points--;
}

// atack : -1 EP
void	ClapTrap::atack(const std::string& target) {
	Energy_Points--;
	std::cout << "ClapTrap " << Name << " atacks ";
	std::cout << target << ", causing " << A_Damage;
	std::cout << " AD!" << std::endl;
}

// -------------     extra functions      -------------

void	ClapTrap::repairment() {
	std::cout << Name << " found a potion." << std::endl;
	repair = 20;
	this->beRepaired(repair);
	std::cout << "The potion has " << repair << " HP." << std::endl;
	std::cout << "Now " << Name << " has " << this->ret_Hitpoints();
	std::cout << " HP" << std::endl;
}

void	ClapTrap::setDamage(unsigned int ADamage){
	A_Damage = ADamage;
}

void	ClapTrap::setHP(unsigned int HP){
	Hit_Points = HP;
}

void	ClapTrap::setEP(int EP){
	if (EP == -1 && Energy_Points != 0){
		Energy_Points--;
	}
	else {
		Energy_Points = EP;
	}
}

int		ClapTrap::checker() {
	if(Hit_Points < 1 || Energy_Points < 1) {
		return 1;
	}
	return 0;
}

std::string	ClapTrap::targets_name() {
	return(this->Name);
}

int	ClapTrap::ret_AD(){
	return(A_Damage);
}

int	ClapTrap::ret_Hitpoints() {
	return(Hit_Points);
}

int	ClapTrap::ret_Energypoints() {
	return(Energy_Points);
}

std::string	ClapTrap::ret_Name() {
	return(Name);
}