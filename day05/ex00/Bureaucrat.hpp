#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;

public:
	// add canonical functions
	std::string const &getName(void) const;
	int getGrade(void) const;
	void promote(void);
	void demote(void);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj);

#endif
