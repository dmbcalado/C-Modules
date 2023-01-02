
#ifndef FragTrap_HPP
# define FragTrap_HPP

# include <unistd.h>
# include <string>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <iostream>
# include <bits/stdc++.h>

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap {

public:

	// Default Constructor with nam as input given
	FragTrap(std::string nam);

	// Member functions of FragTrap
	void		attack(const std::string& target);
	void		highfiveguys();
	// extra functions to smoth out the code
	std::string	targets_name();

	// Default Destructor
	~FragTrap();
} ;


#endif