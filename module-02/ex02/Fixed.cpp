#include "Fixed.hpp"
#include <cmath>

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _fixedNb(0) {}

Fixed::Fixed(int const nb) : _fixedNb(nb << _fractionalBits) {}

Fixed::Fixed(float const nb) : _fixedNb((int)roundf(nb * (1 << _fractionalBits))) {}

Fixed::Fixed(Fixed const& copy) : _fixedNb(copy.getRawBits()) {}

Fixed::~Fixed(void) {}

Fixed& Fixed::operator=(Fixed const& copy)
{
	if (this != &copy)
		_fixedNb = copy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const { return _fixedNb; }

void Fixed::setRawBits(int const raw) { _fixedNb = raw; }

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

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	_fixedNb += 1;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	_fixedNb -= 1;
	return temp;
}

Fixed& Fixed::min(Fixed& x, Fixed& y)
{
	if (x < y)
		return x;
	return y;
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
