#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute( Bureaucrat const &executor ) const throw(std::exception) {
	if (executor.getGrade() > this->execGrade)
		throw GradeTooLowException("bureaucrat's grade too low");
	if (not this->isSigned)
		throw std::runtime_error("form " + this->getName() + " not signed");
	std::cout << executor.getName() << " executes " << this->getName() << std::endl;
	std::cout << "Brrrrrrrrrrrrt....\n";
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->target << " has been robotomized successfully\n";
	else
		std::cout << this->target << " has been robotomized failure\n";
}

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", "none", false, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm( std::string const &target ) : Form("Robotomy Request", target, false, 72, 45){}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &other) : Form(other) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const &other ) {
	this->target = other.target;
	this->isSigned = other.isSigned;
	return *this;
}
