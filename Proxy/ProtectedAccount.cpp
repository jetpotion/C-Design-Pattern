#include "ProtectedAccount.hpp"
namespace WilliamZhang
{
	namespace AccountTypes
	{
		ProtectedAccount::~ProtectedAccount()
		{
			
			real_account.reset();
		}
		ProtectedAccount::ProtectedAccount(double balance, const std::string& password): Account(), real_account(std::make_shared<RealAccount>(balance)),password(password)
		{
		}
		ProtectedAccount::ProtectedAccount(const ProtectedAccount& source): Account(source),real_account(source.real_account),password(source.password)
		{
		}
		ProtectedAccount& ProtectedAccount::operator=(const ProtectedAccount& source)
		{
			if (this == &source)
			{
				Account::operator=(source);
				return *this;
			}
			real_account = source.real_account;
			password = source.password;
			Account::operator=(source);
			return *this;
			// TODO: insert return statement here
		}
		ProtectedAccount::ProtectedAccount(ProtectedAccount&& target):Account(target), real_account(std::move(target.real_account)), password(std::move(target.password))
		{
		}
		ProtectedAccount& ProtectedAccount::operator=(ProtectedAccount&& target)
		{
			if (this == &target)
			{
				Account::operator=(target);
				return *this;
			}
			real_account = std::move(target.real_account);
			password = std::move(target.password);
			Account::operator=(target);
			return *this;
			// TODO: insert return statement here
		}
		void ProtectedAccount::WidthDraw(double amount) noexcept(false)
		{
			//Will use the withdraw function
			real_account->WidthDraw(amount);
		}
		double ProtectedAccount::getBalance() const noexcept(false)
		{
			std::cout << "Please type the password" << std::endl;
			std::string getpassword;
			std::getline(std::cin, getpassword);
			if (getpassword != password)
				throw WilliamZhang::Exceptions::NoAccessException();
			//otherwise do this;
			return real_account ->getBalance();
		}
	}
}