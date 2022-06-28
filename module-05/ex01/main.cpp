#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat A("Quentin", 12);
		std::cout << A << std::endl;

		Form F1("F1", 50, 30);
		A.signForm(F1);

		std::cout << "Everything is alright!" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	Bureaucrat B("Antoine", 20);
	std::cout << B << std::endl;

	Form F2("F2", 2, 1);
	B.signForm(F2);

	return 0;
}
