#include "AbstractVisitor.hpp"
#include "PrintVisitor.hpp"
namespace WilliamZhang
{
	namespace CAD
	{
		PrintVisitor::PrintVisitor() : AbstractVisitor()
		{
		}
		PrintVisitor::PrintVisitor(const PrintVisitor& source) : AbstractVisitor(source)
		{
		}
		PrintVisitor& PrintVisitor::operator=(const PrintVisitor& source)
		{
			
			AbstractVisitor::operator=(source);
			return *this;
			// TODO: insert return statement here
		}
		void PrintVisitor::Visit(Point& point) const
		{
			//Just prints the point tostirng 
			std::cout << "Calling print visitor for point" << std::endl;
			std::cout << point.toString() << std::endl;
		}
		void PrintVisitor::Visit(Circle& circle) const
		{

			//just prints the circle 
			std::cout << "Calling the circle visior for lime" << std::endl;
			std::cout << circle.toString() << std::endl;
		}
		void PrintVisitor::Visit(Line& line) const
		{
			std::cout << "Printing out Print vistior for line" << std::endl;
			Point start = line.p1();
			Point end = line.p2();
			//Create smart pointer to with the visitor
			std::shared_ptr<AbstractVisitor>visitor = std::make_shared<PrintVisitor>();

			//Allow the start/end point take in the visotor 
			start.Accept(visitor);
			end.Accept(visitor);
		}
		void PrintVisitor::Visit(ShapeComposite& compost) const
		{
			//Loop through the list and make sure that all of them accept a vistor 
			std::cout << "Now calling Shape composite " << std::endl;
			std::shared_ptr<AbstractVisitor>visitor = std::make_shared<PrintVisitor>();
			for (auto it = compost.begin(); it != compost.end(); it++)
			{
				//Each shape will call the visit function on this its own 
				(*it)->Accept(visitor);
			}
		}
	}
}