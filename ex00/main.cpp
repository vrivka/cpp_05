#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	Bureaucrat vasya("Vasya", 125);
	Bureaucrat oleg = vasya;

	std::cout << vasya << std::endl;
	oleg.incrementGrade();
	std::cout << vasya << std::endl;
	vasya.decrementGrade();
	std::cout << vasya << std::endl;
	std::cout << oleg << std::endl;
	return 0;
}
