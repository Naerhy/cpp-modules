#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <string>

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

public:
	void setValues(std::string const values[5]);
	std::string const &getFirstName(void) const;
	std::string const &getLastName(void) const;
	std::string const &getNickname(void) const;
	std::string const &getPhoneNumber(void) const;
	std::string const &getDarkestSecret(void) const;
};

#endif