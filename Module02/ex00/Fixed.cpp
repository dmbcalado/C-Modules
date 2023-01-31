
#include "Fixed.hpp"

Fixed::Fixed() {
	value = 0;
	std::cout << "Class Constructed." << std::endl;
}

double	Fixed::FixedNbr() {
	return (double(value) / double(1 << n_bits));
}

int		Fixed::getRawBits(void) const {
	return(value);
}

void	Fixed::setRawBits(int const raw){
	value = raw;
}

void	Fixed::DoubleTo32(double nbr) {
	setRawBits(int(nbr * int(1 <<  n_bits)));
}
