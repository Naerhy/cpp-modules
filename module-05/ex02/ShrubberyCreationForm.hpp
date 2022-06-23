#ifndef __SHRUBBERY_REQUEST_FORM_HPP__
#define __SHRUBBERY_REQUEST_FORM_HPP__

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &copy);
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	~ShrubberyCreationForm(void);

	void executeConcreteForm(void) const;
};

#endif
