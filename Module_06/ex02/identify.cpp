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

void	identify_pointer(Base* p) {

	A* baseA = dynamic_cast<A*>(p);
	B* baseB = dynamic_cast<B*>(p);
	C* baseC = dynamic_cast<C*>(p);

	if(!baseA && !baseB)
		std::cout << "Type C" << std::endl;
	if(!baseA && !baseC)
		std::cout << "Type B" << std::endl;
	if(!baseC && !baseB)
		std::cout << "Type A" << std::endl;
}

void	identify_reference(Base& p) {

	A* baseA = dynamic_cast<A*>(&p);
	B* baseB = dynamic_cast<B*>(&p);
	C* baseC = dynamic_cast<C*>(&p);

	if(!baseA && !baseB)
		std::cout << "Type C" << std::endl;
	if(!baseA && !baseC)
		std::cout << "Type B" << std::endl;
	if(!baseC && !baseB)
		std::cout << "Type A" << std::endl;
}

int		main() {

	std::srand(time(0));

	Base*	base;

	base = generate();
	identify_pointer(base);
	identify_reference(*base);
	return 0;
}