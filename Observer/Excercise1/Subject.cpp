#include "Subject.hpp"
#include "Observer.hpp"
void Subject::Attach(const std::shared_ptr<Observers>source)
{
	
	observers.push_back(source);
	//Observers obj;
	//observers.push_back());
}

void Subject::Detach(const std::shared_ptr<Observers>source)
{
	observers.remove(source);
}

void Subject::Notify()
{
	
	for (std::shared_ptr<Observers>observer : observers)
	{

		observer->Update(*this);
	}
}
