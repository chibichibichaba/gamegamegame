#include <SFML/Graphics.hpp>

class Renderer {
public:
    Renderer(unsigned int width, unsigned int height, const std::string& title)
        : window(sf::VideoMode(width, height), title) {}

    void clear(const sf::Color& color = sf::Color::Black) {
        window.clear(color);
    }

    void draw(const sf::Drawable& drawable) {
        window.draw(drawable);
    }

    void display() {
        window.display();
    }

    bool isOpen() const {
        return window.isOpen();
    }

    void pollEvents() {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

private:
    sf::RenderWindow window;
};

