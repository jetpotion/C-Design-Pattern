#include "AbstractVisitor.hpp"
#ifndef  TRANSLATE_VISITORHPP
#define TRANSLATE_VISITORHPP
namespace WilliamZhang
{
	namespace CAD
	{
		class TransLateVisitor : public AbstractVisitor
		{
		private:
			double  x;	//The amount to change the xcoordinate 
			double  y; //The amount to change the ycoordinate 
		public:
			//Standard constructors/destructors/assignment operator
			//It has one overloaded constructor to set the x and y coordinate 
			TransLateVisitor();
			TransLateVisitor(double x, double y);
			TransLateVisitor(const TransLateVisitor& source);
			virtual ~TransLateVisitor() override = default;
			virtual void Visit(Point& point) const  override;
			virtual void Visit(Circle& circle)const override ;
			virtual void Visit(Line& line) const  override ;
			virtual void Visit(ShapeComposite& compost) const override ;
			TransLateVisitor& operator=(const TransLateVisitor& source);
		};
	}
}
#endif // ! TRANSLATE_VISITORHPP

