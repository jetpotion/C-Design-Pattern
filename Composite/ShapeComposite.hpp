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
			
			ShapeComposite(); //Default constructor 
			ShapeComposite(const ShapeComposite& source) = delete ; //Deleted copy construcotr
			ShapeComposite& operator=(const ShapeComposite& source)  =  delete ; //Deleteed assignemnt operator 
			virtual ~ShapeComposite()  override = default; //Overriden destructor
			void PutShape(const std::shared_ptr<Shape>& data); //A member function to put the shape 
			std::size_t count() const; //Gets the size of the std::list 
			Const_Iterator begin() const  ;		//Returns the beginning of the list  
			Const_Iterator end() const  ;		//returns the beginning of the list 
			std::string toString() const override; //Calls the tostring method on each of the shapes in the lst 
	
			


		};
	}
}
#endif // ! SHAPE_COMPOSITEHPP

