#include "Observable.hpp"
#include "Observer.hpp"
#include "LongFormat.hpp"
#include "DoubleFormat.hpp"
#include "LongFormat.hpp"
#include "Observable.hpp"
#include "Observer.hpp"
#include <list>
#ifndef  COUNTER_HPP
#define  COUNTER_HPP
//Inherit from two classes and make sure its going to be a virtual inheritance to 
class Counter: virtual public Observable,  virtual public Observer
{
private:
	int counter;
	LongFormat l;
	DoubleFormat d;
public:
	Counter();
	virtual ~Counter() override = default;
	Counter(const Counter& source);
	Counter& operator=(const Counter& source);
	virtual void AddObserver(const std::shared_ptr<Observable> target) override; //Add observer ;
	virtual void DeleteObserver(const std::shared_ptr<Observable>target) override; //Remove observer ;
	virtual void NotifyObservers() override ; //Loops through and calls the update function 
	int getCounter() const ;	//Gets the counter of the function 
	void IncrementCounter();	//Increment the counter of the  counter 
	void DecrementCounter();	//Decrement the counter of the counter 
	virtual void Update(Observable& obj) override ;	//Call the update function  of long format and double format 
};
#endif // ! COUNTER_HPP

