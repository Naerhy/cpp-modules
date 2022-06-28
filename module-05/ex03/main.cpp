#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat A("Quentin", 12);
		std::cout << A << std::endl;

		RobotomyRequestForm F1("Didier");
		A.signForm(F1);
		A.executeForm(F1);

		std::cout << "Everything is alright!" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat B("Antoine", 140);
		std::cout << B << std::endl;

		ShrubberyCreationForm F2("Wdjeuy");
		B.signForm(F2);
		B.executeForm(F2);

		std::cout << "Everything is alright!" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	Intern intern;
	Form* form = intern.makeForm("robotomy request", "Quentin");
	std::cout << form << std::endl;

	form = intern.makeForm("random", "Quentin");
	std::cout << form << std::endl;

	return 0;
}
