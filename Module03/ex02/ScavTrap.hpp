
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
	ScavTrap(std::string nam) : ClapTrap(nam){
	setEP(50);
	setHP(100);
	setDamage(20);
	std::cout << "ScavTrap "<< nam << " created." ;
	std::cout << std::endl;
}

	// Member functions of ScavTrap
	void		attack(const std::string& target);
	void		guardGate();
	// extra functions to smoth out the code
	std::string	targets_name();

	// Default Destructor
	~ScavTrap();
} ;


#endif