#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute( Bureaucrat const &executor ) const throw(std::exception) {
	if (executor.getGrade() > this->execGrade)
		throw GradeTooLowException("grade too low");
	if (not this->isSigned)
		throw std::runtime_error("form not signed");
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox\n";
}

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", "none", false, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm( std::string const &target ) : Form("Presidential Pardon", target, false, 25, 5){}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &other) : Form(other) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const &other ) {
	this->target = other.target;
	this->isSigned = other.isSigned;
	return *this;
}
