#include "Fixed.hpp"

Fixed	&Fixed::operator = (const Fixed& old) {
	value = old.value;
	value_f = old.value_f;
	std::cout << "Copy assignement operator activated." << std::endl;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(this->value * toFloat());
	this->value++;
	return (tmp);
	}

Fixed	&Fixed::operator++() {
	this->value += 1;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(this->value * toFloat());
	this->value--;
	return (tmp);
}

Fixed	&Fixed::operator--() {
	this->value -= 1;
	return (*this);
}

Fixed	Fixed::operator + (Fixed const &obj) {
	return (this->value + obj.value);
}

Fixed	Fixed::operator - (Fixed const &obj) {
	return (this->value - obj.value);
}

Fixed	Fixed::operator * (Fixed const &obj) {
	float mult = this->value * obj.value;
	return mult;
}

Fixed	Fixed::operator / (Fixed const &obj) {
	float div = this->value / obj.value;
	return div;
	}

bool	Fixed::operator < (Fixed const &obj) const {
	if (this->value < obj.value){
		return true;
	}
	else {
		return false;
	}
}

bool	Fixed::operator <= (Fixed const &obj) const
	{
		if (this->value <= obj.value){
			return true;
		}
		else {
			return false;
		}
	}

bool	Fixed::operator > (Fixed const &obj) const {
	if (this->value > obj.value){
		return true;
	}
	else {
		return false;
	}
}

bool	Fixed::operator >= (Fixed const &obj) const {
	if (this->value >= obj.value) {
		return true;
	}
	else {
		return false;
	}
}

bool	Fixed::operator == (Fixed const &obj) const {
	if (this->value == obj.value) {
		return true;
	}
	else {
		return false;
	}
}

bool	Fixed::operator != (Fixed const &obj) const {
	if (this->value != obj.value) {
		return true;
	}
	else {
		return false;
	}
}

