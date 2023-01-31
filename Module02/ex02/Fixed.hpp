
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
	~Fixed(){}

	// Copy Assignment operator :
	Fixed &operator = (const Fixed& old);

	//Member functions :
	//Bit operations :
	int getRawBits(void) const;
	void setRawBits(int const raw);

	//Fixing the float :
	// Converting fixed-point to float/int :
	int		flag;
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	&operator++(int);
	Fixed	&operator--(int);

	float	operator - (Fixed const &obj);
	float	operator + (Fixed const &obj);
	float	operator * (Fixed const &obj);
	float	operator / (Fixed const &obj);

	bool	operator < (Fixed const &obj) const;
	bool	operator > (Fixed const &obj) const;
	bool	operator <= (Fixed const &obj) const;
	bool	operator >= (Fixed const &obj) const;
	bool	operator == (Fixed const &obj) const;
	bool	operator != (Fixed const &obj) const;

	static Fixed	&min(Fixed &a, Fixed &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);

private:
	int			value;
	float		value_f;
	static const int n_bits = 8;
} ;