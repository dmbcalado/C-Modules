/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:58:53 by dmendonc          #+#    #+#             */
/*   Updated: 2023/01/26 14:46:48 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <stdlib.h>
# include <iostream>
# include <string>
# include <cstring>
# include <new>

class Zombie
{
	public:

	//	Constructor & Destructor
	Zombie(void);
	Zombie(std::string name);
	~Zombie();
	
	//	Functions
	void	announce(void);

	private:
	
	std::string Name;
} ;

Zombie	*zombieHorde(int N, std::string name);

#endif