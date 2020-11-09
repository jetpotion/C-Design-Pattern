
#include "ConsoleShapeFactory.hpp"
#include <list>
int main()
{
	std::shared_ptr<WilliamZhang::Factories::ShapeFactory> arr = std::make_shared<WilliamZhang::Factories::ConsoleShapeFactory>();
	std::list<std::shared_ptr<WilliamZhang::CAD::Shape>>list;
	std::shared_ptr<WilliamZhang::CAD::Shape>shaper;
	//Create a line 
	shaper = arr->createShape();
	list.push_back(shaper);
	//Create a circle 
	shaper = arr->createShape();
	list.push_back(shaper);
	//Create a Point 
	shaper = arr->createShape();
	list.push_back(shaper);
	std::cout << "The total size of the array " << list.size() << std::endl;

}