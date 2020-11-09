#include "Counter.hpp"
#include <iostream>
//Initialize the counter to be zero 
Counter::Counter() :  Observable(),Observer(),counter(0)
{
}

Counter::Counter(const Counter& source): counter(source.counter), Observable(source), Observer(source)
{
}

Counter& Counter::operator=(const Counter& source)
{

    if (this == &source)
    {
        Observable::operator=(source);
        Observer::operator=(source);
        return *this;
      }
    counter = source.counter;
    Observable::operator=(source);
    Observer::operator=(source);
    return *this;

    // TODO: insert return statement here
}

void Counter::AddObserver(const std::shared_ptr<Observable> target)
{
    //Calls the parent class add observer function 
    Observable::AddObserver(target);
}

void Counter::DeleteObserver(const std::shared_ptr<Observable> target)
{
    //Calls the delete observer function in the parent class 
    Observable::DeleteObserver(target);
}

void Counter::NotifyObservers()
{
    //Calls the notify observeer function  in the parent class 
    Observable::NotifyObservers();
}

int Counter::getCounter() const
{
    return counter;
}

void Counter::IncrementCounter()
{
    //Increment counter and notify observer
    counter++;
    Observable::NotifyObservers();
}

void Counter::DecrementCounter()
{
    //Decrease the counter and notify observer 
    counter--;
    Observable::NotifyObservers();
}

void Counter::Update(Observable& obj)
{
    std::cout << "Updating..." << std::endl;
    Counter object = dynamic_cast<Counter&>(obj);
  //  object.IncrementCounter();
   // object.NotifyObservers();
    l.Update(obj);
    d.Update(obj);
}
