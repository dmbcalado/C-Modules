
#include "Fixed.hpp"


FixedPointNbr::FixedPointNbr() {
		value = 0;
		std::cout << "Class constructed." << std::endl;
}

FixedPointNbr::FixedPointNbr(const float nbr) {
		setRawBits(nbr * double(1 <<  n_bits) + (nbr >= 0 ? 0.5 : -0.5));
		std::cout << "Class constructed." << std::endl;
}

FixedPointNbr::FixedPointNbr(const double nbr) {
		setRawBits(nbr * double(1 <<  n_bits) + (nbr >= 0 ? 0.5 : -0.5));
		std::cout << "Class constructed." << std::endl;
}

int32_t	FixedPointNbr::DoubleTo32(double nbr) {
	setRawBits(nbr * double(1 <<  n_bits) + (nbr >= 0 ? 0.5 : -0.5));
	return(nbr * double(1 <<  n_bits) + (nbr >= 0 ? 0.5 : -0.5));
}

double	FixedPointNbr::FixedValue() {
	return (double(value) / double(1<< n_bits));
}

int		FixedPointNbr::getRawBits(void) const {
	return(value);
}

void	FixedPointNbr::setRawBits(int const raw){
	value = raw;
}

float	FixedPointNbr::toFloat(void) const{
	return(float(value) / float(1<< n_bits));
}

int		FixedPointNbr::toInt(void) const{
	return(roundf(value_double));
}