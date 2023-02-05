/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:05:16 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/05 15:10:30 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

public:
	Dog();

	Dog(const Dog &obj);

	Dog &operator = (const Dog& obj);

	void	makeSound() const;
	virtual ~Dog();

private:
	Brain *AnimalBrain;
} ;

#endif