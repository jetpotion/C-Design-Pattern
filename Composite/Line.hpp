#include "Point.hpp"
#include "Shape.hpp"
#ifndef  LINE_HPP
#define LINE_HPP

namespace WilliamZhang
{
	namespace CAD
	{
		class Line : public Shape
		{
		private:
			Point m_p1;
			Point m_p2;
		public:
			 Line();  // Default constructor
			virtual ~Line()  override = default;
			Line(const Point& pt1s, const Point& pt2s);  // Constructor with points
			Line(Line&& target) noexcept;

			Line(const Line& pt);  // Copy constructor
			Line& operator=(Line&& pt) noexcept;
			Line& operator=(const Line& pt);  // Assignment operator
			const Point& p1() const ;  // Return point 1
			const Point& p2() const ;  // Return point 2
			void p1(const Point& ps);  // Set point 1
			void p2(const Point& ps);  // Set point 2
			virtual std::string toString() const override;
		};
	}
}
#endif // ! LINE_HPP

