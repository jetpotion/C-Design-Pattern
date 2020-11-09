#include "StackState.hpp"
#ifndef NOTFULLEMPTYSTATE_HPP
#define NOTFULLEMPTYSTATE_HPP

template<typename T>
class NotFullNotEmptyState :public StackState<T>
{	
	
public:
	virtual ~NotFullNotEmptyState()  override = default;
	virtual T& Pop(Stack<T>& data) override;
	virtual void Push(Stack<T>& dat, const T& data) override;
	static NotFullNotEmptyState<T>* Instance();
};
#ifndef NOTFULLEMPTYSTATE_CPP
#include "NotFullEmptyState.cpp"
#endif // !1
#endif