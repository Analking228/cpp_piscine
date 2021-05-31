#include "whatever.hpp"

int main( void ) {
	
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << "\n";
	std::cout << "min( a, b ) = " << ::min( a, b ) << "\n";
	std::cout << "max( a, b ) = " << ::max( a, b ) << "\n";
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << "\n";
	std::cout << "min( c, d ) = " << ::min( c, d ) << "\n";
	std::cout << "max( c, d ) = " << ::max( c, d ) << "\n";
	
	float e = 7.5;
	float f = 10.67;
	
	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << "\n";
	std::cout << "min( e, f ) = " << ::min( e, f ) << "\n";
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	
	return 0;
}