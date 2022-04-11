#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Form *Intern::makeForm(std::string const &formName,
		std::string const &targetForm)
{
	Form *(Intern::*fnct[3])(std::string const &);
	fnct[0] = &Intern::newPresidentialPardonForm;
	fnct[1] = &Intern::newRobotomyRequestForm;
	fnct[2] = &Intern::newShrubberyCreationForm;

	std::string functions[3];
	functions[0] = "PresidentialPardonForm";
	functions[1] = "RobotomyRequestForm";
	functions[2] = "ShrubberyCreationForm";

	for (int i = 0; i < 3; i++)
	{
		if (formName == functions[i])
		{
			std::cout << "Intern creates " << functions[i] << std::endl;
			return (this->*fnct[1])(targetForm);
		}
	}
	std::cout << "No form exists with this name..." << std::endl;
	return NULL;
}

Form *Intern::newPresidentialPardonForm(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::newRobotomyRequestForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::newShrubberyCreationForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}
