#include <iostream>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main() {
	try {
		Bureaucrat vasya("Vasya", 60);
		Intern aguzok;
		Form *rrf;

		rrf = aguzok.makeForm("robotomy request", "bender");
		std::cout << *rrf << std::endl;
		vasya.executeForm(*rrf);
		vasya.signForm(*rrf);
		vasya.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	return 0;
}
