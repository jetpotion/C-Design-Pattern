#include "Counter.hpp"
#include "Subject.hpp"
#include "LongFormat.hpp"
#include "DoubleFormat.hpp"
#include <memory>
int main()
{
	Counter c1 = Counter();

	std::shared_ptr<Observers>first_observer = std::make_shared<DoubleFormat>();
	std::shared_ptr<Observers>second_observer = std::make_shared<LongFormat>();
	
	c1.Attach(first_observer);
	c1.Attach(second_observer);
	c1.IncreaseCounter();
	c1.IncreaseCounter();
	c1.IncreaseCounter();
	c1.DecreaseCounter();
	c1.DecreaseCounter();
	c1.Detach(first_observer);
}