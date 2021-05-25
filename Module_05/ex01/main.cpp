#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	Bureaucrat mike("Mike", 100);
	std::cout << mike << "\n";
	Bureaucrat jim("Jim", 150);
	std::cout << mike << "\n";
	
	Form e314("e314", 100, 50);
	std::cout << e314 << "\n";
	Form e444("e444", 100, 50);
	std::cout << e444 << "\n";

	std::cout << "\n" << "TEST 1" << "\n";
	try {
		Form e555("e555", 180, 10);
		std::cout << e555 << "\n";
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	std::cout << "\n" << "TEST 2" << "\n";
	try {
		mike.signForm(e314);
		std::cout << e314 << "\n";
		jim.signForm(e444);
		std::cout << e444 << "\n";
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	} 
	return 0;
}
