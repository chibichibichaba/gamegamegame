#pragma once // header guard to prevent multiple inclusions

//third party libraries:
#include <SFML/Graphics.hpp>

class Player{

    public: 
    Player(
    sf::Keyboard::Key upKey, sf::Keyboard::Key downKey, sf::Keyboard::Key leftKey, sf::Keyboard::Key rightKey
    ); //Constructor that takes customizable keys

    void movement(int moveSpeed);  //player movement f.e. WASD movement
    const sf::Sprite& getSprite() const; //Sprite accesser for the renderer to access




    private:
    //player properties
    int health; 
    int moveSpeed;

    sf::Sprite sprite; //sprite
    sf::Texture texture; //texture 

    //keyboard keys
    sf::Keyboard::Key upKey;
    sf::Keyboard::Key downKey;
    sf::Keyboard::Key leftKey;
    sf::Keyboard::Key rightKey;

    

};