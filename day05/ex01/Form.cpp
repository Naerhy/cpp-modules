#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const &name, int gradeToSign, int gradeToExec)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign),
	_gradeToExec(gradeToExec)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException("grade too low");
	if (gradeToSign < 0 || gradeToExec < 0)
		throw GradeTooHighException("grade too high");
}

Form::Form(Form const &copy)
	: _name(copy._name), _isSigned(copy._isSigned),
	_gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec) {}

Form::~Form(void) {}

std::string const &Form::getName(void) const { return _name; }

bool Form::getIsSigned(void) const { return _isSigned; }

int Form::getGradeToSign(void) const { return _gradeToSign; }

int Form::getGradeToExec(void) const { return _gradeToExec; }

void Form::beSigned(Bureaucrat const &signer)
{
	if (signer.getGrade() > getGradeToSign())
		throw GradeTooLowException("grade too low");
	_isSigned = true;
}

Form::GradeTooHighException::GradeTooHighException(std::string const &message)
	: _message(message) {}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return _message.c_str();
}

Form::GradeTooLowException::GradeTooLowException(std::string const &message)
	: _message(message) {}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return _message.c_str();
}

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
	out << "name: " << obj.getName() << " - isSigned: "
		<< obj.getIsSigned() << " - gradeToSign: " << obj.getGradeToSign()
		<< " - gradeToExec: " << obj.getGradeToExec();
	return out;
}
