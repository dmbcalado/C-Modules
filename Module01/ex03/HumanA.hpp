/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 04:13:04 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/01/27 16:56:31 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <stdlib.h>
# include <iostream>
# include <string>
# include <cstring>
# include "Weapon.hpp"

class HumanA : public Weapon {

public:
	// Constructor
	HumanA(std::string name, std::string weaponType);
	HumanA(std::string name, Weapon &new_weapon);
	// attack() member function
	void attack();

private:
	std::string Name;
	Weapon weapon;
};

#endif