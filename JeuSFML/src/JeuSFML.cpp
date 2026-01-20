#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "JeuSFML");

    sf::RectangleShape rect(sf::Vector2f(100.f, 100.f));
    rect.setFillColor(sf::Color::Red);
    rect.setPosition(350.f, 250.f); // à peu près au centre

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        window.draw(rect);
        window.display();
    }

    return 0;
}