#include "ApproximatedDistance.hpp"
#include "ExactDistance.hpp"
#include "Point.hpp"
int main()
{
	ApproximateDistance aproxdistance;
	ExactDistance exactdistance;
	std::shared_ptr<DistanceStrategy> strategy = std::make_shared<ExactDistance>(exactdistance);
	//Point::setStrategy(strategy);
	//Point::setStrategy(strategy);
	Point p2(3, 2);
	p2.setStrategy(strategy);
	
	
	Point p3(5, 6);
	std::cout << p2.distance(p3) << std::endl;
	strategy = std::make_shared<ApproximateDistance>(aproxdistance);
	p2.setStrategy(strategy);
	std::cout << p2.distance(p3) << std::endl;
}