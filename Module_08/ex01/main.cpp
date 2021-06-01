#include "span.hpp"

int			main()
{
	Span	Container(5);
	Container.addNumber(5);
	Container.addNumber(3);
	Container.addNumber(17);
	Container.addNumber(9);
	Container.addNumber(11);
	std::cout << "short: " << Container.shortestSpan()
	<< " - long: " << Container.longestSpan() << "\n";
	std::cout << "\nTest 1" << "\n";
	try {
		Container.addNumber(9);
		Container.addNumber(0);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	{
		std::cout << "\nTest 2" << "\n";
		Span Container = Span(5);
		Container.addNumber(5);
		try {
			std::cout << "short: " << Container.shortestSpan()
			<< " - long: " << Container.longestSpan() << std::endl;
		}
		catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "\nTest 3" << std::endl;
		Container.addNumber(5);
		try {
			std::cout << "short: " << Container.shortestSpan()
			<< " - long: " << Container.longestSpan() << std::endl;
		}
		catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
}