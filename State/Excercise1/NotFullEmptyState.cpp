#include "EmptyState.hpp"
#include "FullState.hpp"
#include "Stack.hpp"
#include "NotFullEmptyState.hpp"
#include "Singleton/Singleton.hpp"
#ifndef NOTFULLEMPTYSTATE_CPP
#define NOTFULLEMPTYSTATE_CPP
template<typename T>
T& NotFullNotEmptyState<T>::Pop(Stack<T>& data)
{
	//If the topindex is equal to 1 change it empty  amd then pop 
	if (StackState<T>::return_top_index(data) == 1)
		StackState<T>::changestate(data,EmptyState<T>::Instance());
	return  StackState<T>::Pop(data);
}

template<typename T>
void NotFullNotEmptyState<T>::Push(Stack<T>& dat, const T& data)
{
	//Push the element into the stack 
	StackState<T>::Push(dat, data);
	//Check if the top index is equal to the capacity. If it is then set it to full instance 
	if (StackState<T>::return_top_index(dat) == StackState<T>::return_capacity(dat))
		StackState<T>::changestate(dat,FullState<T>::Instance());
}
//The singleton function 
template<typename T>
NotFullNotEmptyState<T>* NotFullNotEmptyState<T>::Instance()
{
	return Singleton<NotFullNotEmptyState<T>>::instance();
}
#endif