#include "Observer.hpp"
#include "Counter.hpp"
#ifndef LONGFORMAT_HPP
#define LONGFORMAT_HPP
class LongFormat : public Observers
{
private:
	Counter subject; //The current subject that is being observe 
public:
	LongFormat();
	virtual ~LongFormat() override = default ;
	LongFormat(const LongFormat& source);
	LongFormat& operator=(const LongFormat& source);
	virtual  void Update(Subject& sub)override ; //Function Print out the subject and store into the subject 
};
#endif // !LongFormat
