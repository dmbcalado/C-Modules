
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

	// Constructor
	FragTrap(std::string nam);

	// Copy Constructor
	FragTrap(FragTrap &obj);

	// Copy Assignment operator
	FragTrap &operator = (FragTrap& obj);

	// Member functions of FragTrap
	virtual void	atack(const std::string& target);
	void			highfiveguys();

	// Default Destructor
	~FragTrap();
} ;

#endif