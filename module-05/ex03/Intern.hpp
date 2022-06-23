#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include <iostream>
#include <string>

#include "Form.hpp"

class Intern
{
private:
	Intern(Intern const &copy);
	Intern &operator=(Intern const &copy);

public:
	Intern(void);
	~Intern(void);

	Form *makeForm(std::string const &formName,
			std::string const &targetForm);

	Form *newPresidentialPardonForm(std::string const &target);
	Form *newRobotomyRequestForm(std::string const &target);
	Form *newShrubberyCreationForm(std::string const &target);
};

#endif
