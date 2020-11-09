#include <list>
#include <memory>
#ifndef SUBJECT_HPP
#define SUBJECT_HPP
class Observers;
class Subject
{
private:
	std::list<std::shared_ptr<Observers>>observers;
public:
	Subject() = default ;
	virtual ~Subject() = default ;
	Subject(const Subject& Counter) = default ;
	Subject& operator=(const Subject& Counter) = default ;
	void Attach(const std::shared_ptr<Observers>obj); //Add the shared ptr into the observer
	void Detach(const std::shared_ptr<Observers>source); //Remove the shared ptr in the observer list 
	void Notify();			//Function to loop through the observer to call each of the  update function
};
#endif