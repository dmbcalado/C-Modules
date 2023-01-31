#include "Fixed.hpp"

Fixed	&Fixed::operator = (const Fixed& old) {
	value = old.value;
	value_f = old.value_f;
	std::cout << "Copy assignement operator activated." << std::endl;
	return *this;
}

Fixed	&Fixed::operator++(int) {		// a++
	this->value++;
	this->flag = 1;
	return (*this);
	}

Fixed	&Fixed::operator++() {			// ++a
	this->value++;
	return (*this);
}

Fixed	&Fixed::operator--(int) {		// a--
	this->value--;
	this->flag = -1;
	return (*this);
}

Fixed	&Fixed::operator--() {			// --a
	this->value -= 1;
	return (*this);
}

float	Fixed::operator + (Fixed const &obj) {
	return (this->toFloat() + obj.toFloat());
}

float	Fixed::operator - (Fixed const &obj) {
	return (this->toFloat() - obj.toFloat());
}

float	Fixed::operator * (Fixed const &obj) {
	return (this->toFloat() * obj.toFloat());
}

float	Fixed::operator / (Fixed const &obj) {
	return (this->toFloat() / obj.toFloat());
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

