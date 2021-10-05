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
	Form();
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
	Form( std::string const &, bool, int, int );
	Form( Form const & );
	~Form();
	Form &operator=( Form const & );
};

std::ostream &operator<<( std::ostream &, Form const & );

#endif
