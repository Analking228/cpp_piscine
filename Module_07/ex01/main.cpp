#include "iter.hpp"

template <typename T>
void	ar_print(const T& ar) {
	
	std::cout << ar << " ";
	return ;
}

int		main(void) {
	
	int			numbers[] = {rand(), rand(), rand(), rand(), rand()};
	std::string names[] = {"Azir", "Lissandra", "Yasuo", "Renekton", "Nasus"};

	std::cout << "Numbers : ";
	iter <int>(numbers, 5, ar_print);
	std::cout << std::endl;

	std::cout << "Names   : ";
	iter(names, 5, ar_print);
	std::cout << "\n";

	return (0);
}