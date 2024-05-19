#include "Shape.h"

void sp::Ellips::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shape, states);
}

sp::Ellips::Ellips(float radius, 
	float scale_x, float scale_y, 
	
	sf::Color fillColor) : shape(radius)
{
	shape.setOrigin(radius, radius);
	shape.setFillColor(fillColor);
	shape.setScale(scale_x, scale_y);
}

void sp::Ellips::setRadius(float radius)
{
	shape.setRadius(radius);
}

float sp::Ellips::getRadius() const
{
	return shape.getRadius();
}

void sp::Ellips::setPosition(sf::Vector2f _pos)
{
	shape.setPosition(_pos);
}

void sp::Ellips::setFillColor(sf::Color _color)
{
	shape.setFillColor(_color);
}

sf::Color sp::Ellips::getFillColor() const
{
	return shape.getFillColor();
}
