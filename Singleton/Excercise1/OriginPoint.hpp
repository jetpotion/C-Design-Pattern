#ifndef  ORIGINPOINT_HPP
#define ORIGINPOINT_HPP
#include "Singleton/Singleton.hpp"
#include "Point.hpp"
namespace WilliamZhang
{
	namespace CAD
	{
		class OriginPoint : public Singleton<WilliamZhang::CAD::Point>
		{

		public:
			OriginPoint(); //Origin point default construcotr 
			virtual ~OriginPoint(); //destructor 
			OriginPoint(const OriginPoint& point); //constructor 
			OriginPoint& operator=(const OriginPoint& point);// assignment operator 


		};
	}
}
#endif // ! ORIGINPOINT_HPP
