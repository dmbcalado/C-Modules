
#ifndef FIXED_HPP
# define FIXED_HPP

# include <fstream>
# include <iostream>
# include <string>
# include <cstring>
# include <bits/stdc++.h>

class Fixed {

public:

	// Default Constructor
	Fixed();

	// Copy Constructor
	Fixed(const Fixed &obj) {
		value = obj.value;
		std::cout << "Copy Constructor activated." << std::endl;
	}

	// Copy Assignment operator
	Fixed &operator = (const Fixed& old) {
		value = old.value;
		std::cout << "Copy assignement operator activated." << std::endl;
		return *this;
	}

	//Destructor
	~Fixed() {
		std::cout << "Class destructed." << std::endl;
	}

	//Fixing Double to 32 bits int, where 16 are for decimal.
	void	DoubleTo32(double nbr);
	double	FixedNbr();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int	value;
	static const int n_bits = 8;
} ;


#endif