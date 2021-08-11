#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Bureaucrat vasya("Vasya", 125);
	Form Order66("Order 66", false, 124, 1);

	std::cout << Order66 << std::endl;
	vasya.signForm(Order66);
	std::cout << vasya << std::endl;
	vasya.incrementGrade();
	std::cout << vasya << std::endl;
	Order66.beSigned(vasya);
	std::cout << Order66 << std::endl;
	return 0;
}