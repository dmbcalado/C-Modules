
# include "Fixed.hpp"

int	main(void)
{
	FixedPointNbr a;
	a.DoubleTo32(2);

	FixedPointNbr b(a);
	a.DoubleTo32(4);

	std::cout << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;

	a.DoubleTo32(5.73);
	b.DoubleTo32(6.2);

	FixedPointNbr c;
	c = b;

	std::cout << std::endl;
	std::cout << "	Raw Value: " << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "	Fixed point value: " << std::endl;
	std::cout << a.FixedNbr() << std::endl;
	std::cout << b.FixedNbr() << std::endl;
	std::cout << c.FixedNbr() << std::endl;
}