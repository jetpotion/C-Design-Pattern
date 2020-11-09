#include "Observer.hpp"

#ifndef DoubleFormat_HPP
#define DoubleFormat_HPP
class DoubleFormat 
{

public:
	DoubleFormat() = default ;
	~DoubleFormat() = default;
	DoubleFormat(const DoubleFormat& source) = default ;
	DoubleFormat& operator=(const DoubleFormat& source) = default;
	void Update(Observable& sub);
};
#endif // !DoubleFormat
