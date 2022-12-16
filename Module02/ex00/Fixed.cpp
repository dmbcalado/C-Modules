
#include "Fixed.hpp"

double	Fixed::FixedNbr() {
	return (double(value) / double(1<< n_bits));
}

int		Fixed::getRawBits(void) const {
	return(value);
}

void	Fixed::setRawBits(int const raw){
	value = raw;
}

int32_t	Fixed::DoubleTo32(double nbr) {
	setRawBits(nbr * double(1 <<  n_bits) + (nbr >= 0 ? 0.5 : -0.5));
	return(nbr * double(1 <<  n_bits) + (nbr >= 0 ? 0.5 : -0.5));
}