
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
	void		atack(const std::string& target);
	void		highfiveguys();

	// Default Destructor
	~FragTrap();
} ;

void	atack_moment(FragTrap &atacker, FragTrap &Defenser);
void	atack_moment(ScavTrap &Atacker, FragTrap& Defenser);
void	atack_moment(FragTrap &Atacker, ScavTrap &Defenser);
void	printHP(FragTrap &Hero, FragTrap &Vilan);
void	printHP(FragTrap& Hero, ScavTrap& Vilan);
void	printHP(FragTrap& Hero, FragTrap& Vilan);

#endif