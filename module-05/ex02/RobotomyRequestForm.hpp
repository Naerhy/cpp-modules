#ifndef __ROBOTOMY_REQUEST_FORM_HPP__
#define __ROBOTOMY_REQUEST_FORM_HPP__

#include <cstdlib>
#include <time.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string const _target;

		RobotomyRequestForm& operator=(RobotomyRequestForm const& assign);

	public:
		RobotomyRequestForm(std::string const& target);
		RobotomyRequestForm(RobotomyRequestForm const& copy);
		virtual ~RobotomyRequestForm(void);

		std::string const& getTarget(void) const;

		virtual void executeDerived(void) const;
};

#endif
