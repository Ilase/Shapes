#include "Shape.h"


sp::Circle::Circle(float radius, sf::Color fillColor)
    : shape(radius) {
    shape.setFillColor(fillColor);
    shape.setOrigin(radius, radius);
}

void sp::Circle::setRadius(float radius) {
    shape.setRadius(radius);
}

float sp::Circle::getRadius() const {
    return shape.getRadius();
}

void sp::Circle::setPosition(sf::Vector2f _pos)
{
    this->shape.setPosition(_pos);
}

void sp::Circle::setFillColor(sf::Color _color) {
    shape.setFillColor(_color);
}

sf::Color sp::Circle::getFillColor() const {
    return shape.getFillColor();
}

void sp::Circle::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(shape, states);
}