#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "grade too high";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "grade too low";
}

Bureaucrat::Bureaucrat(std::string const& name, int grade)
	: _name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy)
	: _name(copy._name), _grade(copy._grade) {}

Bureaucrat::~Bureaucrat(void) {}

std::string const& Bureaucrat::getName(void) const { return _name; }

int Bureaucrat::getGrade(void) const { return _grade; }

void Bureaucrat::promote(void)
{
	if (_grade == 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::demote(void)
{
	if (_grade == 150)
		throw GradeTooLowException();
	else
		_grade++;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const& obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return out;
}
