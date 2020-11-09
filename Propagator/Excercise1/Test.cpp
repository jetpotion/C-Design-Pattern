#include "Counter.hpp"
#include "Observable.hpp"
int main()
{
	Counter c = Counter();

	std::shared_ptr<Observable> l = std::make_shared<Counter>();
	std::shared_ptr<Observable> h = std::make_shared<Counter>();
	c.AddObserver(l);
	c.AddObserver(h);
	c.IncrementCounter();
	c.IncrementCounter();
	c.IncrementCounter();
	c.DecrementCounter();
	c.DecrementCounter();
	c.DeleteObserver(l);
	c.DeleteObserver(h);

}