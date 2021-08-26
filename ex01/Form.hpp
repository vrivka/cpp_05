#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	std::string const Name;
	bool isSigned;
	int const signGrade;
	int const execGrade;
public:
	class GradeTooHighException : public std::exception {
	public:
		char const *TooHigh() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		char const *TooLow() const throw();
	};
	std::string const &getName() const;
	bool getIsSigned() const;
	int const &getSignGrade() const;
	int const &getExecGrade() const;
	void beSigned( Bureaucrat const & );
	Form();
	Form( std::string const &name, bool isSigned, int const &toSign, int const &toExec);
	Form( Form const & );
	~Form();
	Form &operator=( Form const & );
};

std::ostream &operator<<( std::ostream &, Form const & );

#endif
