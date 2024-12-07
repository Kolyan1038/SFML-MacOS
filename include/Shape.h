#ifndef SHAPE_H
#define SHAPE_H

#include <SFML/Graphics.hpp>
#include <stdio.h>
#include <cmath>

class Shape
{
private:
    sf::ConvexShape shape;
    sf::Vector2f position;
    float radius;
    int points;
    sf::Color mainColor;
    sf::Color secondColor;
    float outlineThickness;

public:
    Shape(sf::Vector2f position, float radius, int points, sf::Color mainColor = sf::Color(100, 100, 100),
        float outlineThickness = 1.f, sf::Color secondColor = sf::Color::White);

    void render(sf::RenderTarget& target);
};

#endif