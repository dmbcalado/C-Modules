
# include "FragTrap.hpp"

std::string	attack_moment(ClapTrap& Defenser) {
	std::string target = Defenser.targets_name();
	Defenser.takeDamage(Defenser.ret_AD());
	return(target);
}

void	printHP(ClapTrap& Hero, ClapTrap& Vilan) {
	std::cout << std::endl;
	std::cout << "Hero :   " << Hero.ret_Hitpoints() << " HP";
	std::cout << " | " << Hero.ret_Energypoints() << " EP";
	std::cout << std::endl;
	std::cout << "Vilan : " << Vilan.ret_Hitpoints() << " HP";
	std::cout << " | " << Vilan.ret_Energypoints() << " EP";
	std::cout << std::endl << std:: endl;
}

int	main(void)
{
	int			random, repair;
	std::string	targets_name;
	FragTrap	Hero("Jordan Peterson");
	ScavTrap	Vilan("Cancel Culture");

	usleep(1);
	while(!Hero.checker() && !Vilan.checker()) {
		random = rand() % 100;
		if (random < 35) {
			targets_name = attack_moment(Vilan);
			Hero.attack(targets_name);
		}
		else if (random >= 35 && random < 70) {
			targets_name = attack_moment(Hero);
			Vilan.attack(targets_name);
		}
		else if (random < 80) {
			repair = 1 + rand() % 100;
			if (repair > 50) {
				Hero.repairment();
			}
			else {
				Vilan.repairment();
			}
		}
		else if (random < 90){
			Vilan.guardGate();
		}
		else {
			Hero.highfiveguys();
		}
		sleep(1);
		printHP(Hero, Vilan);
		sleep(1);
	}
}
