
#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <fstream>
# include <iostream>
# include <string>
# include <cstring>
# include <bits/stdc++.h>

class FixedPointNbr {

public:

	// Constructors :
	FixedPointNbr();
	FixedPointNbr(const float nbr);
	FixedPointNbr(const double nbr);

	// Copy Constructor :
	FixedPointNbr(const FixedPointNbr &obj) {
		std::cout << "Copy constructor activated." << std::endl;
	}

	//Destructor :
	~FixedPointNbr() {
		std::cout << "Class destructed." << std::endl;
	}

	// Copy Assignment operator :
	FixedPointNbr &operator = (const FixedPointNbr& old) {
		value = old.value;
		std::cout << "Copy assignement operator activated." << std::endl;
		return *this;
	}

	//Member functions :
	//Bit operations :
	int getRawBits(void) const;
	void setRawBits(int const raw);

	//Fixing the float :
	int32_t	DoubleTo32(double nbr);
	double	FixedValue();

	// Converting fixed-point to double/int :
	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int			value;
	double		value_double;
	static const int n_bits = 8;
} ;


#endif