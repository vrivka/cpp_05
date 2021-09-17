#include "Intern.hpp"

Form *Intern::createShru( std::string const &target ) {
	std::cout << "Intern creates shrubbery creation\n";
	return new ShrubberyCreationForm(target);
}

Form *Intern::createRobo( std::string const &target ) {
	std::cout << "Intern creates robotomy reguest\n";
	return new RobotomyRequestForm(target);
}

Form *Intern::createPres( std::string const &target ) {
	std::cout << "Intern creates presidential pardon\n";
	return new PresidentialPardonForm(target);
}

typedef Form *(Intern::*creationForm)( std::string const & );

Form *Intern::makeForm( std::string const & formName, std::string const &target ) {
	creationForm forms[3] = {&Intern::createRobo, &Intern::createShru, &Intern::createPres};
	std::string names[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	for (int i = 0; i < 3; i++)
		if (names[i] == formName)
			return (this->*forms[i])(target);
	std::cout << "Cannot find form " << formName << std::endl;
	return NULL;
}

Intern::Intern() {}

Intern::Intern( Intern const & ) {}

Intern::~Intern() {}

Intern &Intern::operator=( Intern const &other ) {
	return *this;
}
