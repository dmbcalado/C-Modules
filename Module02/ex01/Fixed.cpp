
#include "Fixed.hpp"

Fixed	Fixed::&operator = (const Fixed& old) {
	value = old.value;
	value_d = old.value_d;
	std::cout << "Copy assignement operator activated." << std::endl;
	return *this;
}

Fixed::Fixed() {
		value = 0;
		std::cout << "Class constructed." << std::endl;
}

Fixed::Fixed(const float nbr) {
	setRawBits(roundf(nbr * (1 << Fixed::bits)));
	value_d = double(value) / double(1<< n_bits);
	std::cout << "Class constructed." << std::endl;
}

Fixed::Fixed(int nbr) {
	setRawBits(nbr * (1 << Fixed::bits));
	value_d = double(value) / double(1<< n_bits);
	std::cout << "Class constructed." << std::endl;
}

int32_t	Fixed::DoubleTo32(double nbr) {
	setRawBits(nbr * double(1 <<  n_bits) + (nbr >= 0 ? 0.5 : -0.5));
	return(nbr * double(1 <<  n_bits) + (nbr >= 0 ? 0.5 : -0.5));
}

double	Fixed::FixedValue() {
	return (double(value) / double(1<< n_bits));
}

int		Fixed::getRawBits(void) const {
	return(value);
}

void	Fixed::setRawBits(int const raw){
	value = raw;
}

float	Fixed::toFloat(void) const{
	return(float(double(value) / double(1<< n_bits)));
}

int		Fixed::toInt(void) const{
	return(roundf(value_d));
}

std::ostream & operator << (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}