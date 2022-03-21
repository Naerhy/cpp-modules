#include "Phonebook.hpp"

void Phonebook::pushArray(void)
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

Phonebook::Phonebook(void) : _nbContacts(0) {};

int Phonebook::add(void)
{
	std::string values[5];

	std::cout << "Enter requested values 1 by 1:" << std::endl;
	getline(std::cin, values[0]);
	getline(std::cin, values[1]);
	getline(std::cin, values[2]);
	getline(std::cin, values[3]);
	getline(std::cin, values[4]);
	if (values[0].empty() || values[1].empty() || values[2].empty()
			|| values[3].empty() || values[4].empty())
	{
		std::cout << "A contact can't have empty values" << std::endl;
		return 0;
	}
	if (_nbContacts == 8)
		pushArray();
	_contacts[_nbContacts].setValues(values);
	_nbContacts++;
	return 1;
}

void Phonebook::search(void) const
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
	std::cout << "Enter a valid ID to get full information:" << std::endl;
	std::cin >> index;
	if (index < 0 || index >= _nbContacts)
		std::cout << "Invalid ID" << std::endl;
	else
		std::cout << _contacts[index].getFirstName() << std::endl
			<< _contacts[index].getLastName() << std::endl
			<< _contacts[index].getNickname() << std::endl
			<< _contacts[index].getPhoneNumber() << std::endl
			<< _contacts[index].getDarkestSecret() << std::endl;
}

Contact const &Phonebook::getContact(int index) const
{
	return _contacts[index];
}
