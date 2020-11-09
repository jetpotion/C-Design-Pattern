#include "Point.hpp"
#ifndef  DISTANCESTRATEGY_HPP
#define	 DISTANCESTRATEGY_HPP
class DistanceStrategy
{
public:
	DistanceStrategy();
	virtual ~DistanceStrategy();
	DistanceStrategy(const DistanceStrategy& source);
	DistanceStrategy& operator=(const DistanceStrategy& source);
	
	virtual double Distance(const Point& p1, const Point& p2) const = 0;
};

#endif // ! DISTANCESTRATEGY_HPP