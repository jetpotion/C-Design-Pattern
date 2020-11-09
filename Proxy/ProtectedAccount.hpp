#include "Account.hpp"
#include "RealAccount.hpp"
#include "Exception.hpp"
#ifndef PROTECTED_ACCOUNTHPP
#define PROTECTED_ACCOUNTHPP
namespace WilliamZhang
{
	namespace AccountTypes
	{
		class ProtectedAccount :public Account
		{
		private:
			std::shared_ptr<Account>real_account;
			std::string password;
		public:
			ProtectedAccount() = default;
			virtual ~ProtectedAccount() override ;
			ProtectedAccount(double balance, const std::string& password);
			ProtectedAccount(const ProtectedAccount& source);
			ProtectedAccount& operator=(const ProtectedAccount& source);
			ProtectedAccount(ProtectedAccount&&target);
			ProtectedAccount& operator=(ProtectedAccount&& target);
			virtual void WidthDraw(double amount) noexcept(false) override;
			virtual double getBalance()  const noexcept(false) override ;
		};
	}
}
#endif // !PROTECTED_ACCOUNTHPP
