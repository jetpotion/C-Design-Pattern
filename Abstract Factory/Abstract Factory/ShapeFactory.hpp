#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
#include <unordered_map>
#include <algorithm>
#ifndef  SHAPE_FACTORYHPP
#define SHAPE_FACTORYHPP
namespace WilliamZhang
{
	namespace Factories
	{
		enum ShapeType
		{
			CIRCLE,
			LINE,
			POINT
		};
		class ShapeFactory {
		protected:
			
			static std::unordered_map<std::string, WilliamZhang::Factories::ShapeType> data;
			
		public:
			ShapeFactory() = default;
			virtual ~ShapeFactory() = default;
			ShapeFactory(const ShapeFactory& source) = default;
			ShapeFactory(ShapeFactory&& target) = default;
			ShapeFactory& operator=(const ShapeFactory& source) = default;
			ShapeFactory& operator=(ShapeFactory&& target) = default;
			virtual std::shared_ptr<WilliamZhang::CAD::Shape> createShape() const = 0;
			virtual std::shared_ptr<WilliamZhang::CAD::Shape> createCircle() const  = 0;
			virtual std::shared_ptr<WilliamZhang::CAD::Shape> createLine() const = 0 ;
			virtual std::shared_ptr<WilliamZhang::CAD::Shape> createPoint() const = 0;
		};
		
		
	}
}
#endif


