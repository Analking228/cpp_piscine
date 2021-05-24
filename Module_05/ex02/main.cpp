#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	std::srand(time(0));
	Bureaucrat mike("Mike", 100);
	Bureaucrat mikky("Mikky", 1);
	std::cout << mike << std::endl;
	std::cout << mikky << std::endl;

	std::cout << "\nTEST 1" << std::endl;
	try {
		PresidentialPardonForm PrP("poor vilager");
		std::cout << PrP << std::endl;
		mikky.executeForm(PrP);
    }
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nTEST 2" << std::endl;
	try {
		PresidentialPardonForm PrP2("poor vilager");
		std::cout << PrP2 << std::endl;
		mikky.signForm(PrP2);
		mikky.executeForm(PrP2);
		mike.executeForm(PrP2);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nTEST 3" << std::endl;
	try {
		RobotomyRequestForm Rob69("Robotino");
		std::cout << Rob69 << std::endl;
		Rob69.beSigned(mikky);
		Rob69.execute(mikky);
		Rob69.execute(mikky);
		Rob69.execute(mikky);
		Rob69.execute(mike);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nTEST 4" << std::endl;
	try {
		Bureaucrat newbee("Newbee", 150);
		ShrubberyCreationForm Greenafication("Greenafication");
		std::cout << Greenafication << std::endl;
		mikky.signForm(Greenafication);
		std::cout << Greenafication << std::endl;
		Greenafication.execute(mikky);
		std::cout << Greenafication << std::endl;
		Greenafication.execute(newbee);
		std::cout << Greenafication << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
