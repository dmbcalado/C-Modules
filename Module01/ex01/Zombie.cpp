/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:00:47 by dmendonc          #+#    #+#             */
/*   Updated: 2023/01/26 14:49:19 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::Zombie(std::string name)
{
	std::cout << "Created the Zombie : " << name << std::endl;
	Name = name;
}

Zombie::~Zombie()
{
	std::cout << "Destroyed the Zombie : " << Name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}