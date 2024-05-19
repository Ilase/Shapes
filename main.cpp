#include <SFML/Graphics.hpp>
#include "Shape.h"
#define HEIGHT 1000
#define WIDTH 1000

int main() {

	sf::RenderWindow window(sf::VideoMode(HEIGHT,WIDTH), "Shapes");


	sp::Circle circle(100, sf::Color::White);
	sp::Square square(100, sf::Color::White);
	sp::Ellips ellips(50,0.5, 1, sf::Color::Blue);


	circle.setPosition({100,100});
	square.setPosition(sf::Vector2f({400,500}));
	ellips.setPosition(sf::Vector2f({ 600,300 }));
	while (true)
	{
		sf::Event event;
		while (window.pollEvent(event))
			if (event.type == sf::Event::Closed) window.close();
		
		window.clear();
		window.draw(circle);
		window.draw(square);
		window.draw(ellips);
		window.display();

	}
	return 0;
}