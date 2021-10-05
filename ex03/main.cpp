#include <iostream>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main() {
	try {
		Form *form;
		Intern aguzok;
		Bureaucrat Boss("Boss", 1);

		std::cout << Boss << std::endl;
		std::cout << "\n\n";
		form = aguzok.makeForm("robotomy request", "TV"); //				"robotomy request", "shrubbery creation", "presidential pardon"};
		std::cout << "\n";
		std::cout << *form << std::endl;
		std::cout << "\n";
		Boss.signForm(*form);
		Boss.executeForm(*form);
		delete form;
		std::cout << "\n\n";
		form = aguzok.makeForm("shrubbery creation", "roof");
		std::cout << "\n";
		std::cout << *form << std::endl;
		std::cout << "\n";
		Boss.signForm(*form);
		Boss.executeForm(*form);
		delete form;
		std::cout << "\n\n";
		form = aguzok.makeForm("presidential pardon", "Tanos");
		std::cout << "\n";
		std::cout << *form << std::endl;
		std::cout << "\n";
		Boss.signForm(*form);
		Boss.executeForm(*form);
		delete form;
		std::cout << "\n\n";
		form = aguzok.makeForm("gigantic", "Alice");
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
