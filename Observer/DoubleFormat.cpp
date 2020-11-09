#include "DoubleFormat.hpp"
#include <iostream>
DoubleFormat::DoubleFormat() : Observers()
{
}

DoubleFormat::DoubleFormat(const DoubleFormat& source): Observers(source) , subject(source.subject)
{
}

DoubleFormat& DoubleFormat::operator=(const DoubleFormat& source)
{
	if (this == &source)
	{
		Observers::operator=(source);
		return *this;
	}
	subject = source.subject;
	Observers::operator=(source);
	return *this;
	// TODO: insert return statement here
}

void DoubleFormat::Update(Subject& sub) 
{
	//Dynamtically cast the subject and then print the counter 
	std::cout << "This is the double format procedure " << std::endl;
	subject =  dynamic_cast<Counter&>(sub);
	std::cout << subject.GetCounter() << std::endl;
}
