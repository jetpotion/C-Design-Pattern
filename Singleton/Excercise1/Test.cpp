
#include "Point.hpp"
int main()
{
	WilliamZhang::CAD::Point p1(5, 2);
	std::cout << p1.distance() << std::endl;
	//Change the originpoint to itself and calcualting the distance
	*WilliamZhang::CAD::OriginPoint::instance() = p1;
	std::cout << p1.distance() << std::endl;
	
}