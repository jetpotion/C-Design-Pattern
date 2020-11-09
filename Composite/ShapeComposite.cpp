#include "ShapeComposite.hpp"
namespace WilliamZhang
{
	namespace CAD
	{
		ShapeComposite::ShapeComposite(): Shape()
		{
		}
		void ShapeComposite::PutShape(const std::shared_ptr<Shape>& data_1)
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
			//Calls the tostring on each of the functions itself 
			std::string string;
			//Start looping through the array and get the tostring representation of each element in the list 
			for (Const_Iterator it = data.begin(); it != data.end(); it++)\
			{

				string.append((*it)->toString() + "\n");
			}
			return string;
		}
	}
}
