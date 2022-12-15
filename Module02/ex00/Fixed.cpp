
#include "Fixed.hpp"

double	FixedPointNbr::FixedNbr() {
	return (double(value) / double(1<< n_bits));
}

int		FixedPointNbr::getRawBits(void) const {
	return(value);
}

void	FixedPointNbr::setRawBits(int const raw){
	value = raw;
}