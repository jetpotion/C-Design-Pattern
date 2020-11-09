#include "AbstractVisitor.hpp"
#ifndef  PRINTVISITOR_HPP
#define PRINTVISITOR_HPP
namespace WilliamZhang
{
	namespace CAD
	{
		class PrintVisitor : public AbstractVisitor
		{
		public:
			PrintVisitor();
			PrintVisitor(const PrintVisitor& source);
			virtual ~PrintVisitor() override  = default;
			PrintVisitor& operator=(const PrintVisitor& source);
			virtual void Visit(Point& point) const  override;
			virtual void Visit(Circle& circle)const override ;
			virtual void Visit(Line& line) const override ;
			virtual void Visit(ShapeComposite& compost) const  override ;
		};

	}
}
#endif // ! PRINTVISITOR_HPP
