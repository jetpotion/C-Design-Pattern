#include "NameDecorator.hpp"
namespace WilliamZhang
{
    namespace Decorator
    {
        NameDecorator::NameDecorator() : ShapeDecorator()
        {
        }

        NameDecorator::NameDecorator(const std::shared_ptr<Shape> obj, const std::string& m_name) : ShapeDecorator(obj), name(m_name)
        {
        }

        NameDecorator::~NameDecorator()
        {
        }

        NameDecorator::NameDecorator(const NameDecorator& source) : ShapeDecorator(source), name(source.name)
        {
        }

        NameDecorator& NameDecorator::operator=(const NameDecorator& source)
        {
            if (this == &source)
            {
                ShapeDecorator::operator=(source);
                return *this;
            }
            name = source.name;
            ShapeDecorator::operator=(source);
            return *this;
        }

        NameDecorator::NameDecorator(NameDecorator&& target) : ShapeDecorator(target), name(std::move(target.name))
        {
        }

        NameDecorator& NameDecorator::operator=(NameDecorator&& source)
        {
            if (this == &source)
            {
                ShapeDecorator::operator=(source);
                return *this;
            }
            name = std::move(source.name);
            ShapeDecorator::operator=(source);
            return *this;
        }

        std::string NameDecorator::getName() const
        {
            return name;
        }

        void NameDecorator::setName(const std::string& source)
        {
            name = source;
        }

        std::string NameDecorator::toString() const
        {
            std::string description("The name of the Shape: ");
            description.append(name + "\n");
            description.append(ShapeDecorator::toString());
            return description;

        }

        std::shared_ptr<Shape> NameDecorator::clone() const
        {
            return std::make_shared<NameDecorator>(*this);
        }
    }
}