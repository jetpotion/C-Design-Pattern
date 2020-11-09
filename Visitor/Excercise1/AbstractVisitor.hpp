
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "ShapeComposite.hpp"
#ifndef  ABSTRACT_VISITORHPP
#define ABSTRACT_VISITORHPP
namespace WilliamZhang
{
	namespace CAD
	{
		class AbstractVisitor
		{
		public:
			//Standard constructors/destructors/assigment operators 
			AbstractVisitor() = default;
			AbstractVisitor(const AbstractVisitor& visitor) = default;
			virtual ~AbstractVisitor() = default;
			AbstractVisitor& operator=(const AbstractVisitor& visitor) = default;
			//Visit functions for point/line circle/composite 
			virtual void Visit(Point& point) const = 0;
			virtual void Visit(Circle& circle)const = 0;
			virtual void Visit(Line& line) const = 0;
			virtual void Visit(ShapeComposite& compost) const = 0;
		};
	}
}
#endif // ! ABSTRACT_VISITORHPP
