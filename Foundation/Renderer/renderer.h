#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Renderer {
    public: 

    // Creates a window with set parameters
    Renderer(unsigned int width, unsigned int height, const std::string& title);

    // Wipes all content with a singular color 
    void clear(const sf::Color& color = sf::Color::Black);

    // Draws an entity's asset
    // void draw(const sf::Drawable& drawable);
    void draw(const std::string& imagePath);

    // I don't really know yet (CoPilot)
    void display();
    bool isOpen() const;

    // Perform certain actions from the window inputs
    void pollEvents();


    private:
    sf::RenderWindow window;
    sf::Texture texture;
};