#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#ifndef  STACKHPP
#define  STACKHPP
template<typename T>
class StackState;

template<typename T>
class Stack
{
private:
	friend class StackState<T>;
	std::vector<T>data;
	int top_index;
	StackState<T>*state;
	void Init(int size);
	void changeState(StackState<T>* source);
	void Increment_top_index();
	void Decrement_top_index();
	int get_top_index() const;
	int get_capacity()const;
	
	//int get_top_index() const ;
	//std::vector<T>& get_data() const;
public:
	
	Stack();					//Defualt constructor
	virtual ~Stack() = default;
	Stack(int size);
	Stack(const Stack <T>& source);	//Copy constructor
	Stack(Stack <T>&& target);		//Move constructors
	Stack <T>& operator=(const Stack <T>& source);
	Stack <T>& operator=(Stack&& target);	//Move semantics
	
	void Push(const T& data);
	T& Pop();
};
#ifndef STACKCPP
#include "Stack.cpp"
#endif // !STACKCPP

#endif