#include "DistanceStrategy.hpp"

#ifndef EXACTDISTANCE_HPP
#define EXACTDISTANCE_HPP

class ExactDistance : public DistanceStrategy
{
public:
	ExactDistance();
	virtual ~ExactDistance() override;
	ExactDistance(const ExactDistance& source);
	
	ExactDistance& operator=(const ExactDistance& source);
	
	virtual double Distance(const Point& p1, const Point& p2) const override;
};

#endif // !EXACTDISTANCE_HPP