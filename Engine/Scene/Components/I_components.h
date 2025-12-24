#pragma once

#include <SFML/Graphics.hpp>

struct SpriteComponent {
    sf::Sprite sprite; 
//  sprite.setTexture(TextureComponent& texture);

};

struct TextureComponent{
    sf::Texture texture;
}; 

struct PositionComponent{
    float x;
    float y; 
    float z;
};

