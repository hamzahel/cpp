
#include "whatever.hpp"

int		main()
{
	int a = 2;
	int b = 3;
	
	std::cout << "------- int --------\n";
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "swap...\na = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::cout << "\n------- string --------\n";
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "swap...\nc = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	std::cout << "\n------- double --------\n";

	double	x = 2.5;
	double	y = 2.6;
	
	std::cout << "x = " << x << ", y = " << y << std::endl;
	::swap(x, y);
	std::cout << "swap...\nx = " << x << ", y = " << y << std::endl;
	std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
	std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl;

	std::cout << "\n------- Class --------\n";
	
	Awesome obj(2), obj2(4);

	std::cout << "obj.n: " << obj << " obj2.n: " << obj2 << std::endl;
	swap(obj, obj2);
	std::cout << "swap...\nobj.n: " << obj << " obj2.n: " << obj2 << std::endl;
	std::cout << "max( x, y ) = " << max(obj, obj2) << std::endl;
	std::cout << "min( x, y ) = " << min(obj, obj2) << std::endl;
	
	return 0;
}