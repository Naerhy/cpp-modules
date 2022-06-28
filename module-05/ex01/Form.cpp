#include "Form.hpp"

const char* Form::GradeTooHighException::what(void) const throw()
{
	return "grade too high";
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return "grade too low";
}

Form::Form(std::string const& name, int gradeToSign, int gradeToExec)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
}

Form::Form(Form const& copy)
	: _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign),
	_gradeToExec(copy._gradeToExec) {}

Form::~Form(void) {}

std::string const& Form::getName(void) const { return _name; }

bool Form::isSigned(void) const { return _isSigned; }

int Form::getGradeToSign(void) const { return _gradeToSign; }

int Form::getGradeToExec(void) const { return _gradeToExec; }

void Form::beSigned(Bureaucrat const& bc)
{
	if (bc.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

std::ostream& operator<<(std::ostream& out, Form const& obj)
{
	out << "name = " << obj.getName() << " | isSigned = " << obj.isSigned() << " | gradeToSign = "
		<< obj.getGradeToSign() << " | gradeToExec = " << obj.getGradeToExec();
	return out;
}
