#pragma once

#include <SFML/Graphics.hpp>

struct SpriteComponent {
    sf::Sprite sprite; 

};

struct TextureComponent{
    sf::Texture texture;
}; 

struct PositionComponent{
    float x;
    float y; 
    float z;
};


