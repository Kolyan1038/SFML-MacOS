#include <SFML/Graphics.hpp>
#include "Shape.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 400), "SFML works!");
    Shape shape(sf::Vector2f(250, 200), 100.f, 8, sf::Color(200, 100, 100), 10.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        shape.render(window);
        window.display();
    }

    return 0;
}