#ifndef __ROBOTOMY_REQUEST_FORM_HPP__
#define __ROBOTOMY_REQUEST_FORM_HPP__

#include <iostream>
#include <string>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
	RobotomyRequestForm &operator=(RobotomyRequestForm const &copy);
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	~RobotomyRequestForm(void);

	void executeConcreteForm(void) const;
};

#endif
