#include "DistanceStrategy.hpp"
#ifndef APPROXIMATEDISTANCE_HPP
#define APPROXIMATEDISTANCE_HPP

class ApproximateDistance : public DistanceStrategy
{
public:
	ApproximateDistance();
	virtual ~ApproximateDistance() override;
	ApproximateDistance(const ApproximateDistance& source);
	ApproximateDistance& operator=(const ApproximateDistance& source);

	virtual double Distance(const Point& p1, const Point& p2)  const override;
};

#endif  APPROXIMATEDISTANCE_HPP