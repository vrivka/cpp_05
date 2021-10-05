#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	std::cout << "--------------------------------------------------------------\n";
	{
		try {
			Bureaucrat vasya("Vasya", 151);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------------------------------\n";
	{
		try {
			Bureaucrat vasya("Vasya", -150);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------------------------------\n";
	{
		try {
			Bureaucrat vasya("Vasya", 1);

			std::cout << vasya << std::endl;
			vasya.incrementGrade();
			std::cout << vasya << std::endl;
			vasya.decrementGrade();
			std::cout << vasya << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------------------------------\n";
	{
		try {
			Bureaucrat oleg("Oleg", 150);

			std::cout << oleg << std::endl;
			oleg.decrementGrade();
			std::cout << oleg << std::endl;
			oleg.incrementGrade();
			std::cout << oleg << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------------------------------\n";
	{
		try {
			Bureaucrat misha("Misha", 1);

			std::cout << misha << std::endl;
			for (int i = 0; i < 150; i++)
				misha.decrementGrade();
			std::cout << misha << std::endl;
			for (int i = 0; i < 150; i++)
				misha.incrementGrade();
			std::cout << misha << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------------------------------\n";
}
