
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <unistd.h>
# include <string>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <iostream>
# include <bits/stdc++.h>

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	// Default Constructor with nam as input given
	ScavTrap() : ClapTrap(std::string nam);

	// Member functions of ClapTrap
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		attack(const std::string& target);

	// extra functions to smoth out the code
	void		repairment();
	void		setDamage(unsigned int ADamage);

	int			checker();
	int			ret_Hitpoints();
	int			ret_Energypoints();
	std::string	targets_name();

	// Default Destructor
	~ScavTrap();

} ;


#endif