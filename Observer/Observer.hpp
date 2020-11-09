#include "Subject.hpp"
#ifndef OBSERVERS_HPP
#define OBSERVERS_HPP
class Observers
{
public:
	Observers() = default;
	virtual ~Observers() = default;
	Observers(const Observers& source) = default;
	Observers& operator=(const Observers& source) = default ;
	virtual  void Update(Subject&sub)= 0;
};
#endif // !Observers

