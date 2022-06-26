#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _fixedNb(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(Fixed const& copy) : _fixedNb(copy.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void) { std::cout << "Destructor called" << std::endl; }

Fixed& Fixed::operator=(Fixed const& copy)
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
