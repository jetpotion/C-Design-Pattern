#include "OriginPoint.hpp"
namespace WilliamZhang
{
	namespace CAD
	{
		//Default constructor 
		OriginPoint::OriginPoint(): Singleton<Point>()
		{
		}
		//Destructor
		OriginPoint::~OriginPoint()
		{
		}
		//Point copy constructor 
		OriginPoint::OriginPoint(const OriginPoint& point):Singleton<Point>(point)
		{
		}
		OriginPoint& OriginPoint::operator=(const OriginPoint& point)
		{
				Singleton<Point>::operator=(point);
				return *this;
			// TODO: insert return statement here
		}
	}
}