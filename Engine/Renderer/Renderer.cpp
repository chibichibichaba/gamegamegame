#include "Renderer.h"


bool exit(){

    bool exitkey = false;
    exitkey = sf::Keyboard::isKeyPressed(sf::Keyboard::Escape);
    
    return exitkey;

};



void Renderer::openWindow(int width, int height, std::string windowname = "Hello world"){
    window.create(sf::VideoMode(width, height), windowname);

};
 

void Renderer::drawshape(int height, int width, int posx, int posy){
    sf::RectangleShape test;
    test.setSize(sf::Vector2f(height, width));
    test.setPosition(posx, posy);
    sf::Color color(255, 0, 0);
    test.setFillColor(color);
    window.draw(test);
};


void Renderer::test(std::string file){
    sf::Sprite sprite;
    sf::Texture texture;
    texture.loadFromFile(file);
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(10, 10, 50, 30));
    sprite.setColor(sf::Color(255, 255, 255, 200));
    sprite.setPosition(100, 25);
    window.draw(sprite);
};

void Renderer::draw(const sf::Drawable& drawable) {
    window.draw(drawable);
};


void Renderer::updateWindow(std::vector<std::string> files){
    int o = 1;
    while(o == 1){
        
        sf::Event event;

        while(window.pollEvent(event)){
            if (exit()){
                window.close();
                o = 0;
            };

        };

        window.clear();

        for (int i = 0; i < files.size(); i++) {
            sf::Sprite sprite;
            sf::Texture texture;
            texture.loadFromFile(files[i]);
            sprite.setTexture(texture);
            sprite.setPosition(100, 25);
            window.draw(sprite);
        }
        
        window.display();
    };
};
