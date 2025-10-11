#include "Renderer.h"


bool exit(){

    bool exitkey = false;
    exitkey = sf::Keyboard::isKeyPressed(sf::Keyboard::Escape);
    
    return exitkey;

};



void Renderer::openWindow(int width, int height, std::string windowname = "Hello world"){
    window.create(sf::VideoMode(width, height), windowname);

};

void draw(){ 

};



void Renderer::drawshape(int height, int width, int posx, int posy){
    sf::RectangleShape test;
    test.setSize(sf::Vector2f(height, width));
    test.setPosition(posx, posy);
    sf::Color color(255, 0, 0);
    test.setFillColor(color);
    window.draw(test);
};

void Renderer::updateWindow(){
        while(true){
        sf::Event event;

        while(window.pollEvent(event)){
            if (exit()){
                window.close();
            };

    };

        window.clear();
        Renderer::drawshape(300,400,200,200);
        window.display();
    };
}