#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <string>

class Contact
{
	private:
		std::string _fName;
		std::string _lName;
		std::string _nickname;
		std::string _phoneNb;
		std::string _secret;

	public:
		void setValues(std::string const& fName, std::string const& lName,
				std::string const& nickname, std::string const& phoneNb, std::string const& secret);
		std::string const& getFirstName(void) const;
		std::string const& getLastName(void) const;
		std::string const& getNickname(void) const;
		std::string const& getPhoneNumber(void) const;
		std::string const& getDarkestSecret(void) const;
};

#endif
