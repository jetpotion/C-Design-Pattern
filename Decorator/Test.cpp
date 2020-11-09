#include "NameDecorator.hpp"
#include "ShapeDecorator.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
int main()
{
	WilliamZhang::CAD::Point p1(3, 2);
	WilliamZhang::CAD::Point p2(5, 6);
	std::shared_ptr<Shape>shape_1 = std::make_shared<Line>(p1,p2);
	std::shared_ptr<Shape>shape_2 = std::make_shared<Circle>(p1,10.0);
	std::shared_ptr<WilliamZhang::Decorator::ShapeDecorator> decorator_1 = std::make_shared<WilliamZhang::Decorator::NameDecorator>(shape_1, "Squidward");
	std::shared_ptr<WilliamZhang::Decorator::ShapeDecorator> decorator_2 = std::make_shared<WilliamZhang::Decorator::NameDecorator>(shape_1, "Sponge bob");
	std::cout << decorator_1->toString() << std::endl;
	std::cout << decorator_2->toString() << std::endl;
	

}