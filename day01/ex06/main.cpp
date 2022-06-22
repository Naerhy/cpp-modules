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
			harl.complain("DEBUG");
			index++;
			/* fall through */
		case 1:
			harl.complain("INFO");
			index++;
			/* fall through */
		case 2:
			harl.complain("WARNING");
			index++;
			/* fall through */
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << " [ Probably complaining about insignificant "
				<< "problems ]" << std::endl;
			break;
	}
	return (0);
}
