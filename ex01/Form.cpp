#include "Form.hpp"

const char *Form::GradeTooHighException::TooHigh() const throw() {
	return "Grade too high";
}

const char *Form::GradeTooLowException::TooLow() const throw() {
	return "Grade too low";
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

const int &Form::getExecGrade() const {
	return this->execGrade;
}

void Form::beSigned( Bureaucrat const &bureaucrat ) {
	try {
		if (bureaucrat.getGrade() > this->getSignGrade())
			throw GradeTooLowException();
		this->isSigned = true;
		std::cout << bureaucrat.getName() << " signs " << this->getName() << std::endl;
	}
	catch (GradeTooLowException &exception) {
		std::cout << bureaucrat.getName() <<  " cannot sign " << this->getName() << " because " << exception.TooLow() << std::endl;
	}
}

Form::Form() : Name("Default"), isSigned(false), signGrade(150), execGrade(150) {}

Form::Form(const std::string &name, bool isSigned, const int &toSign, const int &toExec) : Name(name), isSigned(isSigned), signGrade(toSign), execGrade(toExec) {}

Form::Form( Form const &other ) : Name(other.Name), isSigned(other.isSigned), signGrade(other.signGrade), execGrade(other.execGrade) {}

Form::~Form() {}

Form &Form::operator=( Form const &other ) {
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
