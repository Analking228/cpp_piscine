#include "Array.hpp"

int		main() {

	std::cout << "ARRAY OF INTEGERS" << "\n" << "\n";
	Array<int>	array(30);

	std::cout << "Array size: " << array.size() << "\n";

	for (int i = 0; i < 30; ++i)
		array[i] = i;

	std::cout << "printing filled 0-29 array: \n";
	try {
		for (int i = 0; i < 31; i++)
			std::cout << array[i] << " ";
	}
	catch (const std::exception& e) {
		std::cerr << "\n" << e.what() << std::endl;
	}

	std::cout << "\nARRAY OF CHARS" << "\n" << "\n";

	Array<char>	s_array(20);

	std::cout << "Array size: " << s_array.size() << "\n";

	for (int i = 0; i < 20; ++i)
		s_array[i] = char(i + 33);

	std::cout << "printing filled array: \n";
	try {
		for (int i = 0; i < 31; i++)
			std::cout << s_array[i] << " ";
	}
	catch (const std::exception& e) {
		std::cerr << "\n" << e.what() << std::endl;
	}

	return 0;
}