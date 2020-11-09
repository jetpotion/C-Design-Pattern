#include "ApproximatedDistance.hpp"

ApproximateDistance::ApproximateDistance() : DistanceStrategy()
{
}

ApproximateDistance::~ApproximateDistance()
{
}

ApproximateDistance::ApproximateDistance(const ApproximateDistance& source) : DistanceStrategy(source)
{
}

ApproximateDistance& ApproximateDistance::operator=(const ApproximateDistance& source)
{
	DistanceStrategy::operator=(source);
	return *this;
}



double ApproximateDistance::Distance(const Point& p1, const Point& p2) const
{
	//Approximate distance for two points
	return std::abs(p2.x() - p1.x()) + std::abs(p2.y() - p1.y());
}