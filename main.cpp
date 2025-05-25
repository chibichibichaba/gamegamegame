#include "Foundation/Renderer/renderer.h"
#include <SFML/Graphics.hpp>


int main() {

    Renderer renderer(800, 600, "Game Window");

    while (renderer.isOpen()) {
        renderer.pollEvents();
        renderer.clear();
        // renderer.draw("assets/test.png");
        renderer.display();
    }
    return 0;
}