#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat vasya("Vasya", 1);

		std::cout << vasya << std::endl;
		vasya.incrementGrade();
		std::cout << vasya << std::endl;
		vasya.decrementGrade();
		std::cout << vasya << std::endl;
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	return 0;
}
