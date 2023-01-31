
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
	Fixed(const Fixed &obj);

	// Copy Assignment operator
	Fixed &operator = (const Fixed& old);

	//Destructor
	~Fixed();

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