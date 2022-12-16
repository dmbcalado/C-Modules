
#include "Fixed.hpp"


Fixed::Fixed() {
		value = 0;
		std::cout << "Class constructed." << std::endl;
}

Fixed::Fixed(const float nbr) {
		setRawBits(nbr * double(1 <<  n_bits) + (nbr >= 0 ? 0.5 : -0.5));
		value_d = double(value) / double(1<< n_bits);
		std::cout << "Class constructed." << std::endl;
}

Fixed::Fixed(const double nbr) {
		setRawBits(nbr * double(1 <<  n_bits) + (nbr >= 0 ? 0.5 : -0.5));
		value_d = double(value) / double(1<< n_bits);
		std::cout << "Class constructed." << std::endl;
}

Fixed::Fixed(int nbr) {
		setRawBits(nbr * double(1 <<  n_bits) + (nbr >= 0 ? 0.5 : -0.5));
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