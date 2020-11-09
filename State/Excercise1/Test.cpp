#include "Stack.hpp"
int main()
{
	//Reserve 5 elements on the stack 
	Stack<int>data(5);
	try
	{
		
		data.Push(15);
		data.Push(14);
		data.Push(11);
		data.Push(16);
		data.Push(25);
		std::cout << data.Pop() << std::endl;
		std::cout << data.Pop() << std::endl;
		std::cout << data.Pop() << std::endl;
		std::cout << data.Pop() << std::endl;
		std::cout << data.Pop() << std::endl;
		data.Push(50);
		data.Push(100);
		data.Push(10);
		data.Push(15);
		data.Push(100);
		data.Push(60);
		//Will throw a full error;
	}
	catch (const std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}

	try
	{
		std::cout << data.Pop() << std::endl;
		std::cout << data.Pop() << std::endl;
		std::cout << data.Pop() << std::endl;
		std::cout << data.Pop() << std::endl;
		std::cout << data.Pop() << std::endl;
		std::cout << data.Pop() << std::endl;
		//Will throw a empty eror
	}
	catch (const std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}

}