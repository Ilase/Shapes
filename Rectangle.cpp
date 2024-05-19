#include "Shape.h"

void sp::Rectangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shape, states);
}

sp::Rectangle::Rectangle(float size_x, float size_y, sf::Color fillColor) : shape({size_x,size_y}) {
    shape.setFillColor(fillColor);
    shape.setOrigin(size_x / 2.f, size_y / 2.f);
}

void sp::Rectangle::setSize(float size_x, float size_y)
{
    shape.setSize({ size_x, size_y });
}

sf::Vector2f sp::Rectangle::getSize() const
{
    return shape.getSize();
}

void sp::Rectangle::setPosition(sf::Vector2f _pos)
{
    shape.setPosition(_pos);
}

void sp::Rectangle::setFillColor(sf::Color _color)
{
    shape.setFillColor(_color);
}

sf::Color sp::Rectangle::getFillColor() const
{
    return shape.getFillColor();
}
