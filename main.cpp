#include "Foundation/Renderer/renderer.h"
#include "Foundation/Player/player.h"
#include <SFML/Graphics.hpp>


int main() {

    Renderer renderer(800, 600, "Game Window");

    while (renderer.isOpen()) {
        renderer.pollEvents();
        renderer.clear();
    // Load player texture
    sf::Texture playerTexture;
    if (!playerTexture.loadFromFile("assets/player.png")) {
        return -1; // couldn't load file
    }

    // Create player sprite
    sf::Sprite player(playerTexture);
    player.setPosition(100, 400); // starting position
    


    const float moveSpeed = 5.0f;

        // Movement logic
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            player.move(-moveSpeed, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            player.move(moveSpeed, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            player.move(0, -moveSpeed);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            player.move(0, moveSpeed);
        }

    }
    return 0;
}