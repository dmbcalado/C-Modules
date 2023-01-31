
# include "ScavTrap.hpp"

int	main(void)
{
	int			random, repair;
	std::string	targets_name;
	ScavTrap	Hero("Miss Fortune");
	ScavTrap	Vilan("Shamira");

	std::cout << std::endl;
	while(!Hero.checker() && !Vilan.checker()) {
		random = rand() % 100;
		if (random < 35) {
			atack_moment(Vilan, Hero);
		}
		else if (random >= 35 && random < 70) {
			atack_moment(Hero, Vilan);
		}
		else if (random < 90) {
			repair = 1 + rand() % 100;
			if (repair > 50) {
				if (Hero.ret_Hitpoints() < 100) {
					Hero.repairment();
				}
				else {
					std::cout << "ScavTrap " << Hero.ret_Name() << " has found a potion," ;
					std::cout << " but since its max HP already, nothing happens." << std::endl;
				}
			}
			else {
				if (Vilan.ret_Hitpoints() < 100) {
					Vilan.repairment();
				}
				else{
					std::cout << "ScavTrap " << Vilan.ret_Name() << " has found a potion," ;
					std::cout << " but since its max HP already, nothing happens." << std::endl;
				}
			}
		}
		else {
			Hero.guardGate();
		}
		printHP(Hero, Vilan);
		sleep(1);
	}
}
