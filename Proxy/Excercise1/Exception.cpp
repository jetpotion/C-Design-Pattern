#include "Exception.hpp"



WilliamZhang::Exceptions::NoFundsException::NoFundsException(double fund) : funds(fund)
{
}

WilliamZhang::Exceptions::NoFundsException::NoFundsException(const NoFundsException& e):Exception(e), funds(e.funds)
{
 
}

const std::string WilliamZhang::Exceptions::NoFundsException::GetMessage() const
{
    std::string message("You do not have the funds to withdraw that amount:\n");
    std::string error("You only have this much funds: ");
    error.append(std::to_string(funds));
    message.append(error);
    return message;
}

const std::string WilliamZhang::Exceptions::NoAccessException::GetMessage() const
{
    return "You do not have access to this account. You did not type the correct password ";
}
