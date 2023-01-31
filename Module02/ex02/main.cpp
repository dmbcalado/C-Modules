
# include "Fixed.hpp"

std::ostream & operator << (std::ostream &out, Fixed &fixed)
{
	if (fixed.flag == 0) {
		out << fixed.toFloat();
	}
	else if (fixed.flag == 1) {
		--fixed;
		out << fixed.toFloat();
		fixed.flag = 0;
		++fixed;
	}
	else if (fixed.flag == -1) {
		++fixed;
		out << fixed.toFloat();
		fixed.flag = 0;
		--fixed;
	}
	return out;
}


std::ostream & operator << (std::ostream &out, const Fixed &fixed)
{
		out << fixed.toFloat();
	return out;
}

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const c(Fixed(1) / Fixed(256));
	Fixed d(23.54544f);
	Fixed e(d);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << std::endl;
	std::cout << c << std::endl;
	std::cout << "\nTests to + / - / '/' / *" << std::endl;
	std::cout << "a + b :" << d + b << std::endl;
	std::cout << "a - b :" << d - b << std::endl;
	std::cout << "a * b :" << d * b << std::endl;
	std::cout << "a / b :" << d / b << std::endl;

	std::cout << "\nTests to < / > / <= / >= / == / !=" << std::endl;
	
	if (b < d) {
		std::cout <<  "b is smaller then d." << std::endl;
	}
	if (b <= d) {
		std::cout <<  "b is smaller or equal to d." << std::endl;
	}
	if (d > b) {
		std::cout <<  "d is bigger then b." << std::endl;
	}
	if (b >= d) {
		std::cout << "something is not right." << std::endl;
	}
	if (e == d) {
		std::cout << "e is equal to d." << std::endl;
	}
	if (e != d) {
		std::cout << "something is not right." << std::endl;
	}

	return 0;
}