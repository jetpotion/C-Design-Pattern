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
	
	virtual double Distance(const Point& p1, const Point& p2) const override; //Caclulates the exact distance between 2 points 
};

#endif // !EXACTDISTANCE_HPP