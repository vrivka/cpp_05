#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	{
		try {
			Form divine("Divine", false, 151, 150);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n";
	{
		try {
			Form divine("Divine", false, 0, 150);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n";

	{
		try {
			Form divine("Divine", false, 150, 151);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n";
	{
		try {
			Form divine("Divine", false, 150, 0);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n";
	{
		try {
			Bureaucrat vasya("Vasay", 30);
			Form divine("Divine", false, 43, 15);

			std::cout << divine << std::endl;
			std::cout << vasya << std::endl;
			vasya.signForm(divine);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n";
	{
		try {
			Bureaucrat vasya("Vasya", 44);
			Form divine("Divine", false, 43, 15);

			std::cout << divine << std::endl;
			std::cout << vasya << std::endl;
			vasya.signForm(divine);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n";
	{
		try {
			Bureaucrat vasya("Vasya", 43);
			Form divine("Divine", true, 43, 15);

			std::cout << divine << std::endl;
			std::cout << vasya << std::endl;
			vasya.signForm(divine);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}
