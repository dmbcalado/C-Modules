
# include "Fixed.hpp"

/*	{MISSING}:
-> An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter.
-> Test all.
*/

int	main(void)
{
	FixedPointNbr a;
	FixedPointNbr b( a );
	FixedPointNbr c;

	a.DoubleTo32(2);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	//std::cout << c.getRawBits() << std::endl;

	a.DoubleTo32(0.0);
	b.DoubleTo32(6.2);

	c = b;
	std::cout << "	Raw Value: " << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "	Fixed point value: " << std::endl;
	std::cout << a.FixedValue() << std::endl;
	std::cout << b.FixedValue() << std::endl;
	std::cout << c.FixedValue() << std::endl;
}