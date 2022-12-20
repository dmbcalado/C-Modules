
# define FIXED_HPP

# include <cmath>
# include <fstream>
# include <iostream>
# include <string>
# include <cstring>
# include <bits/stdc++.h>


class Fixed {

public:

	// Constructors :
	Fixed();
	Fixed(const float nbr);
	Fixed(int nbr);

	// Copy Constructor :
	Fixed(const Fixed &obj) {
		value = obj.value;
		value_f = obj.value_f;
		std::cout << "Copy constructor activated." << std::endl;
	}

	//Destructor :
	~Fixed() {}

	// Copy Assignment operator :
	Fixed &operator = (const Fixed& old);

	//Member functions :
	//Bit operations :
	int getRawBits(void) const;
	void setRawBits(int const raw);

	//Fixing the float :
	// Converting fixed-point to float/int :
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	Fixed	operator - (Fixed const &obj);
	Fixed	operator + (Fixed const &obj);
	Fixed	operator * (Fixed const &obj);
	Fixed	operator / (Fixed const &obj);

	bool	operator < (Fixed const &obj) const;
	bool	operator > (Fixed const &obj) const;
	bool	operator <= (Fixed const &obj) const;
	bool	operator >= (Fixed const &obj) const;
	bool	operator == (Fixed const &obj) const;
	bool	operator != (Fixed const &obj) const;

	Fixed	min(Fixed &a, Fixed &b);
	Fixed	max(Fixed &a, Fixed &b);
	Fixed	min(const Fixed &a, const Fixed &b);
	Fixed	max(const Fixed &a, const Fixed &b);

private:
	int			value;
	float		value_f;
	static const int n_bits = 8;
} ;