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
	//Create the first composite
	WilliamZhang::CAD::ShapeComposite newcomposite;
	WilliamZhang::CAD::Point p(3, 2);
	WilliamZhang::CAD::Point q(5, 6);
	WilliamZhang::CAD::Line  l(p, q);
	WilliamZhang::CAD::Circle c (p, 5.0);
	std::shared_ptr<WilliamZhang::CAD::Point>p1 = std::make_shared<WilliamZhang::CAD::Point>(p);
	std::shared_ptr<WilliamZhang::CAD::Point>p2 = std::make_shared<WilliamZhang::CAD::Point>(q);
	std::shared_ptr<WilliamZhang::CAD::Line>l3 = std::make_shared<WilliamZhang::CAD::Line>(p, q);
	std::shared_ptr<WilliamZhang::CAD::Circle>c4 = std::make_shared<WilliamZhang::CAD::Circle>(c);
	//Add them 
	newcomposite.PutShape(p1);
	newcomposite.PutShape(p2);
	newcomposite.PutShape(l3);
	newcomposite.PutShape(c4);
	//Print the first list 
	Print(newcomposite);
	//Create a new composite
	std::shared_ptr<WilliamZhang::CAD::ShapeComposite> shape_comp_pointer = std::make_shared<WilliamZhang::CAD::ShapeComposite>();
	shape_comp_pointer ->PutShape(p1);
	shape_comp_pointer->PutShape(p2);
	shape_comp_pointer ->PutShape(l3);
	shape_comp_pointer -> PutShape(c4);
	//Put the second composite into the first composite 
	newcomposite.PutShape(shape_comp_pointer);
	std::cout << "Adding with the addtional composite \n";
	Print(newcomposite);
	std::cout << "Size of the composite " <<  newcomposite.count() << std::endl;
	//The output will show a duplicate of two of the same list with the adtional shapes
	

}