#include "ShapeComposite.hpp"
namespace WilliamZhang
{
	namespace CAD
	{
		ShapeComposite::ShapeComposite(): Shape()
		{
		}
		ShapeComposite::ShapeComposite(const ShapeComposite& source): Shape(source)
		{
			//Loop through and put shapes with the cloned object 
			for (Const_Iterator it = source.begin(); it != source.end(); it++)
			{
				PutShape((*it) -> clone());
			}
		}
		ShapeComposite& ShapeComposite::operator=(const ShapeComposite& source)
		{
			//Prevent self reassignment 
			if (this == &source)
			{
				Shape::operator=(source);
				return *this;
			}
			//First create new list 
			std::list<std::shared_ptr<Shape>>newlist;
			//Call clone on each of the element 
			for (Const_Iterator obj = source.begin(); obj != source.end(); obj++)
			{
				newlist.push_back((*obj)->clone());
			}
			data = newlist;
			Shape::operator=(source);
			return *this;
		}
		void ShapeComposite::PutShape(const std::shared_ptr<Shape> data_1)
		{
			data.push_back(data_1);
		}
		std::size_t ShapeComposite::count() const
		{
			
			return data.size();
			
		}
		Const_Iterator ShapeComposite::begin() const 
		{
		
			return data.begin();
		}
		Const_Iterator ShapeComposite::end() const 
		{
			return data.end();
		}
		std::string ShapeComposite::toString() const
		{
			std::string string;
			for (Const_Iterator it = data.begin(); it != data.end(); it++)\
			{

				string.append((*it)->toString() + "\n");
			}
			return string;
		}
		std::shared_ptr<Shape> ShapeComposite::clone() const
		{
			std::shared_ptr<ShapeComposite>newcomposite = std::make_shared<ShapeComposite>();
			//Put a clone method and cop  each of the data into new coposite 
			for (std::shared_ptr<Shape> object : data)
			{
				//Get the clone object 
				newcomposite ->PutShape(object->clone());
			}
			return newcomposite;
		}
	}
}
