#include "Shape.h"

sp::Square::Square(float size, sf::Color fillColor)
    : shape({ size, size }) {
    shape.setOrigin(size / 2.f, size / 2.f);
    shape.setFillColor(fillColor);
    
}

void sp::Square::setSize(float size) {
    shape.setSize({ size, size });
}

float sp::Square::getSize() const {
    return shape.getSize().x;
}

void sp::Square::setPosition(sf::Vector2f _pos)
{
    this->shape.setPosition(_pos);

}

void sp::Square::setFillColor(sf::Color _color) {
    shape.setFillColor(_color);
}

sf::Color sp::Square::getFillColor() const {
    return shape.getFillColor();
}

void sp::Square::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(shape, states);
}
