#include "Account.hpp"
namespace WilliamZhang
{
	namespace AccountTypes
	{
		Account& Account::operator=(const Account& source)
		{
			if (this == &source)
			{
				return *this;
			}
			return *this;
		}
		
	}
}