#include "DoubleFormat.hpp"
#include "Counter.hpp"
#include <iostream>

void DoubleFormat::Update(Observable& sub)
{
	std::cout << "This is the double format procedure " << std::endl;
	Counter subject = dynamic_cast<Counter&>(sub);
	std::cout << subject.getCounter() << std::endl;
}
