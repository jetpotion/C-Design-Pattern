#include "Account.hpp"
#include "Exception.hpp"
#ifndef REALACCOUNT_HPP
#define REALACCOUNT_HPP
namespace WilliamZhang
{
	namespace AccountTypes
	{
		class RealAccount :public Account
		{
		private:
			double balance;
		public:
			RealAccount() = default;
			explicit RealAccount(double balance);
			virtual ~RealAccount() override ;
			RealAccount(const RealAccount& source);
			RealAccount(RealAccount&& target);
			virtual void WidthDraw(double amount) noexcept(false) override;
			virtual double getBalance() const noexcept(false) override;
			RealAccount& operator=(const RealAccount& source);
			RealAccount& operator=(RealAccount&& target);
		};
	}
}
#endif // !REALACCOUNT_HPP

