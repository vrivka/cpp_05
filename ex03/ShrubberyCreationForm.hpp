#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
private:
	static void putTree(std::ofstream &ofs);
	ShrubberyCreationForm();
public:
	virtual void execute( Bureaucrat const & ) const throw(std::exception);
	ShrubberyCreationForm( std::string const & );
	ShrubberyCreationForm( ShrubberyCreationForm const & );
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=( ShrubberyCreationForm const & );
};

#endif
