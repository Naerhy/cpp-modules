#include "Bureaucrat.hpp"

std::string const &Bureaucrat::getName(void) const { return _name; }

int Bureaucreat::getGrade(void) const { return _grade; }

void Bureaucrat::promote(void)
{
	if (_grade == 1)
		// throw exception
	else
		_grade--;
}

void Bureaucrat::demote(void)
{
	if (_grade == 150)
		// throw exception
	else
		_grade++;
}

std::ostream &operator<<(std::osteram &out, Bureaucrat const &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return out;
}
