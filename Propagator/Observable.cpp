#include "Observable.hpp"
#include "Counter.hpp"
Observable::Observable(const Observable& source): observers(source.observers)
{
}
Observable& Observable::operator=(const Observable& source)
{
	if (this == &source)
	{
		return *this;
	}
	observers = source.observers;
	return *this;
	// TODO: insert return statement here
}
void Observable::AddObserver(const std::shared_ptr<Observable> target)
{
	observers.push_back(target);
}

void Observable::DeleteObserver(const std::shared_ptr<Observable> target)
{
	observers.remove(target);
}

void Observable::NotifyObservers()
{
	for (std::shared_ptr<Observable>element : observers)
	{

		std::shared_ptr<Counter>obj = std::dynamic_pointer_cast<Counter>(element);
		obj->Update(*this);
	}
}
