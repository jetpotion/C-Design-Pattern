#include "Circle.hpp"
namespace WilliamZhang
{
	namespace CAD
	{
		Circle::Circle(): Shape(), radius(0.0), center(0.0,0.0)
		{
		}
		Circle::Circle(const Point& c, double r): Shape(), center(c),radius(r)
		{
		}
		Circle::Circle(const Circle& pt): Shape(pt),center(pt.center), radius(pt.radius)
		{
		}
		Circle::Circle(Circle&& circ)noexcept: Shape(circ),center(std::move(circ.center)),radius(std::move(circ.radius))
		{
		}
		Circle& Circle::operator=(Circle&& source) noexcept
		{
			if (this == &source)
			{
				Shape::operator=(source);
				return *this;
			}
			center = std::move(source.center);
			radius = std::move(source.radius);
			Shape::operator=(source);
			return *this;
			// TODO: insert return statement here
		}
		Circle& Circle::operator=(const Circle& pt)
		{
			if (this == &pt)
			{
				Shape::operator=(pt);
				return *this;
			}
			center = pt.center;
			radius = pt.radius;
			Shape::operator=(pt);
			return *this;

			// TODO: insert return statement here
		}
		const Point& Circle::CenterPoint() const
		{
			return center;
			// TODO: insert return statement here
		}
		 double Circle::Radius() const 
		{
			return radius;
		}
		void Circle::CenterPoint(const Point& centre)
		{
			center = centre;
		}
		void Circle::Radius(double rad)
		{
			radius = rad;
		}
		std::string Circle::toString() const
		{
			std::string string ("Circle:\nCenterPoint:" + center.toString() +  "\nRadius: ");
			string.append(std::to_string(radius));
			return string ;
		}
	}
}