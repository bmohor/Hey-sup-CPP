#include "Point.hpp"
#include <iostream>

int main( void ) {
	{
		Point const a(1.0, 2.0);
	    Point const b(3.0, 5.0);
	    Point const c(5.0, 2.0);
	    Point const point (1.0, 8.0);
		if (bsp(a, b, c, point))
        	std::cout << "inside" << std::endl;
		else
			std::cout << "outside" << std::endl;
	}
	{
		Point const a(-13.0, 13.0);
    	Point const b(4.0, 7.0);
   		Point const c(-4.0, 1.0);
		Point const point (1.0, 8.0);
		if (bsp(a, b, c, point))
        	std::cout << "inside" << std::endl;
		else
			std::cout << "outside" << std::endl;
	}
	{
		Point const a(1.0, 2.0);
	    Point const b(3.0, 5.0);
	    Point const c(5.0, 2.0);
	    Point const point (1.0, 2.0);
		if (bsp(a, b, c, point))
        	std::cout << "inside" << std::endl;
		else
			std::cout << "outside" << std::endl;
	}
	{
		Point const a(1.0, 2.0);
	    Point const b(3.0, 5.0);
	    Point const c(5.0, 2.0);
	    Point const point (2.0, 3.0);
		if (bsp(a, b, c, point))
        	std::cout << "inside" << std::endl;
		else
			std::cout << "outside" << std::endl;
	}
	return 0;
}
