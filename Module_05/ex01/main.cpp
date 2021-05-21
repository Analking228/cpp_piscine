#include "Bureaucrat.hpp"

int main() {
    std::cout << "TEST 1" << std::endl;
    try {
	    Bureaucrat jim("Jimmy", 2);
        std::cout << jim << std::endl;
	    Bureaucrat joe("Joe", -1);
        std::cout << joe << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << "TEST 2" << std::endl;
    try {
        Bureaucrat mike("Mike", 1);
        Bureaucrat liam("Liam", 40);
        std::cout << liam << std::endl;
        liam = mike;
        std::cout << liam << std::endl;
        liam.upGrade();
        std::cout << liam << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << "TEST 3" << std::endl;
    try {
        Bureaucrat mike("Mike", 1000);
        std::cout << mike << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
	return 0;
}