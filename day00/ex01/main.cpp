#include <string>
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string userCommand;

	std::cout << "Input: ADD | SEARCH | EXIT" << std::endl;
	while (1)
	{
		// getline(std::cin, userCommand);
		std::cin >> userCommand;
		if (userCommand == "ADD")
		{
			if (!phonebook.add())
				return 1;
		}
		else if (userCommand == "SEARCH")
			phonebook.search();
		else if (userCommand == "EXIT")
			break;
		else
			std::cout << "Invalid command, try again" << std::endl;
	}
	return 0;
}
