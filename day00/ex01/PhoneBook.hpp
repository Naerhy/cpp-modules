#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contacts[8];
	int _nbContacts;
	void pushContact(void);

public:
	PhoneBook(void);
	int add(void);
	void search(void) const;
	Contact const &getContact(int index) const;
};

#endif
