#include "Bureaucrat.hpp"

char const *Bureaucrat::GradeTooHighException::what() const throw() { return massage.c_str(); }

char const *Bureaucrat::GradeTooLowException::what() const throw() { return massage.c_str(); }

std::string const &Bureaucrat::getName() const { return this->Name; }

int Bureaucrat::getGrade() const { return this->Grade; }

void Bureaucrat::incrementGrade() {
	try {
		if (this->Grade == 1)
			throw GradeTooHighException("Cannot increment grade of bureaucrat " + this->Name + ", because grade already highest!");
		this->Grade--;
	}
	catch (std::exception &exeption) {
		std::cout << exeption.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade() {
	try {
		if (this->Grade == 150)
			throw GradeTooLowException("Cannot decrement grade of bureaucrat " + this->Name + ", because grade already lowest!");
		this->Grade++;
	}
	catch (std::exception &exeption) {
		std::cout << exeption.what() << std::endl;
	}
}

void Bureaucrat::signForm( Form &form ) const {
	try {
		if (form.getIsSigned())
			return ;
		form.beSigned(*this);
		std::cout << this->Name << " signs form " << form.getName() << std::endl;
	}
	catch (std::exception &exception) {
		std::cout << this->Name << " cannot sign form " << form.getName() << " because " << exception.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat() : Name("Noname"), Grade(150) {}

Bureaucrat::Bureaucrat( std::string const &name, int grade ) : Name(name) {
	if (grade < 1)
		throw GradeTooHighException("Cannot create bureaucrat " + name + ", because grade to high!");
	else if (grade > 150)
		throw GradeTooLowException("Cannot create bureaucrat " + name + ", because grade to low!");
	this->Grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const &other ) : Name(other.Name), Grade(other.Grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &other ) {
	if (this == &other)
		return *this;
	this->Grade = other.Grade;
	return *this;
}

std::ostream &operator<<( std::ostream &out, Bureaucrat const &bureaucrat ) {
	out << bureaucrat.getName() << ", has grade " << bureaucrat.getGrade();
	return out;
}
