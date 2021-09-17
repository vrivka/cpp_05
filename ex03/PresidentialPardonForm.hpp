#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class PresidentialPardonForm : public Form {
public:
	virtual void execute( Bureaucrat const & ) const throw(std::exception);
	PresidentialPardonForm();
	PresidentialPardonForm( std::string const & );
	PresidentialPardonForm( PresidentialPardonForm const & );
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm &operator=( PresidentialPardonForm const & );
};

#endif
