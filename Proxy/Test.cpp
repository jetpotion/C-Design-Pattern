#include "Exception.hpp"
#include "ProtectedAccount.hpp"
#include "Account.hpp"

int main()
{
	std::string password("WILLXYZ123");
	std::shared_ptr<WilliamZhang::AccountTypes::Account>currentaccount = std::make_shared<WilliamZhang::AccountTypes::ProtectedAccount>(1500,password);
	try
	{
		double val = currentaccount->getBalance();
		std::cout << "You currently have this much:" << val << std::endl;
		currentaccount->WidthDraw(500);
		val = currentaccount->getBalance();
		std::cout << "You currently have this much:" << val << std::endl;
		currentaccount->WidthDraw(1200);
	}
	//Catch both the exceptions and print what went wrong if some thing happened 
	catch(const WilliamZhang::Exceptions::NoAccessException& error)
	{
		std::cout << error.GetMessage() << std::endl;
	}
	catch (const WilliamZhang::Exceptions::NoFundsException& error)
	{
		std::cout << error.GetMessage() << std::endl;
	}
}