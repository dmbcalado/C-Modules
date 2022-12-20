
# include "Fixed.hpp"

std::ostream &operator<<(std::ostream &op, const Fixed &original)
{
	op << original.toFloat();
	return (op);
}

int	main(void)
{
	std::cout <<  0.12312442f << std::endl;
	Fixed const a( 1234.4321f );
	Fixed const b( 10 );
	Fixed c( 0.12312442f );
	Fixed d( a );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	if (a > b) {
		std::cout << "true" << std::endl;
	}
	if (b <= a) {
		std::cout << "true" << std::endl;
	}
	if (b == d) {
		std::cout << "true" << std::endl;
	}
	if (b != d) {
		std::cout << "true" << std::endl;
	}
	else {
		std::cout << "false" << std::endl;
	}
	Fixed ba(0);
	Fixed mult = c * d;
	Fixed div = c / d;
	Fixed sum = c + d;

	std::cout << ++ba << std::endl;
	//std::cout << mult << std::endl;
	//std::cout << div << std::endl;
	//std::cout << sum << std::endl;
	//std::cout << sum - a << std::endl;
	return 0;
}