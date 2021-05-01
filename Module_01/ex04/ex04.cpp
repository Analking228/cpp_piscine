#include <iostream>

int		main(){

	std::string		str = "HI THIS IS BRAIN";
	std::string*	str1 = &str;
	std::string		&str2 = str;

	std::cout << str << " " << *str1 << " " << str2 << std::endl;
	return (0);
}