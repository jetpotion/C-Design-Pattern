#include "Observable.hpp"
#ifndef  OBSERVER_HPP
#define OBSERVER_HPP
class Observer
{
public:
	Observer() = default;
	virtual ~Observer() = default;
	virtual void Update(Observable& obj) = 0; //The update function of interface Observer 

};
#endif // ! OBSERVER_HPP
