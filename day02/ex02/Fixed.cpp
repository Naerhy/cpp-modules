#include "Fixed.hpp"
#include <cmath>

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _fixedNb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nb) : _fixedNb(nb << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const nb) : _fixedNb((int)roundf(nb * (1 << _fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& copy) : _fixedNb(copy.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		_fixedNb = copy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedNb;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixedNb = raw;
}

float Fixed::toFloat(void) const { return (float)_fixedNb / (1 << _fractionalBits); }

int Fixed::toInt(void) const { return _fixedNb >> _fractionalBits; }

bool Fixed::operator==(Fixed const& x) const { return _fixedNb == x._fixedNb; }
bool Fixed::operator!=(Fixed const& x) const { return _fixedNb != x._fixedNb; }
bool Fixed::operator<(Fixed const& x) const { return _fixedNb < x._fixedNb; }
bool Fixed::operator>(Fixed const& x) const { return _fixedNb > x._fixedNb; }
bool Fixed::operator<=(Fixed const& x) const { return _fixedNb <= x._fixedNb; }
bool Fixed::operator>=(Fixed const& x) const { return _fixedNb >= x._fixedNb; }

Fixed Fixed::operator+(Fixed const& x) const { return Fixed(toFloat() + x.toFloat()); }

Fixed Fixed::operator-(Fixed const& x) const { return Fixed(toFloat() - x.toFloat()); }

Fixed Fixed::operator*(Fixed const& x) const { return Fixed(toFloat() * x.toFloat()); }

Fixed Fixed::operator/(Fixed const& x) const { return Fixed(toFloat() / x.toFloat()); }

Fixed& Fixed::operator++(void)
{
	_fixedNb += 1;
	return *this;
}

Fixed& Fixed::operator--(void)
{
	_fixedNb -= 1;
	return *this;
}

Fixed operator++(int)
{
	Fixed temp = *this;
	_fixedNb += 1;
	return temp;
}

Fixed& Fixed::min(Fixed& x, Fixed& y)
{
	if (x < y)
		return x;
	return y;
}

Fixed operator--(int)
{
	Fixed temp = *this;
	_fixedNb -= 1;
	return temp;
}

Fixed const& Fixed::min(Fixed const& x, Fixed const& y)
{
	if (x < y)
		return x;
	return y;
}

Fixed& Fixed::max(Fixed& x, Fixed& y)
{
	if (x < y)
		return y;
	return x;
}

Fixed const& Fixed::max(Fixed const& x, Fixed const& y)
{
	if (x < y)
		return y;
	return x;
}

std::ostream& operator<<(std::ostream& out, Fixed const& fixed)
{
	out << fixed.toFloat();
	return out;
}
