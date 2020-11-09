
#include "Observable.hpp"
#ifndef LONGFORMAT_HPP
#define LONGFORMAT_HPP
class LongFormat
{
public:
	LongFormat() = default;
	~LongFormat() = default ;
	LongFormat(const LongFormat& source) = default;
	LongFormat& operator=(const LongFormat& source) = default ;
	void Update(Observable& sub);
};
#endif // !LongFormat