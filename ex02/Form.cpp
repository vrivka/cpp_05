#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw() {
	return massage.c_str();
}

const char *Form::GradeTooLowException::what() const throw() {
	return massage.c_str();
}

std::string const &Form::getName() const {
	return this->Name;
}

bool Form::getIsSigned() const {
	return this->isSigned;
}

int const &Form::getSignGrade() const {
	return this->signGrade;
}

int const &Form::getExecGrade() const {
	return this->execGrade;
}

void Form::beSigned( Bureaucrat const &bureaucrat ) throw(Form::GradeTooLowException) {
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw GradeTooLowException("grade too low for singing");
	this->isSigned = true;
	std::cout << bureaucrat.getName() << " signs " << this->getName() << std::endl;
}

Form::Form() : Name("Default"), isSigned(false), signGrade(150), execGrade(150) {}

Form::Form( std::string const &name, std::string const &target, bool isSigned, int const &toSign, int const &toExec ) : Name(name), target(target), isSigned(isSigned), signGrade(toSign), execGrade(toExec) {
	if (toSign > 150)
		throw GradeTooLowException("Cannot create form, because grade to sign too low!");
	else if (toSign < 1)
		throw GradeTooHighException("Cannot create form, because grade to sign too high!");
	else if (toExec > 150)
		throw GradeTooLowException("Cannot create form, because grade to execute too low!");
	else if (toExec < 1)
		throw GradeTooHighException("Cannot create form, because grade to execute too high!");
}

Form::Form( Form const &other ) : Name(other.Name), isSigned(other.isSigned), signGrade(other.signGrade), execGrade(other.execGrade) {}

Form::~Form() {}

Form &Form::operator=( Form const &other ) {
	this->target = other.target;
	this->isSigned = other.isSigned;
	return *this;
}

std::ostream &operator<<( std::ostream &out, Form const &form ) {
	out << "Form " << form.getName();
	if (form.getIsSigned())
		out << " is signed. ";
	else
		out << " is unsigned. ";
	out << "To sign the form bureaucrat need " << form.getSignGrade() << " grade. ";
	out << "To execute the form bureaucrat need " << form.getExecGrade() << " grade";
	return out;
}
