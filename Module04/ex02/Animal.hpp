/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:09:51 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/04 17:27:55 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <unistd.h>
# include <string>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <iostream>
# include <bits/stdc++.h>

// virtual -> Lets you overload function in derived classes.

class Animal {

public:
	// Constructors

	// Member functions of Animal
	virtual void	makeSound() const; // !virtual!
	std::string	getType() const;

	// Destructor
	virtual ~Animal();

protected:
	Animal();
	Animal(std::string type);
	std::string type;

} ;

#endif