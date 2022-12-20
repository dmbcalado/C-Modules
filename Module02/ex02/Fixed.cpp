
#include "Fixed.hpp"


Fixed::Fixed() {
		value = 0;
		std::cout << "Class constructed." << std::endl;
}

Fixed::Fixed(const float nbr) {
	value = roundf(nbr * (1 << n_bits));
	value_f = (float)((float)value / (1 << n_bits));
	std::cout << "Class constructed." << std::endl;
}

Fixed::Fixed(const int nbr) {
	value = nbr * (1 << n_bits);
	value_f = (float)((float)value / (1 << n_bits));
	std::cout << "Class constructed." << std::endl;
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

Fixed	Fixed::min(Fixed &a, Fixed &b){
	if (a.value_f < b.value_f) {
		return a;
	}
	else {
		return b;
	}
}

Fixed	Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.value_f < b.value_f) {
		return a;
	}
	else {
		return b;
	}
}

Fixed	Fixed::max(Fixed &a, Fixed &b){
	if (a.value_f > b.value_f) {
		return a;
	}
	else {
		return b;
	}
}

Fixed	Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.value_f > b.value_f) {
		return  a;
	}
	else {
		return  b;
	}
}