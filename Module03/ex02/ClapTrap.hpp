/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:31:49 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/02 23:31:53 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	// Constructors
	ClapTrap(std::string nam);
	ClapTrap(std::string name, int AD);

	// Copy Constructor
	ClapTrap(const ClapTrap &obj);

	// Copy Assignment operator
	ClapTrap &operator = (const ClapTrap& obj);


	// Member functions of ClapTrap
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		atack(const std::string& target);

	// extra functions to smoth out the code
	void		repairment();
	void		setName(std::string new_Name);
	void		setHP(unsigned int HP);
	void		setEP(int EP);
	void		setDamage(unsigned int ADamage);
	int			checker();
	int			ret_AD();
	int			ret_Hitpoints();
	int			ret_Energypoints();
	std::string	ret_Name();
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

#endif