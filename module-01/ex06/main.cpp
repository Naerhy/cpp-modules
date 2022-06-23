#include "Harl.hpp"

int getIndex(std::string const& level)
{
	if (level == "DEBUG")
		return (0);
	else if (level == "INFO")
		return (1);
	else if (level == "WARNING")
		return (2);
	else if (level == "ERROR")
		return (3);
	else
		return (4);
}

int main(int argc, char** argv)
{
	Harl harl;
	int index;
	
	if (argc != 2)
		return 1;
	index = getIndex(argv[1]);
	switch (index)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			std::cout << std::endl;
			index++;
			/* fall through */
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			std::cout << std::endl;
			index++;
			/* fall through */
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
			index++;
			/* fall through */
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << " [ Probably complaining about insignificant "
				<< "problems ]" << std::endl;
			break;
	}
	return (0);
}
