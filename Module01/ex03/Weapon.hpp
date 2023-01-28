/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 04:11:40 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/01/27 16:52:32 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <stdlib.h>
# include <iostream>
# include <string>
# include <cstring>


class Weapon {

public:

	Weapon();
	Weapon(std::string weaponType);

	std::string getType();
	void setType(std::string newType);

private:
	std::string type;

} ;

#endif