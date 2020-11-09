#include "Shape.hpp"
#include <list>
#include <memory>
#include <type_traits>
#ifndef  SHAPE_COMPOSITEHPP
#define SHAPE_COMPOSITEHPP

namespace WilliamZhang
{
	namespace CAD
	{
	
		using Iterator = std::list<std::shared_ptr<Shape>>::iterator;
		using Const_Iterator = std::list<std::shared_ptr<Shape>>::const_iterator;
		class ShapeComposite :public Shape {

	
		private:
			std::list<std::shared_ptr<Shape>>data;
		public:
			
			ShapeComposite();
			ShapeComposite(const ShapeComposite& source);
			ShapeComposite& operator=(const ShapeComposite& source);
			virtual ~ShapeComposite()  override = default;
			void PutShape(const std::shared_ptr<Shape> data);
			std::size_t count() const;
			Const_Iterator begin() const  ;
			Const_Iterator end() const ;
			std::string toString() const override;
			virtual std::shared_ptr<Shape> clone() const override;
			


		};
	}
}
#endif // ! SHAPE_COMPOSITEHPP

