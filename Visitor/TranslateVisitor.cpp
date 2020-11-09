#include "TranslateVisitor.hpp"
namespace WilliamZhang
{
	namespace CAD
	{
		//Initialize them to zero transation 
		TransLateVisitor::TransLateVisitor():x(0),y(0)
		{
		}
		//set the x and y coordinates 
		TransLateVisitor::TransLateVisitor(double x, double y): x(x),y(y)
		{
		}
		TransLateVisitor::TransLateVisitor(const TransLateVisitor& source): AbstractVisitor(), x(source.x),y(source.y)
		{
		}
		void TransLateVisitor::Visit(Point& point) const
		{
			//Translate the point of the point by x and y amounts and then print 
			std::cout << "Now calling the TranslateVistor for Point(Print out transformation)" << std::endl;
			point.x(point.x() + x);
			point.y(point.y() + y);
			std::cout << point << std::endl;
		}
		void TransLateVisitor::Visit(Circle& circle) const
		{
			//Translate the center  point of the point by x and y amounts and then print
			std::cout << "Now calling the Translate vistior for circle(Print out transformation)" << std::endl;
			Point center = circle.CenterPoint();
			center.x(center.x() + x);
			center.y(center.y() + y);
			circle.CenterPoint(center);
			std::cout << circle << std::endl;
		}
		void TransLateVisitor::Visit(Line& line) const
		{
			//Translate the start and end points of line by the x and y coordinates 
			std::cout << "Now calling the Translate visitor for point(Print out the transformation of line)"<<  std::endl;
			Point start = line.p1();
			Point end = line.p2();
			start.x(start.x() + x);

			start.y(start.y() + y);
			end.x(end.x() + x);
			end.y(end.y() + y);
			line.p1(start);
			line.p2(end);
			std::cout << line << std::endl;

		}
		void TransLateVisitor::Visit(ShapeComposite& compost) const
		{
			//Make sure the entire list accepts the vistor 
			std::cout << "Translate visitor for Shape composite(Print out all translations" << std::endl;
			std::shared_ptr<AbstractVisitor>visitor = std::make_shared<TransLateVisitor>(x, y);
			for (auto it = compost.begin(); it != compost.end(); it++)
			{
				
					(*it)->Accept(visitor);
			}
			std::cout << compost << std::endl;
		}
		TransLateVisitor& TransLateVisitor::operator=(const TransLateVisitor& source)
		{
			if (this == &source)
			{
				AbstractVisitor::operator=(source);
				return *this;
			}
			x = source.x;
			y = source.y;
			return  *this;
			// TODO: insert return statement here
		}
	}
}