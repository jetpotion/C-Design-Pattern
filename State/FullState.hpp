#include "StackState.hpp"
#ifndef FULLSTATE_HPP
#define FULLSTATE_HPP
template<typename T>
class FullState :public StackState<T>
{
	
public:
	virtual ~FullState() override = default;
	virtual T& Pop(Stack<T>& data) override;
	virtual void Push(Stack<T>& dat, const T& data) override;
	static FullState<T>* Instance();
};
#ifndef FULLSTATE_CPP
#include "FullState.cpp"
#endif
#endif