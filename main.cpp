#include "./headers/common.h"

sf::RenderWindow window(sf::VideoMode(width, height), "Chess", sf::Style::Close);
int squareSize = width / 8;

int main(int argc, char **argv) {
    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }
        }
        display();
    }

}