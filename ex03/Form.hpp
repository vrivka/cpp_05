#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
protected:
	std::string const Name;
	std::string target;
	bool isSigned;
	int const signGrade;
	int const execGrade;
public:
	class GradeTooHighException : public std::exception {
	protected:
		std::string massage;
	public:
		GradeTooHighException( std::string const &massage ) throw() : massage(massage) {}
		virtual ~GradeTooHighException() throw() {}
		virtual char const *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	protected:
		std::string massage;
	public:
		GradeTooLowException( std::string const &massage ) throw() : massage(massage) {}
		virtual ~GradeTooLowException() throw() {}
		virtual char const *what() const throw();
	};
	std::string const &getName() const;
	bool getIsSigned() const;
	int const &getSignGrade() const;
	int const &getExecGrade() const;
	void beSigned( Bureaucrat const & ) throw(Form::GradeTooLowException);
	virtual void execute( Bureaucrat const & ) const = 0;
	Form();
	Form( std::string const &, std::string const &, bool , int const &, int const &);
	Form( Form const & );
	virtual ~Form();
	Form &operator=( Form const & );
};

std::ostream &operator<<( std::ostream &, Form const & );

#endif
