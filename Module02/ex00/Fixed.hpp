
#ifndef FIXED_HPP
# define FIXED_HPP

# include <fstream>
# include <iostream>
# include <string>
# include <cstring>
# include <bits/stdc++.h>

class FixedPointNbr {

public:

	// Default Constructor
	FixedPointNbr() {
		value = 0;
		std::cout << "Class constructed." << std::endl;
	}

	// Copy Constructor
	FixedPointNbr(const FixedPointNbr &obj) {
		value = obj.value;
		std::cout << "Copy constructor activated." << std::endl;
	}

	// Copy Assignment operator
	FixedPointNbr &operator = (const FixedPointNbr& old) {
		value = old.value;
		std::cout << "Copy assignement operator activated." << std::endl;
		return *this;
	}

	//Destructor
	~FixedPointNbr() {
		std::cout << "Class destructed." << std::endl;
	}

	//Fixing Double to 32 bits int, where 16 are for decimal.
	int32_t	DoubleTo32(double nbr);
	double	FixedNbr();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int	value;
	static const int n_bits = 8;
} ;


#endif