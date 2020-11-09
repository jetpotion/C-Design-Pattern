//#include "NotFullEmptyState.hpp"
//#include "FullState.hpp"
#include "StackState.hpp"
#ifndef EMPTYSTATE_HPP
#define EMPTYSTATE_HPP
template<typename T>
class EmptyState :public StackState<T>
{
	
public:
	virtual ~EmptyState() override = default;
	virtual T& Pop(Stack<T>& data) override;
	virtual void Push(Stack<T>& dat, const T& data) override;
	static EmptyState<T>* Instance();
};

#ifndef EMPTYSTATE_CPP
#include "EmptyState.cpp"
#endif // !STACKSTATE_CPP
#endif // ! STACKSTATE_HPP
