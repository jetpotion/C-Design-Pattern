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
	Point p3(5, 6);
	std::cout << p2.distance(p3,strategy) << std::endl;
	strategy = std::make_shared<ApproximateDistance>(aproxdistance);
	std::cout << p2.distance(p3,strategy) << std::endl;
	//An obvious advantage that this has over static variable is that this is far simpler to implement then as opposed to stored variable 
	//Howeverm you have to supply the strategy everytime. Where as the original static variable implenentation points can be compute in approximization or exact distance in specific continously.
}