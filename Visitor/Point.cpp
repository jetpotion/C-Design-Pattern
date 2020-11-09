#include "Point.hpp"
#include "AbstractVisitor.hpp"
namespace WilliamZhang
{
	namespace CAD
	{
		Point::Point(): Shape(), m_x(0.0),m_y(0.0)
		{

		}
		Point::Point(double xs, double ys):Shape(),m_x(xs),m_y(ys)
		{
		}
		Point::Point(const Point& pt): Shape(pt), m_x(pt.m_x),m_y(pt.m_y)
		{
		}
		Point::Point(Point&& source) noexcept: Shape(source),m_x(std::move(source.m_x)),m_y(std::move(source.m_y))
		{
		}
		Point& Point::operator=(Point&& source) noexcept
		{
			if (this == &source)
			{
				Shape::operator=(source);
				return *this;
			}
			m_x = std::move(source.m_x);
			m_y = std::move(source.m_y);
			Shape::operator=(source);
			return *this;
			
		}
		Point& Point::operator=(const Point& pt)
		{
			// TODO: insert return statement here
			if (this == &pt)
			{
				Shape::operator=(pt);
				return *this;
			}
			m_x = pt.m_x;
			m_y = pt.m_y;
			Shape::operator=(pt);
			return *this;
		}
		double Point::x() const
		{
			return m_x;
		}
		double Point::y() const 
		{
			return m_y;
		}
		void Point::x(double xs) 
		{
			m_x = xs;
		}
		void Point::y(double ys)
		{
			m_y = ys;
		}
		std::string Point::toString() const
		{
			std::stringstream ss;
			ss << "(" <<  x() << " " << y() << ")";
			return ss.str();
		}
		std::shared_ptr<Shape> Point::clone() const
		{
			return std::make_shared<Point>(*this);
		}
		void Point::Accept(const std::shared_ptr<AbstractVisitor> visitor) const
		{
			Point p = *this;
			visitor -> Visit(p);
		}
	}
}