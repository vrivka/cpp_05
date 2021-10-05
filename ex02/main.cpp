#include <iostream>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat vasya("Vasya", 141);
		Bureaucrat misha("Misha", 70);
		Bureaucrat oleg("Oleg", 15);
		Bureaucrat Boss("Boss", 2);
		ShrubberyCreationForm scf("home");
		RobotomyRequestForm rrf("barrel");
		PresidentialPardonForm ppf("Vasya");

		std::cout << vasya << std::endl;
		std::cout << misha << std::endl;
		std::cout << oleg << std::endl;
		std::cout << Boss << std::endl;
		std::cout << "\n";
		std::cout << scf << std::endl;
		std::cout << "\n";
		vasya.executeForm(scf);
		misha.executeForm(scf);
		vasya.signForm(scf);
		misha.executeForm(scf);
		std::cout << "\n\n";
		std::cout << rrf << std::endl;
		std::cout << "\n";
		vasya.executeForm(rrf);
		misha.executeForm(rrf);
		oleg.executeForm(rrf);
		misha.signForm(rrf);
		oleg.executeForm(rrf);
		std::cout << "\n\n";
		std::cout << ppf << std::endl;
		std::cout << "\n";
		vasya.executeForm(ppf);
		misha.executeForm(ppf);
		oleg.executeForm(ppf);
		Boss.executeForm(ppf);
		oleg.signForm(ppf);
		Boss.executeForm(ppf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
