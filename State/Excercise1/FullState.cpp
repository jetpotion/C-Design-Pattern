
#include "EmptyState.hpp"
#include "Stack.hpp"
#include "FullState.hpp"
#include "NotFullEmptyState.hpp"
#include "Singleton/Singleton.hpp"
#ifndef  FULLSTATE_CPP
#define FULLSTATE_CPP
template<typename T>
T& FullState<T>::Pop(Stack<T>& data)
{
	//If the top index is equal to 1 change the state of the empty state otherwise it is not not empty or full
	if (StackState<T>::return_top_index(data) == 1)
		StackState<T>::changestate(data,EmptyState<T>::Instance());
	else
		StackState<T>::changestate(data,NotFullNotEmptyState<T>::Instance() );
	//Call pop function 
	return StackState<T>::Pop(data);
	// TODO: insert return statement here
}
//Throw an exception if we try to push into a full stack 
template<typename T>
void FullState<T>::Push(Stack<T>& dat, const T& data)
{
	throw std::exception("You cannot Push into a Full stack ");
}
template<typename T>
FullState<T>* FullState<T>::Instance()
{
	return Singleton<FullState<T>>::instance();
}
#endif // ! FULLSTATE_CPP