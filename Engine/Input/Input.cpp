#include "Input.h"


bool Input::exit(){

    bool exitkey = false;
    exitkey = sf::Keyboard::isKeyPressed(sf::Keyboard::Escape);
    
    return exitkey;

};
