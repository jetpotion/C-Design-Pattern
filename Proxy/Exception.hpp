#include <iostream>
#include <string>

#ifndef  EXCEPTION_HPP
#define  EXCEPTION_HPP
namespace WilliamZhang
{

	namespace Exceptions
	{
		class Exception
		{
		public:
			Exception() = default;
			virtual ~Exception() = default;
			Exception(const Exception& e) = default ;
			virtual const std::string GetMessage() const = 0;
			Exception& operator=(const Exception& e) = default ;
		};
	}
}
#endif //  EXCEPTION_HPP
#ifndef NOFUNDSEXCEPTION_HPP
#define NOFUNDSEXCEPTION_HPP
namespace WilliamZhang
{
	namespace Exceptions
	{
		class NoFundsException : Exception
		{
		private:
			double funds;
		public:
			NoFundsException() = delete ;
			NoFundsException(double fund);
			NoFundsException(const NoFundsException& e) ;
			virtual ~NoFundsException() override = default;
			virtual const std::string GetMessage() const override;

		};
	}
}
#endif 
#ifndef NOACCESSEXCEPTION_HPP
namespace WilliamZhang
{
	namespace Exceptions
	{
		class NoAccessException : Exception
		{

		public:
			NoAccessException() = default;
			NoAccessException(const NoAccessException& e) = default ;
			virtual ~NoAccessException() override = default;
			virtual const std::string GetMessage() const override;
		};
	}
}
#define NOACCESSEXCEPTION_HPP
#endif // !NOACCESSEXCEPTION_HPP



