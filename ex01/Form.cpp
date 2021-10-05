#include "Form.hpp"

char const *Form::GradeTooHighException::what() const throw() { return massage.c_str(); }

char const *Form::GradeTooLowException::what() const throw() { return massage.c_str(); }

std::string const &Form::getName() const { return this->Name; }

bool Form::getIsSigned() const { return this->isSigned; }

int const &Form::getSignGrade() const { return this->signGrade; }

int const &Form::getExecGrade() const { return this->execGrade; }

void Form::beSigned( Bureaucrat const &bureaucrat ) throw(Form::GradeTooLowException) {
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw GradeTooLowException("bureaucrat's grade too low for singing");
	if (this->isSigned)
		return ;
	this->isSigned = true;
}

Form::Form() : Name("Default"), isSigned(false), signGrade(150), execGrade(150) {}

Form::Form(const std::string &name, bool isSigned, int toSign, int toExec) : Name(name), isSigned(isSigned), signGrade(toSign), execGrade(toExec) {
	if (toSign > 150)
		throw GradeTooLowException("Cannot create form " + name + ", because grade to sign too low!");
	else if (toSign < 1)
		throw GradeTooHighException("Cannot create form " + name + ", because grade to sign too high!");
	else if (toExec > 150)
		throw GradeTooLowException("Cannot create form " + name + ", because grade to execute too low!");
	else if (toExec < 1)
		throw GradeTooHighException("Cannot create form " + name + ", because grade to execute too high!");
}

Form::Form( Form const &other ) : Name(other.Name), isSigned(other.isSigned), signGrade(other.signGrade), execGrade(other.execGrade) {}

Form::~Form() {}

Form &Form::operator=( Form const &other ) {
	if (this == &other)
		return *this;
	this->isSigned = other.isSigned;
	return *this;
}

std::ostream &operator<<( std::ostream &out, Form const &form ) {
	out << "Form " << form.getName();
	if (form.getIsSigned())
		out << " is signed. ";
	else
		out << " is unsigned. ";
	out << "To sign the form need bureaucrat with " << form.getSignGrade() << " grade. ";
	out << "To execute the form need bureaucrat with " << form.getExecGrade() << " grade.";
	return out;
}
