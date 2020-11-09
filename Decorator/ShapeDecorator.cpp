#include "ShapeDecorator.hpp"
namespace WilliamZhang
{
    namespace Decorator
    {
        ShapeDecorator::ShapeDecorator() : Shape(), m_shape(nullptr)
        {
        }

        ShapeDecorator::ShapeDecorator(const std::shared_ptr<Shape> obj) : Shape(), m_shape(obj)
        {
        }

        ShapeDecorator::~ShapeDecorator()
        {
        }

        ShapeDecorator::ShapeDecorator(const ShapeDecorator& source) : Shape(source), m_shape(source.m_shape)
        {
        }

        ShapeDecorator& ShapeDecorator::operator=(const ShapeDecorator& source)
        {
            if (this == &source)
            {
                Shape::operator=(source);
                return *this;
            }

            m_shape = source.m_shape;
            Shape::operator=(source);
            return *this;
            // TODO: insert return statement here
        }

        ShapeDecorator::ShapeDecorator(ShapeDecorator&& target) :Shape(target), m_shape(std::move(target.m_shape))
        {

        }

        ShapeDecorator& ShapeDecorator::operator=(ShapeDecorator&& source)
        {
            // TODO: insert return statement here
            if (this == &source)
            {
                Shape::operator=(source);
                return *this;
            }

            m_shape = std::move(source.m_shape);
            Shape::operator=(source);
            return *this;
        }

        std::shared_ptr<Shape> ShapeDecorator::getShape() const
        {
            return m_shape;
        }

        std::string ShapeDecorator::toString() const
        {
            return m_shape->toString();
        }

        void ShapeDecorator::setShape(const std::shared_ptr<Shape> source)
        {
            m_shape = source;
        }
    }
}