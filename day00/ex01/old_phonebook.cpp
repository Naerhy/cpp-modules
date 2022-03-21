#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};

class PhoneBook
{
	public:
		Contact contacts[8];
		int nbContacts;

		PhoneBook(void)
		{
			nbContacts = 0;
		}
		
		void addContact(std::string values[5])
		{
			if (nbContacts == 8)
			{
				moveElementsArray();
				nbContacts--;
			}
			contacts[nbContacts].firstName = values[0];
			contacts[nbContacts].lastName = values[1];
			contacts[nbContacts].nickname = values[2];
			contacts[nbContacts].phoneNumber = values[3];
			contacts[nbContacts].darkestSecret = values[4];
			nbContacts++;
		}

		void moveElementsArray(void)
		{
			int i;

			i = 1;
			while (i < 8)
			{
				contacts[i - 1] = contacts[i];
				i++;
			}
		}
};

int main(void)
{
	PhoneBook phonebook;
	std::string userCommand;
	std::string values[5];
	int i;
	std::string temp;
	int index;

	std::cout << "Input one of these 3 commands: ADD | SEARCH | EXIT\n";
	while (1)
	{
		std::cin >> userCommand;
		if (userCommand == "ADD")
		{
			std::cin >> values[0];
			std::cin >> values[1];
			std::cin >> values[2];
			std::cin >> values[3];
			std::cin >> values[4];
			if (values[0].empty() || values[1].empty() || values[2].empty()
					|| values[3].empty() || values[4].empty())
			{
				std::cout << "A contact can't have empty values\n";
				return (1);
			}
			phonebook.addContact(values);
		}
		else if (userCommand == "SEARCH")
		{
			i = 0;
			while (i < phonebook.nbContacts)
			{
				std::cout << std::setw(10) << i;
				std::cout << " | ";
				if (phonebook.contacts[i].firstName.size() > 10)
				{
					temp = phonebook.contacts[i].firstName;
					temp.resize(9);
					std::cout << temp << ".";
				}
				else
					std::cout << std::setw(10) << phonebook.contacts[i].firstName;
				std::cout << " | ";
				std::cout << std::setw(10) << phonebook.contacts[i].lastName;
				std::cout << " | ";
				std::cout << std::setw(10) << phonebook.contacts[i].nickname;
				std::cout << "\n";
				i++;
			}
			std::cout << "Enter a valid ID to display:\n";
			std::cin >> index;
			if (index < 0 || index >= phonebook.nbContacts)
				std::cout << "Invalid ID\n";
			else
				std::cout << phonebook.contacts[index].firstName << "\n"
					<< phonebook.contacts[index].lastName << "\n"
					<< phonebook.contacts[index].nickname << "\n"
					<< phonebook.contacts[index].phoneNumber << "\n"
					<< phonebook.contacts[index].darkestSecret << "\n";
		}
		else if (userCommand == "EXIT")
			return (0);
		else
			std::cout << "Invalid command, try again\n";
	}
	return (0);
}
