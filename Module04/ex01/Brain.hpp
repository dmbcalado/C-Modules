/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:53:51 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/05 15:09:20 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain {

public:

	Brain();

	Brain(const Brain &obj);

	Brain &operator = (const Brain& obj);

	~Brain();
	std::string *ideas;
} ;

#endif