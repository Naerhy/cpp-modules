#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include <iostream>
#include <string>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		Form* (Intern::*_fnct[3])(std::string const&);
		std::string _forms[3];

		Intern(Intern const& copy);
		Intern& operator=(Intern const& assign);

		Form* _makeRobotomyRequestForm(std::string const& target);
		Form* _makePresidentialPardonForm(std::string const& target);
		Form* _makeShrubberyCreationForm(std::string const& target);
	
	public:
		Intern(void);
		~Intern(void);

		Form* makeForm(std::string const& formName, std::string const& formTarget);
};

#endif
