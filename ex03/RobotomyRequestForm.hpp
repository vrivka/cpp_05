#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <ctime>
#include <unistd.h>
#include <cstdlib>

class RobotomyRequestForm : public Form {
public:
	virtual void execute( Bureaucrat const & ) const throw(std::exception);
	RobotomyRequestForm();
	RobotomyRequestForm( std::string const & );
	RobotomyRequestForm( RobotomyRequestForm const & );
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm &operator=( RobotomyRequestForm const & );
};

#endif
