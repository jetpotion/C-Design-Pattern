#include "StackState.hpp"
#include "Stack.hpp"
#ifndef  STACKSTATE_CPP
#define	 STACKSTATE_CPP
template<typename T>
void StackState<T>::changestate(Stack<T>& data, StackState<T>* state)
{
	data.changeState(state);
}
template<typename T>
int StackState<T>::return_top_index(const Stack<T>& data) const
{
	return data.get_top_index();
}
template<typename T>
int StackState<T>::return_capacity(const Stack<T>& data) const
{
	return data.get_capacity();
}
template<typename T>
T& StackState<T>::Pop(Stack<T>& data)
{
	
	data.Decrement_top_index();
	return data.data[data.get_top_index()];
}

template<typename T>
void StackState<T>::Push(Stack<T>& data, const T& data_m)
{
	data.data[data.get_top_index()] = data_m;
	data.Increment_top_index();
}

#endif // ! STACKSTATE_CPP