#include "Shape.h"

Shape::Shape(sf::Vector2f position, float radius, int points, sf::Color mainColor, float outlineThickness, sf::Color secondColor)
{
    this->shape.setPointCount(points);
    for(int i = 0; i < points; i++)
    {
        float angle = 2 * 3.1415926535f * i / points;
        this->shape.setPoint(i, sf::Vector2f(radius * cos(angle), radius * sin(angle)));
    }
    this->shape.setOutlineThickness(outlineThickness);
    this->shape.setPosition(position);
    this->shape.setFillColor(mainColor);
    this->shape.setOutlineColor(secondColor);
}

void Shape::render(sf::RenderTarget& target)
{
    target.draw(this->shape);
}