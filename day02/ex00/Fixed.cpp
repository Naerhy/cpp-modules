#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _fixedNb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy) // try direct initialization ?
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &copy) // useless to copy if values already the same
		_fixedNb = copy._fixedNb;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBitsmember function called" << std::endl;
	return _fixedNb;
}

void Fixed::setRawBits(int const raw)
{
	_fixedNb = raw;
}
