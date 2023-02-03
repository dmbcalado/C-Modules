/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:19:06 by dmendonc          #+#    #+#             */
/*   Updated: 2023/02/03 19:50:03 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public:

	// Constructor
	DiamondTrap(std::string nam);

	// Copy Constructor
	DiamondTrap(DiamondTrap &obj);

	// Copy Assignment operator
	DiamondTrap &operator = (DiamondTrap& obj);

	// Member functions of DiamondTrap
	void	atack(const std::string& target);

	std::string	getName();

	// Default Destructor
	~DiamondTrap();

private :

	std::string Name;
} ;

void	atack_moment(DiamondTrap &atacker, DiamondTrap &Defenser);
void	atack_moment(FragTrap &Atacker, DiamondTrap& Defenser);
void	atack_moment(DiamondTrap &Atacker, FragTrap &Defenser);
void	printHP(DiamondTrap &Hero, DiamondTrap &Vilan);
void	printHP(DiamondTrap& Hero, FragTrap& Vilan);
void	printHP(FragTrap& Hero, DiamondTrap& Vilan);

#endif