#include "PhoneBook.hpp"

void PhoneBook::pushContact(void)
{
	int i;

	i = 1;
	while (i < 8)
	{
		_contacts[i - 1] = _contacts[i];
		i++;
	}
	_nbContacts--;
}

PhoneBook::PhoneBook(void) : _contacts(), _nbContacts(0) {};

void PhoneBook::add(void)
{
	std::string values[5];
	std::string contactInfo[5] = {"first name", "last name", "nickname", "phone number",
		"darkest secret"};

	std::cout << "Enter values 1 by 1: " << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << contactInfo[i] << ": ";
		getline(std::cin, values[i]);
		if (values[i].empty())
		{
			std::cout << "A contact cannot have empty values!" << std::endl;
			return;
		}
	}
	if (_nbContacts == 8)
		pushContact();
	_contacts[_nbContacts].setValues(values[0], values[1], values[2], values[3], values[4]);
	_nbContacts++;
	std::cout << "Contact succesfully added!" << std::endl;
}

void PhoneBook::search(void) const
{
	std::string temp;
	int index;
	int i;

	i = 0;
	while (i < _nbContacts)
	{
		std::cout << std::setw(10) << i;
		std::cout << " | ";
		if (_contacts[i].getFirstName().size() > 10)
		{
			temp = _contacts[i].getFirstName();
			temp.resize(9);
			std::cout << temp << ".";
		}
		else
			std::cout << std::setw(10) << _contacts[i].getFirstName();
		std::cout << " | ";
		if (_contacts[i].getLastName().size() > 10)
		{
			temp = _contacts[i].getLastName();
			temp.resize(9);
			std::cout << temp << ".";
		}
		else
			std::cout << std::setw(10) << _contacts[i].getLastName();
		std::cout << " | ";
		if (_contacts[i].getNickname().size() > 10)
		{
			temp = _contacts[i].getNickname();
			temp.resize(9);
			std::cout << temp << ".";
		}
		else
			std::cout << std::setw(10) << _contacts[i].getNickname();
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter a valid ID to get full information: ";
	if (!(std::cin >> index) || index < 0 || index >= _nbContacts)
	{
		std::cout << "Invalid ID!" << std::endl;
	}
	else
	{
		std::cout << "first name: " << _contacts[index].getFirstName() << std::endl;
		std::cout << "last name: " << _contacts[index].getLastName() << std::endl;
		std::cout << "nickname: " << _contacts[index].getNickname() << std::endl;
		std::cout << "phone number: " << _contacts[index].getPhoneNumber() << std::endl;
		std::cout << "darkest secret: " << _contacts[index].getDarkestSecret() << std::endl;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

Contact const& PhoneBook::getContact(int index) const
{
	return _contacts[index];
}
