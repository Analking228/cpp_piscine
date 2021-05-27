#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

void	convertation(const std::string& str) {
	std::cout << "char: ";
	try {
		int	c = std::stoi(str);
		if (isascii(c)) {
			if (isprint(c))
				std::cout << "'" << static_cast<char>(c) << "'" << "\n";
			else
				std::cout << "Non displayable" << "\n";
		}
		else
			std::cout << "impossible" << "\n";
			
	}
	catch (const std::invalid_argument&) {
		std::cout << "impossible" << "\n";
	}
	catch (const std::out_of_range&) {
		std::cout << "impossible" << "\n";
	}
	
	std::cout << "int: ";
	try {
		int c = std::stoi(str);
		std::cout << c << "\n";
	}
	catch (const std::invalid_argument&) {
		std::cout << "impossible" << "\n";
	}
	catch (const std::out_of_range&) {
		std::cout << "impossible" << "\n";
	}
	
	std::cout << "float: ";
	try {
		float f = std::stof(str);
		std::cout << std::fixed << std::setprecision(1) << f;
		std::cout << "f\n";
	}
	catch (const std::invalid_argument&) {
		std::cout << "impossible" << "\n";
	}
	catch (const std::out_of_range&) {
		std::cout << "impossible" << "\n";
	}

	std::cout << "double: ";
	try {
		double d = std::stod(str);
		std::cout << std::fixed << std::setprecision(1) << d;
		std::cout << "\n";
	}
	catch (const std::invalid_argument&) {
		std::cout << "impossible" << "\n";
	}
	catch (const std::out_of_range&) {
		std::cout << "impossible" << "\n";
	}
}

int		main(int argc, char** argv){
	if (argc != 2) {
		std::cout << "Error: arguments count" << std::endl;
		return -1;
	}
	const std::string str = static_cast<std::string>(argv[1]);
	convertation(str);
	return 1;
}