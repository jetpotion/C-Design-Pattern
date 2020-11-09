#include <string>
#ifndef  ACCOUNT_HPP
#define ACCOUNT_HPP

namespace WilliamZhang
{
	namespace AccountTypes
	{
		class Account
		{
		public:
			Account() = default;
			virtual ~Account() = default;
			Account(const Account& source) = default ;
			Account(Account&& target) = default ;
			Account& operator=(const Account& source);
			Account& operator=(Account&& target)= default;
			virtual void WidthDraw(double amount) noexcept(false)  = 0;
			virtual double getBalance()  const noexcept(false)  = 0;
		};
	}
}
#endif // ! ACCOUNT_HPP

