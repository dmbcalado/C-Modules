/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:30 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/05 14:56:03 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <unistd.h>
# include <string>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <iostream>
# include <bits/stdc++.h>

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	WrongCat();

	WrongCat(const WrongCat &obj);

	WrongCat &operator = (const WrongCat& obj);
	void	makeSound() const;
	virtual ~WrongCat();

protected:

} ;
#endif