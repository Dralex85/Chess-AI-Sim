#include "../headers/common.h"

void display() {
    int x = 0;
    int y = 0;
    int color = 0;

    window.clear();
    for(int i = 0; i < 64; i++) {
        sf::RectangleShape rect;

        rect.setSize(sf::Vector2f(squareSize, squareSize));

        rect.setPosition(x, y);
        
        if (i % 8 == 7){
            x = 0;
        } else {
            x += 90;
        }

        if(i % 8 == 7) {
            y += 90;
        }

        if(color % 2 == 0) {
            rect.setFillColor(sf::Color(184,139,74));
        } else {
            rect.setFillColor(sf::Color(227,193,111));
        }

        if(i % 8 == 7)
            color++;

        color++;

        window.draw(rect);
    }
    window.display();
}