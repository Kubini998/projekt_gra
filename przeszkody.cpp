#include "przeszkody.h"

przeszkody:: przeszkody() {
    przeszkoda.setSize(sf::Vector2f(40, 40));
    przeszkoda.setOrigin(20, 20);
    przeszkoda.setPosition(rand() % 750+51, rand() % 300+101);
    przeszkoda.setFillColor(sf::Color(rand() % 256, rand() % 256, rand() % 256));

}
void przeszkody::rysowaniep(sf::RenderWindow &w) {
    w.draw(przeszkoda);
}
void przeszkody::obrot(float g, float delta) {
    przeszkoda.rotate(g*delta);
}
sf::FloatRect przeszkody::boundprzeszkody() {
    sf::FloatRect bound = przeszkoda.getGlobalBounds();
    return bound;
}
bool przeszkody::znikanieprzeszkody(sf::FloatRect obiekt) {
    if (przeszkoda.getGlobalBounds().intersects(obiekt)) {
        przeszkoda.setSize(sf::Vector2f(0, 0));
        return true;
    }
    else return false;
}
