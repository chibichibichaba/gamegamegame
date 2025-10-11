#include "Renderer.h"
#include <SFML/Graphics.hpp>

void Renderer::initWindow(){

};

void Renderer::openWindow(int width, int height, std::string windowname = "Hello world"){
    sf::RenderWindow window(sf::VideoMode(width, height), windowname);

};