#include "Foundation/Renderer/renderer.h"
#include <SFML/Graphics.hpp>

Renderer::Renderer(unsigned int width, unsigned int height, const std::string& title)
    : window(sf::VideoMode(width, height), title) {}

void Renderer::clear(const sf::Color& color) {
    window.clear(color);
}

void Renderer::draw(const std::string& imagePath) {
    if (!texture.loadFromFile(imagePath)){
        return;
    }

    sf::Sprite sprite(texture);
    window.draw(sprite);
}

void Renderer::display() {
    window.display();
}

bool Renderer::isOpen() const {
    return window.isOpen();
}

void Renderer::pollEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

