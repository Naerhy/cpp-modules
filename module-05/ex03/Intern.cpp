#include "Intern.hpp"

Form* Intern::_makeRobotomyRequestForm(std::string const& target)
{
	return new RobotomyRequestForm(target);
}

Form* Intern::_makePresidentialPardonForm(std::string const& target)
{
	return new PresidentialPardonForm(target);
}

Form* Intern::_makeShrubberyCreationForm(std::string const& target)
{
	return new ShrubberyCreationForm(target);
}

Intern::Intern(void)
{
	_fnct[0] = &Intern::_makeRobotomyRequestForm;
	_fnct[1] = &Intern::_makePresidentialPardonForm;
	_fnct[2] = &Intern::_makeShrubberyCreationForm;

	_forms[0] = "robotomy request";
	_forms[1] = "presidential pardon";
	_forms[2] = "shrubbery creation";
}

Intern::~Intern(void) {}

Form* Intern::makeForm(std::string const& formName, std::string const& formTarget)
{
	for (int i = 0; i < 3; i++)
	{
		if (_forms[i] == formName)
		{
			std::cout << "Intern creates a " << _forms[i] << " form" << std::endl;
			return (this->*_fnct[i])(formTarget);
		}
	}
	std::cout << "This type of form does not exist" << std::endl;
	return NULL;
}
