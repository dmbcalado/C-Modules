
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <unistd.h>
# include <string>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <iostream>
# include <bits/stdc++.h>

class ClapTrap {

public:

	// Default Constructor with nam as input given
	ClapTrap(std::string nam);

	// Copy Constructor
	ClapTrap(const ClapTrap &obj);

	// Copy Assignment operator
	ClapTrap &operator = (const ClapTrap& old);

	// Member functions of ClapTrap
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		atack(const std::string& target);

	// extra functions to smoth out the code
	void		repairment();
	void		setDamage(unsigned int ADamage);

	int			checker();
	int			ret_Hitpoints();
	int			ret_Energypoints();
	std::string	targets_name();

	// Default Destructor
	~ClapTrap();

private:
	std::string Name;
	int	repair;
	int	A_Damage;
	int	Hit_Points;
	int	Energy_Points;

} ;

void	atack_moment(ClapTrap& atacker, ClapTrap& Defenser);
void	printHP(ClapTrap& Hero, ClapTrap& Vilan);


#endif