
# include "ScavTrap.hpp"

void	atack_moment(ClapTrap& Attacker, ClapTrap& Defenser) {
	int	ADamage = 1 + rand() % 5;
	std::string target = Defenser.targets_name();
	Attacker.setDamage(ADamage);
	Attacker.attack(target);
	Defenser.takeDamage(ADamage);
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
	int	random, repair;
	ScavTrap	Hero("Jordan Peterson");
	ScavTrap	Vilan("Cancel Culture");

	usleep(1);
	while(!Hero.checker() && !Vilan.checker()) {
		random = rand() % 100;
		if (random < 45) {
			atack_moment(Hero, Vilan);
		}
		else if (random >= 45 && random < 90) {
			atack_moment(Vilan, Hero);
		}
		else {
			repair = 1 + rand() % 100;
			if (repair > 50) {
				Hero.repairment();
			}
			else {
				Vilan.repairment();
			}
		}
		sleep(1);
		printHP(Hero, Vilan);
		sleep(1);
	}
}
