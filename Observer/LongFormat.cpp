#include "LongFormat.hpp"
#include <iostream>
LongFormat::LongFormat() : Observers()
{
}

LongFormat::LongFormat(const LongFormat& source) : Observers(source),subject(source.subject)
{
}

LongFormat& LongFormat::operator=(const LongFormat& source)
{
    if (this == &source)
    {
        Observers::operator=(source);
        return *this;
    }
    subject = source.subject;
    return *this;
    // TODO: insert return statement here
}

void LongFormat::Update(Subject& sub) 
{
    //Print out the current counter 
    std::cout << "Updating the  Long format observer" << std::endl;
    subject = dynamic_cast<Counter&>(sub);
    std::cout << subject.GetCounter() << std::endl;
   
}
