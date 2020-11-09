#include <memory>
#ifndef  STACKSTATE_HPP
#define	 STACKSTATE_HPP
template<typename T>
class Stack;

template<typename T>
class StackState
{
	//Acessor function to get the data from the stack class 
protected:
	//Changes the state of the current stack 
	void changestate(Stack<T>& data, StackState<T>*state);	
	//Returns the top index of the stack 
	int return_top_index(const Stack<T>& data) const;
	//Return the capacit of the stack 
	int return_capacity(const Stack<T>& data)const;
public:
	virtual ~StackState() = default;
	virtual T& Pop(Stack<T>& data);
	virtual void Push(Stack<T>& dat, const T& data);
};
#ifndef STACKSTATE_CPP
#include "StackState.cpp"
#endif // !STACKSTATE_CPP
#endif // ! STACKSTATE_HPP