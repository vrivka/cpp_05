#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return massage.c_str();
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return massage.c_str();
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
			throw GradeTooHighException("Cannot increment grade, because its to high!");
		this->Grade--;
	}
	catch (std::exception &exeption) {
		std::cout << exeption.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade() {
	try {
		if (this->Grade == 150)
			throw GradeTooLowException("Cannot decrement grade, because its to low!");
		this->Grade++;
	}
	catch (std::exception &exeption) {
		std::cout << exeption.what() << std::endl;
	}
}

void Bureaucrat::signForm( Form &form ) const {
	try {
		form.beSigned(*this);
	}
	catch (std::exception &exception) {
		std::cout << this->Name << " cannot sign " << form.getName() << " because " << exception.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat() : Name("\"Mommy's bureaucrat\""), Grade(150) {}

Bureaucrat::Bureaucrat( std::string const &name, int grade ) : Name(name) {
	if (grade < 1)
		throw GradeTooHighException("Cannot create bureaucrat, because his grade to high!");
	else if (grade > 150)
		throw GradeTooLowException("Cannot create bureaucrat, because his grade to low!");
	this->Grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const &other ) : Name(other.Name), Grade(other.Grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &other ) {
	this->Grade = other.Grade;
	return *this;
}

std::ostream &operator<<( std::ostream &out, Bureaucrat const &bureaucrat ) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}
