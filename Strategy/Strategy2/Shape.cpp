#include "Shape.hpp"

std::ostream& operator<<(std::ostream& os, const Shape& shape)
{
	os << shape.toString() << " ";
	return os;
}