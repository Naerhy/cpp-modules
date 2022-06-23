#include "Contact.hpp"

void Contact::setValues(std::string const& fName, std::string const& lName,
		std::string const& nickname, std::string const& phoneNb, std::string const& secret)
{
	_fName = fName;
	_lName = lName;
	_nickname = nickname;
	_phoneNb = phoneNb;
	_secret = secret;
}

std::string const& Contact::getFirstName(void) const { return _fName; }

std::string const& Contact::getLastName(void) const { return _lName; }

std::string const& Contact::getNickname(void) const { return _nickname; }

std::string const& Contact::getPhoneNumber(void) const { return _phoneNb; }

std::string const& Contact::getDarkestSecret(void) const { return _secret; }
