#include "A.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"

Base*	generateA(void) {
	return new A;
}

Base*	generateB(void) {
	return new B;
}

Base*	generateC(void) {
	return new C;
}

Base*	generate(void) {
	
	Base*	(*_Methods[])() = {
		generateA,
		generateB,
		generateC
	};

	int i = rand() % 3;
	return _Methods[i]();
}

void	identify_from_pointer(Base* p) {

	if (dynamic_cast<A*>(p))
		std::cout << "Base: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Base: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Base: C" << std::endl;
}

void	identify_from_reference(Base& p) {

	if (dynamic_cast<A*>(&p))
		std::cout << "Base: A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "Base: B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "Base: C" << std::endl;
	
}

int		main() {

	std::srand(time(0));

	Base*	base;

	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	return 0;
}