#include "Contact.hpp"

void Contact::setValues(std::string const (&values)[5])
{
	_firstName = values[0];
	_lastName = values[1];
	_nickname = values[2];
	_phoneNumber = values[3];
	_darkestSecret = values[4];
}

std::string const &Contact::getFirstName(void) const
{
	return _firstName;
}

std::string const &Contact::getLastName(void) const
{
	return _lastName;
}

std::string const &Contact::getNickname(void) const
{
 return _nickname;
}

std::string const &Contact::getPhoneNumber(void) const
{
	return _phoneNumber;
}

std::string const &Contact::getDarkestSecret(void) const
{
	return _darkestSecret;
}
