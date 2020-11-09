#include "Point.hpp"
#include "Shape.hpp"
#ifndef CIRCLE_HPP
#define CIRCLE_HPP
namespace WilliamZhang
{
	namespace CAD
	{
		class Circle :public Shape
		{
		private:
			Point center;
			double radius;
		public:
			Circle();  // Default constructor
			virtual ~Circle()  override = default;
			 Circle(const Point& c, double r);  // Constructor point and radius
			Circle(const Circle& pt);  // Copy constructor
			Circle(Circle&& circ) noexcept; //Move semantics
			Circle& operator=(Circle&& source) noexcept; //Move assignment operator 
			Circle& operator=(const Circle& pt);  // Assignment operator
			const Point& CenterPoint() const ;  // Return center point
			double Radius() const ;  // Return radius
			void CenterPoint(const Point& centre);  // Set center point
			void Radius(double radius);  // Set radius
			virtual std::string toString() const  override;
			virtual std::shared_ptr<Shape> clone() const override ;
		};
	}
}
#endif // !CIRCLE_HPP

