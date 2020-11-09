#include "ShapeDecorator.hpp"
#include  <memory>
#ifndef NAME_DECORATORHPP
#define NAME_DECORATORHPP
namespace WilliamZhang
{
	namespace Decorator
	{
		class NameDecorator : public ShapeDecorator
		{
		private:
			std::string name;
		public:
			NameDecorator(); //Same destructors/constructors and assignment operator 
			NameDecorator(const std::shared_ptr<Shape>obj, const std::string& m_name);
			virtual ~NameDecorator() override;
			NameDecorator(const NameDecorator& source);
			NameDecorator& operator=(const NameDecorator& source);
			NameDecorator(NameDecorator&& target);
			NameDecorator& operator=(NameDecorator&& source);
			std::string  getName() const;	//Returns the name of the decorator 
			void setName(const std::string& source); //Sets the name of the decorator  
			virtual std::string toString() const override; //TO string representation of the name decorator 
			virtual std::shared_ptr<Shape> clone() const  override;
		};
	}
}
#endif // !SHAPE_DECARATORHPP