#pragma once

#include <string>
#include <SFML/Graphics.hpp>
#include <vector>


class Renderer{
    
    public:
     
        void openWindow(int height, int width, std::string windowname);
        void updateWindow(std::vector<std::string> files);
        void drawshape(int height, int width, int posx, int posy);
        void test(std::string file);
        

   private:  
        sf::RenderWindow window;

};



