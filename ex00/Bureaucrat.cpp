#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::TooHigh() const throw() {
	return "too high";
}

const char *Bureaucrat::GradeTooLowException::TooLow() const throw() {
	return "too low";
}

std::string const &Bureaucrat::getName() const {
	return this->Name;
}

int Bureaucrat::getGrade() const {
	return this->Grade;
}

void Bureaucrat::incrementGrade() {
	try {
		if (this->Grade == 1)
			throw GradeTooHighException();
		this->Grade--;
	}
	catch (GradeTooHighException &exception) {
		std::cout << "Cannot increment grade because Grade already " << exception.TooHigh() << std::endl;
	}
}

void Bureaucrat::decrementGrade() {
	try {
		if (this->Grade == 150)
			throw GradeTooLowException();
		this->Grade++;
	}
	catch (GradeTooLowException &exception) {
		std::cout << "Cannot increment grade because Grade already " << exception.TooLow() << std::endl;
	}
}

Bureaucrat::Bureaucrat() : Name("\"Mommy's bureaucrat\""), Grade(150) {}

Bureaucrat::Bureaucrat( std::string const &name, int grade ) : Name(name) {
	try {
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		this->Grade = grade;
	}
	catch (GradeTooHighException &exception) {
		std::cout << "Grade " << exception.TooHigh() << std::endl;
	}
	catch (GradeTooLowException &exception) {
		std::cout << "Grade " << exception.TooLow() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat &other ) : Name(other.Name), Grade(other.Grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &other ) {
	this->Grade = other.Grade;
	return *this;
}

std::ostream &operator<<( std::ostream &out, Bureaucrat const &bureaucrat ) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}
