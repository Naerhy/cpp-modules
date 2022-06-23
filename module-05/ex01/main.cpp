#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat A("Quentin", 129);
		Form B("random name", 100, 90);
		A.signForm(B);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
