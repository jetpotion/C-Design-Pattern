#include <memory>
#include <list>
#ifndef  OBSERVABLE_HPP
#define  OBSERVABLE_HPP
//The propagator class 
class Observable
{
private:
	std::list<std::shared_ptr<Observable>>observers;
public:
	Observable() = default; 
	virtual ~Observable() = default;
	Observable(const Observable& source);
	Observable& operator=(const Observable& source);
	virtual void AddObserver(const std::shared_ptr<Observable> target) ; //Adds the observable to the list 
	virtual void DeleteObserver(const std::shared_ptr<Observable>target); //Removes a observable in the list 
	virtual void NotifyObservers();									//Loop through the and call update on each of objects 

};
#endif // ! OBSERVABLE
