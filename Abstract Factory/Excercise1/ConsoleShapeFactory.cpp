#include "ConsoleShapeFactory.hpp"
namespace WilliamZhang
{
	namespace Factories
	{

		//Create a map for the CIRCLE/LINE POINT shape factory 
		std::unordered_map<std::string, ShapeType>ConsoleShapeFactory::data = {
			{"CIRCLE", CIRCLE},
			{"LINE",LINE},
			{"POINT",POINT}
		};
		ConsoleShapeFactory::ConsoleShapeFactory(): ShapeFactory()
		{
		}
		ConsoleShapeFactory::~ConsoleShapeFactory()
		{
		}
		ConsoleShapeFactory::ConsoleShapeFactory(const ConsoleShapeFactory& source): ShapeFactory(source)
		{
		}
		ConsoleShapeFactory::ConsoleShapeFactory(ConsoleShapeFactory&& target): ShapeFactory(target)
		{
		}
		ConsoleShapeFactory& ConsoleShapeFactory::operator=(const ConsoleShapeFactory& source)
		{
			ShapeFactory::operator=(source);
			return *this;
			// TODO: insert return statement here
		}
		ConsoleShapeFactory& ConsoleShapeFactory::operator=(ConsoleShapeFactory&& target)
		{
			// TODO: insert return statement here
			ShapeFactory::operator=(target);
			return *this;
		}
		//The shape factory create shape function 
		std::shared_ptr<WilliamZhang::CAD::Shape >ConsoleShapeFactory::createShape() const
		{
			//Ask for the shape 
			std::cout << "What shape do you want? " << std::endl;
			std::string input;
			std::getline(std::cin, input);
			//Transform into upper case 
			std::transform(input.begin(), input.end(), input.begin(), std::toupper);
			
			//Find if there is a shape 
			if (data.find(input) == data.end())
			{
				std::cout << "You didnt type any of the options.We will just give you nullptr " << std::endl;
				return nullptr;
			}
			//Switch through the various inputs 
			switch (data[input])
			{
			case CIRCLE:
				std::cout << "A circle has been created" << std::endl;
				return createCircle();
			case LINE:
				std::cout << "A line has been created" << std::endl;
				return createLine();
			case POINT:
				std::cout << "A point has been created" << std::endl;
				return createPoint();
			}
			
		}
		std::shared_ptr<WilliamZhang::CAD::Shape> ConsoleShapeFactory::createCircle() const
		{
		
			return std::make_shared < WilliamZhang::CAD::Circle>();
		}
		std::shared_ptr<WilliamZhang::CAD::Shape> ConsoleShapeFactory::createLine() const
		{
			return std::make_shared<WilliamZhang::CAD::Line>();
		}
		std::shared_ptr<WilliamZhang::CAD::Shape> ConsoleShapeFactory::createPoint() const
		{
			return std::make_shared<WilliamZhang::CAD::Point>();
		}
	}
}