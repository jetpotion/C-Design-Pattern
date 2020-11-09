#include "Subject.hpp"
#ifndef  Counter_HPP
#define  Counter_HPP
class Counter: public Subject
{
private:
	int counter;
public:
	//Create default constructor/destructor/assignment operator 
	Counter();
	virtual ~Counter()  override = default ;
	Counter(const Counter& Counter);
	Counter& operator=(const Counter& Counter);
	int GetCounter() const ;	//Gets the counter 
	void IncreaseCounter();		//Increase the counter 
	void DecreaseCounter();		//Decrease the counter

};
#endif // ! Counter_HPP
