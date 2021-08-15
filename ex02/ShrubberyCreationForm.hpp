#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
public:
	virtual void execute( Bureaucrat const & ) const throw(std::exception);
	ShrubberyCreationForm();
	ShrubberyCreationForm( std::string const & );
	ShrubberyCreationForm( ShrubberyCreationForm const & );
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=( ShrubberyCreationForm const & );
};

#endif
