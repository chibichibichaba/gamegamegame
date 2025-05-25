#include <SFML/Graphics.hpp>

int main() {

    // This is a test comment

    sf::RenderWindow window(sf::VideoMode(800, 600), "GameGame - Player Movement");
    window.setFramerateLimit(240);

    // Load player texture
    sf::Texture playerTexture;
    if (!playerTexture.loadFromFile("assets/player.png")) {
        return -1; // couldn't load file
    }

    // Create player sprite
    sf::Sprite player(playerTexture);
    player.setPosition(100, 400); // starting position
    


    const float moveSpeed = 5.0f;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

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

        window.clear(sf::Color::Black);
        window.draw(player);
        window.display();
    }

    return 0;
}