#ifndef INTERN_HPP
#define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "iostream"

class Intern {
private:
	Form *createRobo( std::string const & );
	Form *createPres( std::string const & );
	Form *createShru( std::string const & );
public:
	Form *makeForm( std::string const &, std::string const & );
	Intern();
	Intern( Intern const & );
	~Intern();
	Intern &operator=( Intern const & );
};


#endif
