#include <iostream>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat vasya("Vasya", 20);
		ShrubberyCreationForm abs("apple");

		std::cout << abs << std::endl;
		vasya.executeForm(abs);
		vasya.signForm(abs);
		vasya.executeForm(abs);
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	return 0;
}
