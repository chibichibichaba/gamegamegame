#include <SFML/Graphics.hpp>
#include "Foundation/Renderer/renderer.h"

int main() {

    Renderer renderer(800, 600, "Game Window");

    while (renderer.isOpen()) {
        renderer.pollEvents();
        renderer.clear();
        // renderer.draw(someDrawable);
        renderer.display();
    }
    return 0;
}