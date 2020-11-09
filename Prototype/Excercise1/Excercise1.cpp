#include "ShapeComposite.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
//Print function using composite to string
void Print(const WilliamZhang::CAD::ShapeComposite& composite)
{
	std::cout << composite.toString() << std::endl;
}
int main()
{
	WilliamZhang::CAD::ShapeComposite newcomposite;
	WilliamZhang::CAD::Point p(3, 2);
	WilliamZhang::CAD::Point q(5, 6);
	WilliamZhang::CAD::Line  l(p, q);
	WilliamZhang::CAD::Circle c (p, 5.0);
	std::shared_ptr<WilliamZhang::CAD::Point>p1 = std::make_shared<WilliamZhang::CAD::Point>(p);
	std::shared_ptr<WilliamZhang::CAD::Point>p2 = std::make_shared<WilliamZhang::CAD::Point>(q);
	std::shared_ptr<WilliamZhang::CAD::Line>l3 = std::make_shared<WilliamZhang::CAD::Line>(p, q);
	std::shared_ptr<WilliamZhang::CAD::Circle>c4 = std::make_shared<WilliamZhang::CAD::Circle>(c);
	newcomposite.PutShape(p1);
	newcomposite.PutShape(p2);
	newcomposite.PutShape(l3);
	newcomposite.PutShape(c4);

	std::shared_ptr<WilliamZhang::CAD::ShapeComposite> shape_comp_pointer = std::make_shared<WilliamZhang::CAD::ShapeComposite>();
	shape_comp_pointer ->PutShape(p1);
	shape_comp_pointer->PutShape(p2);
	shape_comp_pointer ->PutShape(l3);
	shape_comp_pointer -> PutShape(c4);
	newcomposite.PutShape(shape_comp_pointer);
	
	

	//Now we call clone 
	std::cout << "TESTING CLONE" << std::endl;
	std::shared_ptr<WilliamZhang::CAD::Shape>copy_pointer = newcomposite.clone();
	std::cout << *copy_pointer << std::endl;
	//Now are going to test the copy constructor and the assignment operator
	std::cout << "TESTING COPY CONSTRUCT" << std::endl;
	WilliamZhang::CAD::ShapeComposite copy_construct(newcomposite);
	std::cout << copy_construct << std::endl;
	std::cout << "TEST THE ASSIGNMENT OPERATOR" << std::endl;
	WilliamZhang::CAD::ShapeComposite assignment = copy_construct;
	std::cout << assignment << std::endl;
	//Should print all of the same objects 
}