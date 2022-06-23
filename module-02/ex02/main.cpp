#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << std::endl;

	Fixed e(34.0f);
	std::cout << "Object Fixed e initialized with 34.0f" << std::endl;
	std::cout << "int value = " << e.toInt() << " | float value = " << e.toFloat() << std::endl;

	std::cout << std::endl;

	std::cout << "Comparison operators" << std::endl;
	std::cout << "e == a ? " << (e == a) << std::endl;
	std::cout << "e != a ? " << (e != a) << std::endl;
	std::cout << "e < a ? " << (e < a) << std::endl;
	std::cout << "e > a ? " << (e > a) << std::endl;
	std::cout << "e <= a ? " << (e <= a) << std::endl;
	std::cout << "e >= a ? " << (e >= a) << std::endl;

	std::cout << std::endl;

	std::cout << "Arithmetic operators" << std::endl;
	std::cout << "e = " << e << " | b = " << b << std::endl;
	std::cout << "e + b = " << (e + b) << std::endl;
	std::cout << "e - b = " << (e - b) << std::endl;
	std::cout << "e * b = " << (e * b) << std::endl;
	std::cout << "e / b = " << (e / b) << std::endl;

	std::cout << std::endl;

	std::cout << "Increment and decrement operators" << std::endl;
	std::cout << "e = " << e << std::endl;
	e++;
	std::cout << "e = " << e << std::endl;
	++e;
	std::cout << "e = " << e << std::endl;
	e--;
	std::cout << "e = " << e << std::endl;
	--e;
	std::cout << "e = " << e << std::endl;

	std::cout << std::endl;

	std::cout << "non-const min/max" << std::endl;
	std::cout << "min(e, a) = " << Fixed::min(e, a) << std::endl;
	std::cout << "max(e, a) = " << Fixed::max(e, a) << std::endl;

	std::cout << std::endl;

	std::cout << "const min/max" << std::endl;
	std::cout << "const min(b, c) = " << Fixed::min(b, c) << std::endl;
	std::cout << "const min(b, c) = " << Fixed::min(b, c) << std::endl;

	std::cout << std::endl;

	return 0;
}
