#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
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

        window.clear(sf::Color::White);
        window.draw(
            c1
        );
        window.display();
    }
}
