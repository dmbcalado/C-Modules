
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

	// Constructor
	ScavTrap(std::string nam);

	// Destructor
	~ScavTrap();

	// Member functions of ScavTrap
	void	atack(const std::string& target);
	void	guardGate();

} ;

void	atack_moment(ScavTrap &atacker, ScavTrap &Defenser);
void	printHP(ScavTrap &Hero, ScavTrap &Vilan);

#endif