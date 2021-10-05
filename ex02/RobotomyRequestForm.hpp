#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <ctime>
#include <unistd.h>

class RobotomyRequestForm : public Form {
private:
	RobotomyRequestForm();
public:
	virtual void execute( Bureaucrat const & ) const throw(std::exception);
	RobotomyRequestForm( std::string const & );
	RobotomyRequestForm( RobotomyRequestForm const & );
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm &operator=( RobotomyRequestForm const & );
};

#endif
