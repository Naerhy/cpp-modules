#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade)
	: _name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
	: _name(copy._name), _grade(copy._grade) {}

Bureaucrat::~Bureaucrat(void) {}

std::string const &Bureaucrat::getName(void) const { return _name; }

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

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "grade too high";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "grade too low";
}

void Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't sign " << form.getName()
			<< " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << "couldn't execute " << form.getName()
			<< "because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return out;
}
