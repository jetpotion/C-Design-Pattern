#include "Shape.hpp"
#include  <memory>
#ifndef SHAPE_DECORATORHPP
#define SHAPE_DECORATORHPP
using namespace WilliamZhang::CAD;
namespace WilliamZhang
{
	namespace Decorator
	{
		class ShapeDecorator : public Shape
		{
		private:
			std::shared_ptr<Shape>m_shape;
			//Standard constructors/destructors 
		public:
			ShapeDecorator();			
			explicit ShapeDecorator(const std::shared_ptr<Shape>obj);
			virtual ~ShapeDecorator() override;
			ShapeDecorator(const ShapeDecorator& source);
			ShapeDecorator& operator=(const ShapeDecorator& source);
			ShapeDecorator(ShapeDecorator&& target);
			ShapeDecorator& operator=(ShapeDecorator&& source);
			std::shared_ptr<Shape> getShape() const;	//Returns the shape pointer 
			virtual std::string toString() const override; //The tostring representation of the shape 
			void setShape(const std::shared_ptr<Shape> source); //Set the shape 
		};
	}
}

#endif // !SHAPE_DECARATORHPP

