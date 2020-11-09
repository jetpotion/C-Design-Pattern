
#include "EmptyState.hpp"
#include "FullState.hpp"
#include "NotFullEmptyState.hpp"
#include "Singleton/Singleton.hpp"
#ifndef EMPTYSTATE_CPP
#define EMPTYSTATE_CPP
//Throw an exception if we try to pop an empty stack 
template<typename T>
T& EmptyState<T>::Pop(Stack<T>& data)
{
	throw std::exception("You cannot pop an empty stack");
}

template<typename T>
void EmptyState<T>::Push(Stack<T>& dat, const T& data)
{
	//Push data into the stack from the parent class 
	StackState<T>::Push(dat,data);
	//Use the acessor function in the protected to check if the top index equals to the full index. Then once again calling the parents function to change the state 
	if (StackState<T>::return_top_index(dat) == StackState<T>::return_capacity(dat))
		StackState<T>::changestate(dat, FullState<T>::Instance());
	//Changes the state if  its not empty
	else
		StackState<T>::changestate(dat, NotFullNotEmptyState<T>::Instance());
		
}
//The instance singleton function 
template<typename T>
EmptyState<T>* EmptyState<T>::Instance()
{
	return Singleton<EmptyState<T>>::instance();
}

#endif // !1