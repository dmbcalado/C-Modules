/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 04:53:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/01/31 05:08:04 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"


Fixed::Fixed() {
		value = 0;
		std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const float nbr) {
	value = roundf(nbr * (1 << n_bits));
	value_f = (float)((float)value / (1 << n_bits));
	std::cout << "Float constructor called." << std::endl;
}

Fixed::Fixed(const int nbr) {
	value = nbr * (1 << n_bits);
	value_f = (float)((float)value / (1 << n_bits));
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
	value = obj.value;
	value_f = obj.value_f;
	std::cout << "Copy Constructor called." << std::endl;
}

Fixed &Fixed::operator = (const Fixed &old) {
	value = old.value;
	value_f = old.value_f;
	std::cout << "Copy assignment opeator called." << std::endl;
	return (*this);
}

int		Fixed::getRawBits(void) const {
	return(value);
}

void	Fixed::setRawBits(int const raw){
	value = raw;
}


float	Fixed::toFloat(void)const {
	return ((float)value / (1 << n_bits));
}

int		Fixed::toInt(void) const{
	return(roundf(value_f));
}
