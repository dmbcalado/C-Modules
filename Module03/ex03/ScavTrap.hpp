/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:27:35 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/03 20:03:16 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
# include "FragTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	// Constructors
	ScavTrap(std::string nam);
	ScavTrap(std::string nam, std::string yes);

	// Destructor
	~ScavTrap();

	// Copy Constructor
	ScavTrap(ScavTrap &obj);

	// Copy Assignment operator
	ScavTrap &operator = (ScavTrap& obj);

	// Member functions of ScavTrap
	virtual void	atack(const std::string& target);
	void	guardGate();
	
	ScavTrap &return_Scav();
};

void	atack_moment(ScavTrap &atacker, ScavTrap &Defenser);
void	printHP(ScavTrap &Hero, ScavTrap &Vilan);

#endif