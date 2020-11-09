#include "LongFormat.hpp"
#include "Counter.hpp"
#include <iostream>

void LongFormat::Update(Observable& sub)
{
    std::cout << "Updating the  Long format observer" << std::endl;
    Counter subject = dynamic_cast<Counter&>(sub);
    std::cout << subject.getCounter()<< std::endl;

}