#include "Sandbox.h"
#include <vector>


int main(){

    Renderer menu;
    


    menu.openWindow(720, 720, "Sandbox");
    
    std::vector<std::string> files = {};
    files.emplace_back("Game/ArenaMen/assets/test.png");
    

    menu.updateWindow(files);
    return 0;
}