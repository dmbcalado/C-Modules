
#ifndef FIXED_HPP
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
	Fixed(const double nbr);
	Fixed(int nbr);

	// Copy Constructor :
	Fixed(const Fixed &obj) {
		value = obj.value;
		value_d = obj.value_d;
		std::cout << "Copy constructor activated." << std::endl;
	}

	//Destructor :
	~Fixed() {
		std::cout << "Class destructed." << std::endl;
	}

	// Copy Assignment operator :
	Fixed &operator = (const Fixed& old) {
		value = old.value;
		value_d = old.value_d;
		std::cout << "Copy assignement operator activated." << std::endl;
		return *this;
	}

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

	Fixed operator + (Fixed const &obj)
	{
		float next = std::nextafter(float(value_d), float(value_d + 1));
		value_d = next;
		return next;
	}

	Fixed operator - (Fixed const &obj)
	{
		float prev = std::nextafter(float(value_d), float(value_d - 1));
		value_d = prev;
		return prev;
	}

	Fixed operator * (Fixed const &obj)
	{
		float mult = value_d * obj.value_d;
		value_d = mult;
		return mult;
	}

	Fixed operator / (Fixed const &obj)
	{
		float div = value_d / obj.value_d;
		value_d = div;
		return div;
	}

	Fixed operator < (Fixed const &obj)
	{
		if (value_d < obj.value_d){
			return true;
		}
		else {
			return false;
		}
	}

	Fixed operator <= (Fixed const &obj)
	{
		if (value_d <= obj.value_d){
			return true;
		}
		else {
			return false;
	}
	}

	Fixed operator > (Fixed const &obj)
	{
		if (value_d > obj.value_d){
			return true;
		}
		else {
			return false;
		}
	}

	Fixed operator >= (Fixed const &obj)
	{
		if (value_d >= obj.value_d){
			return true;
		}
		else {
			return false;
		}
	}
private:
	int			value;
	double		value_d;
	static const int n_bits = 8;
} ;

#endif