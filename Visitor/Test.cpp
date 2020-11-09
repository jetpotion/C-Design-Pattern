#include "Circle.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "ShapeComposite.hpp"
#include "TranslateVisitor.hpp"
#include "PrintVisitor.hpp"
int main()
{
	//Create two different types of visitors 
	std::shared_ptr<WilliamZhang::CAD::AbstractVisitor> visitor_1 = std::make_shared<WilliamZhang::CAD::TransLateVisitor>(5, 6);
	std::shared_ptr<WilliamZhang::CAD::AbstractVisitor> visitor_2 = std::make_shared<WilliamZhang::CAD::PrintVisitor>();
	//Create pointers to create sshape pointer
	WilliamZhang::CAD::Point p1(3, 2);
	WilliamZhang::CAD::Point p2(4, 8);

	//Create the shapes 
	std::shared_ptr<WilliamZhang::CAD::Shape>point_1 = std::make_shared<WilliamZhang::CAD::Point>(p1);
	std::shared_ptr<WilliamZhang::CAD::Shape>point_2 = std::make_shared<WilliamZhang::CAD::Point>(p2);
	//Form complex shapes like lines and circles from points 
	std::shared_ptr<WilliamZhang::CAD::Shape> line = std::make_shared<WilliamZhang::CAD::Line>(p1, p2);
	std::shared_ptr<WilliamZhang::CAD::Shape>circle = std::make_shared<WilliamZhang::CAD::Circle>(p1, 15);
	
	
	
	//Create one composite
	std::shared_ptr<WilliamZhang::CAD::ShapeComposite>  shape_compost = std::make_shared<WilliamZhang::CAD::ShapeComposite>();;
	shape_compost ->PutShape(point_1);
	shape_compost ->PutShape(point_2);
	shape_compost ->PutShape(line);
	shape_compost ->PutShape(circle);

	//Create another composite 
	std::shared_ptr<WilliamZhang::CAD::ShapeComposite> shape_compost_1 = std::make_shared<WilliamZhang::CAD::ShapeComposite>();
	shape_compost_1 ->PutShape(point_1);
	shape_compost_1 ->PutShape(point_2);
	shape_compost_1 ->PutShape(line);
	shape_compost_1 ->PutShape(circle);
	
	//Put the second composite into the first
	shape_compost->PutShape(shape_compost_1);
	//Then call accept 
	std::shared_ptr<WilliamZhang::CAD::Shape> shape_1 = shape_compost;
	//Call the accept function with the 2 visitors. The indviidual line/circle/point accept function will also be tested in the process 
	shape_1->Accept(visitor_1);
	shape_1->Accept(visitor_2);


	
}