#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
	std::string const Name;
	int Grade;
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
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm( Form & ) const;
	Bureaucrat();
	Bureaucrat( std::string const &, int );
	Bureaucrat( Bureaucrat const & );
	~Bureaucrat();
	Bureaucrat &operator=( Bureaucrat const & );
};

std::ostream &operator<<( std::ostream &, Bureaucrat const & );

#endif
