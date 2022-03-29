#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade)
	: _name(name), _grade(grade)
{
	std::cout << "[Bureaucrat] Constructor" << std::endl;
	if (grade > 150)
		throw GradeTooLowException("grade too low");
	if (grade < 0)
		throw GradeTooHighException("grade too high");
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	std::cout << "[Bureaucrat] Copy destructor" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "[Bureaucrat] Destructor" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	std::cout << "[Bureaucrat] Copy assignement operator" << std::endl;
	if (this != &copy)
	{
		_grade = copy._grade;
	}
	return *this;
}

std::string const &Bureaucrat::getName(void) const { return _name; }

int Bureaucrat::getGrade(void) const { return _grade; }

void Bureaucrat::promote(void)
{
	if (_grade == 1)
		throw GradeTooHighException("grade too high");
	else
		_grade--;
}

void Bureaucrat::demote(void)
{
	if (_grade == 150)
		throw GradeTooLowException("grade too low");
	else
		_grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string const &message)
	: _message(message) {}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return _message.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string const &message)
	: _message(message) {}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return _message.c_str();
}

void Bureaucrat::signForm(Form &form)
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

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return out;
}
