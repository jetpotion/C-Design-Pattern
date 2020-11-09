#include "Shape.hpp"
namespace WilliamZhang
{
	namespace CAD
	{
		
		std::ostream& operator<<(std::ostream& os, const Shape& shape)
		{
			os << shape.toString() << " ";
			return os;
		}
	

	}
}
