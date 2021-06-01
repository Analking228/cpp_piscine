#include "easyfind.hpp"

void	test(int num) {
    std::vector<int>    list;

    list.push_back(4);
    list.push_back(8);
    list.push_back(15);
    list.push_back(17);
    list.push_back(20);
    list.push_back(21);

    std::cout << std::setw(2) << num << " >> ";
    try {
        easyfind<std::vector<int>> (list, num);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

int		main() {
    test(3);
    test(4);
    test(15);
    test(rand() % 99);
    test(21);
    return (0);
}