#include <SFML/Graphics.hpp>

#ifndef _SHAPE_
#define _SHAPE_

namespace sp {
    class Shape : public sf::Drawable, public sf::Transformable {
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;
    public:
        virtual ~Shape() {};
    };

    class Circle : public Shape {
    private:
        sf::CircleShape shape;
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    public:
        Circle(float radius, sf::Color fillColor);

        void setRadius(float radius);
        float getRadius() const;
        void setPosition(sf::Vector2f _pos);
        void setFillColor(sf::Color color);
        sf::Color getFillColor() const;
    };

    class Square : public Shape {
    private:
        sf::RectangleShape shape;
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    public:
        Square(float size, sf::Color fillColor);

        void setSize(float size);
        float getSize() const;
        void setPosition(sf::Vector2f _pos);
        void setFillColor(sf::Color _color);
        sf::Color getFillColor() const;
    };

    class Rectangle : public Shape {
    private:
        sf::RectangleShape shape;
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    public:
        Rectangle(float size_x, float size_y, sf::Color fillColor);

        void setSize(float size_x, float size_y);
        sf::Vector2f getSize() const;
        void setPosition(sf::Vector2f _pos);
        void setFillColor(sf::Color _color);
        sf::Color getFillColor() const;
    };
    class Ellips : public Shape {
    private:
        sf::CircleShape shape;
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    public:
        Ellips(float radius, float scale_x, float scale_y, sf::Color fillColor);

        void setRadius(float radius);
        float getRadius() const;
        void setPosition(sf::Vector2f _pos);
        void setFillColor(sf::Color _color);
        sf::Color getFillColor() const;
    };
    



#endif // !_SHAPE_


}