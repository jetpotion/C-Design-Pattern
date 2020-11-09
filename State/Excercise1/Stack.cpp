#include "Stack.hpp"
#include "StackState.hpp"
#include "EmptyState.hpp"
#ifndef  STACKCPP
#define  STACKCPP
template<typename T>
Stack<T>::Stack()
{
	Init(1);
}
template<typename T>
Stack<T>::Stack(int size)
{
	Init(size);
}
template<typename T>
Stack<T>::Stack(const Stack<T>& source) : data(source.data), top_index(source.top_index), state(source.state)
{
}
template<typename T>
Stack<T>::Stack(Stack<T>&& target) : data(std::move(target.data)), top_index(std::move(target.top_index)), state(std::move(target.state))
{
}
template<typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& source)
{
	if (this == &source)
	{
		return *this;
	}
	data = source.data;
	top_index = source.top_index;
	state = source.state;
	return *this;
	// TODO: insert return statement here
}
template<typename T>
Stack<T>& Stack<T>::operator=(Stack&& target)
{
	if (this == &target)
	{
		return *this;
	}
	data = std::move(target.data);
	top_index = std::move(target.top_index);
	state = std::move(target.state);
	return *this;
}
template<typename T>
void Stack<T>::changeState(StackState<T>* source)
{
	state = source;
}
template<typename T>
void Stack<T>::Increment_top_index()
{
	top_index++;
}
template<typename T>
void Stack<T>::Decrement_top_index()
{
	top_index--;
}
template<typename T>
int Stack<T>::get_top_index() const
{
	return top_index;
}
template<typename T>
int Stack<T>::get_capacity() const
{
	return data.size();
}
template<typename T>
void Stack<T>::Init(int size)
{
	if (size < 1)
		data = std::vector<T>(1);
	else
		data = std::vector<T>(size);
	top_index = 0;
	
	state = EmptyState<T>::Instance();
}
template<typename T>
void Stack<T>::Push(const T& data)
{
	state->Push(*this, data);
}
template<typename T>
T& Stack<T>::Pop()
{
	return state->Pop(*this);
}
#endif // ! StackCPP