#include "Player.h"
#include <iostream>

Player::Player(sf::Keyboard::Key upKey, sf::Keyboard::Key downKey, sf::Keyboard::Key leftKey, sf::Keyboard::Key rightKey) : health(100){

    if(!texture.loadFromFile("assets/player.png")){
        std::cerr << "Error loading player texture!" << std::endl;
    }
    sprite.setTexture(texture);
    sprite.setPosition(200,200);
}




void Player::movement(int moveSpeed){

    if (sf::Keyboard::isKeyPressed(rightKey)) {
            sprite.move(moveSpeed, 0);
        }
        if (sf::Keyboard::isKeyPressed(leftKey)) {
            sprite.move(-moveSpeed, 0);
        }
        if (sf::Keyboard::isKeyPressed(upKey)) {
            sprite.move(0, -moveSpeed);
        }
        if (sf::Keyboard::isKeyPressed(downKey)) {
            sprite.move(0, moveSpeed);
        }

}




const sf::Sprite& Player::getSprite() const {
    return sprite;
}