#include "Shape.hpp"
#ifndef  POINT_HPP
#define  POINT_HPP


namespace WilliamZhang
{
	namespace CAD
	{
		class Point : public Shape
		{
		private:
			double m_x;
			double m_y;
		public:
			Point();  // Default constructor
			virtual ~Point()  override = default;
			Point(double xs, double ys);  // Constructor with coordinates
			Point(const Point& pt);  // Copy constructor
			Point(Point&& source) noexcept;
			Point& operator=(Point&& source) noexcept;
			Point& operator=(const Point& pt);  // Assignment operator
			double x() const;  // Return x coordinate
			double y() const ;  // Return y coordinate
			void x(double xs) ;  // Set x coordinate
			void y(double ys) ;  // Set y coordinate
			//Override 
			virtual std::string toString() const  override ;
			virtual std::shared_ptr<Shape> clone() const override;
		};
	}
}
#endif // ! POINT_HPP

