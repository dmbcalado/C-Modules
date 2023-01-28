/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 04:14:05 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/01/27 17:05:12 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <stdlib.h>
# include <iostream>
# include <string>
# include <cstring>
# include "Weapon.hpp"

class HumanB : public Weapon {

public:
	// Constructor
	HumanB(std::string name);

	// attack() member function
	void attack();

	// setWeapon() member function
	void setWeapon(Weapon &weaponType);

private:
	std::string Name;
	Weapon		weapon;
};

#endif