
# include "Fixed.hpp"

int	main(void)
{
	std::cout << std::endl;

	Fixed a;
	a.DoubleTo32(1);

	Fixed b(a);
	Fixed c;

	std::cout << "a: " << a.getRawBits() << std::endl;
	std::cout << "b: " << b.getRawBits() << std::endl;

	a.DoubleTo32(0.00390625);			//	1 / 256
	b.DoubleTo32(0.1);				
	std::cout << "\na changed to 0.00390625\n" << std::endl;
	std::cout << "a: " << a.getRawBits() << std::endl;
	std::cout << "b: " << b.getRawBits() << std::endl;
	std::cout << std::endl;

	Fixed d;
	d.DoubleTo32(5.73435546565345);
	b.DoubleTo32(6.2454657573253423);

	c = b;

	std::cout << (1 << 8) << std::endl;
	std::cout << "	Raw Values: " << std::endl;
	std::cout << "a: " << a.getRawBits() << std::endl;
	std::cout << "b: " << b.getRawBits() << std::endl;
	std::cout << "c: " << c.getRawBits() << std::endl;
	std::cout << "\n	Fixed point values: " << std::endl;
	std::cout << "a: " << a.FixedNbr() << std::endl;
	std::cout << "b: " << b.FixedNbr() << std::endl;
	std::cout << "c: " << c.FixedNbr() << std::endl;
	std::cout << "\n	Float Values: " << std::endl;
	std::cout <<  float(0.00390625) << std::endl;
	std::cout << float(6.2454657573253423) << std::endl;
	std::cout << float(6.2454657573253423) << std::endl;
}