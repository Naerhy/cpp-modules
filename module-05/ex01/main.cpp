#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat A("Quentin", 12);
		std::cout << A << std::endl;

		Form F1("F1", 50, 30);
		std::cout << F1 << std::endl;

		A.signForm(F1);
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat B("Antoine", 100);
		std::cout << B << std::endl;

		Form F2("F2", 153, 30);
		std::cout << F2 << std::endl;

		B.signForm(F2);
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat C("Emilie", 10);
		std::cout << C << std::endl;

		Form F3("F3", 5, 3);
		std::cout << F3 << std::endl;

		C.signForm(F3);
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
