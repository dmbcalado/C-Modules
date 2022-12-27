
# include "ClapTrap.hpp"

/* int	main(void)
{
	FixedPointNbr	FixingPoint;

	const int32_t	ret_32 = FixingPoint.DoubleTo32(5.6, 2);
	const double	ret_d  = FixingPoint.FixedNbr(ret_32, 2);

	std::cout << "The initial double was :	" << 5.6 << std::endl;
	std::cout << "After fixing the number we get :	" << ret_32 << std::endl;
	std::cout << "After undoing the fixing :	" << ret_d << std::endl;
} */

void	atack_moment(ClapTrap& Attacker, ClapTrap& Defenser) {
	int	att_force = 1 + rand() % 100;
	std::string target = Defenser.targets_name();
	Attacker.attack(target);
	Defenser.takeDamage(att_force);
}

int	main(void)
{
	int	random, repair;
	ClapTrap	Hero("Jordan Peterson");
	ClapTrap	Vilan("Cancel Culture");

	while(!Hero.checker() && !Vilan.checker()) {
		random = rand() % 100;
		if (random < 40) {
			atack_moment(Hero, Vilan);
		}
		else if (random >= 40 && random < 80) {
			atack_moment(Vilan, Hero);
		}
		else {
			repair = 1 + rand() % 100;
			if (repair > 40) {
				Hero.repairment();
			}
			else {
				Vilan.repairment();
			}
		}
	}
}
