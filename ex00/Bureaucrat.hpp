#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
private:
	std::string const Name;
	int Grade;
public:
	class GradeTooHighException : public std::exception {
	public:
		virtual char const *TooHigh() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual char const *TooLow() const throw();
	};
	std::string const &getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	Bureaucrat();
	Bureaucrat( std::string const &, int );
	Bureaucrat( Bureaucrat const & );
	~Bureaucrat();
	Bureaucrat &operator=( Bureaucrat const & );
};

std::ostream &operator<<( std::ostream &, Bureaucrat const & );

#endif
