#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "SFML Works");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }
        sf::CircleShape c1(50.0f);
        c1.setFillColor(sf::Color(100, 50, 170));

        sf::CircleShape c2(100.0f);
        c2.setFillColor(sf::Color(70, 200, 90));

        window.clear(sf::Color::Black);
        window.draw(c2);
        window.display();
    }
}
