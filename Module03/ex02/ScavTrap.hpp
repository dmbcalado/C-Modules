
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
	ScavTrap(std::string nam);
	// Default Destructor
	~ScavTrap();

	// Member functions of ScavTrap
	void		atack(const std::string& target);
	void		guardGate();
	// extra functions to smoth out the code

} ;

#endif