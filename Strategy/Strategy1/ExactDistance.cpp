#include "ExactDistance.hpp"

ExactDistance::ExactDistance() : DistanceStrategy()
{
}

ExactDistance::~ExactDistance()
{
}

ExactDistance::ExactDistance(const ExactDistance& source) : DistanceStrategy(source)
{
}


ExactDistance& ExactDistance::operator=(const ExactDistance& source)
{
	DistanceStrategy::operator=(source);
	return *this;
}


double ExactDistance::Distance(const Point& p1, const Point& p2) const
{
	//X squared
	double xsquared = std::pow(p2.x() - p1.x(), 2);
	//Y squared 
	double ysquared = std::pow(p2.y() - p1.y(), 2);
	return std::sqrt(xsquared + ysquared);
}