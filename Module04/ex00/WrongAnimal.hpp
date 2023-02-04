/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:14:00 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/04 16:40:47 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <unistd.h>
# include <string>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <iostream>
# include <bits/stdc++.h>

class WrongAnimal {

public:
	// Constructors
	WrongAnimal();
	WrongAnimal(std::string type);

	// Member functions of Animal
	virtual void	makeSound() const; // !virtual!
	std::string	getType() const;
	// Default Destructor
	virtual ~WrongAnimal();

protected:
	std::string type;

} ;
#endif