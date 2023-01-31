
#define FIXED_HPP

#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>

class Fixed {

public:

	// Constructors :
	Fixed();
	Fixed(const float nbr);
	Fixed(int nbr);

	// Copy Constructor :
	Fixed(const Fixed &obj);

	//Destructor :
	~Fixed() {
		std::cout << "Class destructed." << std::endl;
	}

	// Copy Assignment operator :
	Fixed &operator = (const Fixed& old);

	//Member functions :
	//Bit operations :
	int getRawBits(void) const;
	void setRawBits(int const raw);

	//Fixing the float :
	int		DoubleTo32(double nbr);
	double	FixedValue();

	// Converting fixed-point to float/int :
	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int			value;
	float		value_f;
	static const int n_bits = 8;
} ;
