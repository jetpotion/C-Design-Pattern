#include "ShapeFactory.hpp"
#ifndef  CONSOLE_SHAPEFACTORYHPP
#define CONSOLE_SHAPEFACTORYHPP
namespace WilliamZhang
{
	namespace Factories
	{
		class ConsoleShapeFactory : public ShapeFactory {
		
		
		public:
			ConsoleShapeFactory();
			virtual ~ConsoleShapeFactory();
			ConsoleShapeFactory(const ConsoleShapeFactory& source);
			ConsoleShapeFactory(ConsoleShapeFactory&& target);
			ConsoleShapeFactory& operator=(const ConsoleShapeFactory& source);
			ConsoleShapeFactory& operator=(ConsoleShapeFactory&& target);
			virtual std::shared_ptr<WilliamZhang::CAD::Shape> createShape() const override;
			virtual std::shared_ptr<WilliamZhang::CAD::Shape> createCircle() const override;
			virtual std::shared_ptr<WilliamZhang::CAD::Shape> createLine() const override;
			virtual std::shared_ptr<WilliamZhang::CAD::Shape> createPoint() const  override;
		};
		
		
	}
}

#endif // ! CONSOLE_SHAPEFACTORYHPP