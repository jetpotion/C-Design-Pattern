#include "Line.hpp"
namespace WilliamZhang
{
	namespace CAD
	{
		 Line::Line() : Shape(),m_p1(0,0), m_p2(0,0)
		{
		}
		Line::Line(const Point& pt1s, const Point& pt2s): Shape(),m_p1(pt1s),m_p2(pt2s)
		{
		}
		Line::Line(Line&& target) noexcept: Shape(target),m_p1(std::move(target.m_p1)),m_p2(std::move(target.m_p2))
		{
		}
		Line::Line(const Line& pt): Shape(pt),m_p1(pt.m_p1),m_p2(pt.m_p2)
		{
		}
		Line& Line::operator=(Line&& pt) noexcept
		{
			if (this == &pt)
			{
				Shape::operator=(pt);
				return *this;
			}
			m_p1 = std::move(pt.m_p1);
			m_p2 = std::move(pt.m_p2);
			Shape::operator=(pt);
			return *this;
			// TODO: insert return statement here
		}
		Line& Line::operator=(const Line& pt)
		{
			
			if (this == &pt)
			{
				Shape::operator=(pt);
				return *this;
			}
			m_p1 = pt.m_p1;
			m_p2 = pt.m_p2;
			Shape::operator=(pt);
			return *this;
			// TODO: insert return statement here
		}
		const Point& Line::p1() const
		{
			return m_p1;
			// TODO: insert return statement here
		}
		const Point& Line::p2() const
		{ 
			return m_p2;
			// TODO: insert return statement here
		}
		void Line::p1(const Point& ps) 
		{
			m_p1 = ps;
		}
		void Line::p2(const Point& ps)
		{
			m_p2 = ps;
		}
		std::string Line::toString() const 
		{
			//Prints out the Line 
			std::string string("Line\nStart Pos:");
			string.append(p1().toString());
			string.append("\t");
			string.append("End Pos:");
			string.append(p2().toString());
			return string;
		}
	}
}
