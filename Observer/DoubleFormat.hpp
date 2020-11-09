#include "Observer.hpp"
#include "Counter.hpp"
#ifndef DoubleFormat_HPP
#define DoubleFormat_HPP
class DoubleFormat : public Observers
{
private:
	Counter subject; //The subject to update the observer 
public:
	DoubleFormat();
	virtual ~DoubleFormat() override = default;
	DoubleFormat(const DoubleFormat& source) ;
	DoubleFormat& operator=(const DoubleFormat& source);
	virtual  void Update(Subject& sub)  override; //Function to update the subject by printing it out 
};
#endif // !DoubleFormat

