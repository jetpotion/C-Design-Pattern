#include "RealAccount.hpp"
namespace WilliamZhang
{
	namespace AccountTypes
	{
		RealAccount::RealAccount(double balance):balance(balance), Account()
		{
		}
		RealAccount::~RealAccount()
		{
			balance = 0;
		}
		RealAccount::RealAccount(const RealAccount& source): balance(source.balance),Account(source)
		{
		}
		RealAccount::RealAccount(RealAccount&& target):balance(std::move(target.balance)),Account(target)
		{
		}
		void RealAccount::WidthDraw(double amount) noexcept(false)
		{
			if (amount > balance)
				throw WilliamZhang::Exceptions::NoFundsException(balance);
			else
				balance -= amount;
		}
		double RealAccount::getBalance() const noexcept(false)
		{
			return balance;
		}
		RealAccount& RealAccount::operator=(const RealAccount& source)
		{
			if (this == &source)
			{
				Account::operator=(source);
				return *this;
			}
			balance = source.balance;
			Account::operator=(source);
			return *this;
		}
		RealAccount& RealAccount::operator=(RealAccount&& target)
		{
			// TODO: insert return statement here
			if (this == &target)
			{
				Account::operator=(target);
				return *this;
			}
			balance = std::move(target.balance);
			Account::operator=(target);
			return *this;
		}
	}
}