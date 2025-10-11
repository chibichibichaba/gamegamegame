#pragma once

#include <string>
#include <SFML/Graphics.hpp>


class Renderer{
    
    

    public:
     
        void openWindow(int height, int width, std::string windowname);
        void updateWindow();
        void drawshape(int height, int width, int posx, int posy);

   private:  
        sf::RenderWindow window;

};



