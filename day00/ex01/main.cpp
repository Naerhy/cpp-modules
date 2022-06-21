#include <string>
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string userCommand;

	while (1)
	{
		std::cout << "\033[31mEnter a command (ADD | SEARCH | EXIT): \033[0m";
		getline(std::cin, userCommand);
		if (userCommand == "ADD")
			phonebook.add();
		else if (userCommand == "SEARCH")
			phonebook.search();
		else if (userCommand == "EXIT")
			break;
		else
			std::cout << "Invalid command, try again!" << std::endl;
	}
	return 0;
}
