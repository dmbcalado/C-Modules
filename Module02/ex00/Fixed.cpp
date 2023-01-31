
#include "Fixed.hpp"

Fixed::Fixed() {
	value = 0;
	std::cout << "Class Constructed." << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
		value = obj.value;
		std::cout << "Copy Constructor activated." << std::endl;
}

Fixed &Fixed::operator = (const Fixed& old) {
		value = old.value;
		std::cout << "Copy assignement operator activated." << std::endl;
		return *this;
	}

Fixed::~Fixed() {
		std::cout << "Class destructed." << std::endl;
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
