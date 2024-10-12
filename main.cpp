#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(256, 256), "15 - PUZZLE");
    window.setFramerateLimit(60);

    sf::Texture T;
    if (!T.loadFromFile("Images/15.png")) {
        std::cerr << "Error loading texture" << std::endl;
        return -1;
    }

    int w = 64;
    int grid[6][6] = {0};
    sf::Sprite sprite[20];

    int n = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            n++;
            sprite[n].setTexture(T);
            sprite[n].setTextureRect(sf::IntRect(i * w, j * w, w, w));
            grid[i + 1][j + 1] = n;
        }
    }

    while (window.isOpen()) {
        sf::Event e;
        while (window.pollEvent(e)) {
            if (e.type == sf::Event::Closed) {
                window.close();
            }

            if (e.type == sf::Event::MouseButtonPressed) {
                if (e.mouseButton.button == sf::Mouse::Left) {
                    sf::Vector2i pos = sf::Mouse::getPosition(window);

                    int X = pos.x / w + 1;
                    int Y = pos.y / w + 1;

                    int dx = 0, dy = 0;
                    if (grid[X + 1][Y] == 16) dx = 1, dy = 0;
                    if (grid[X][Y + 1] == 16) dx = 0, dy = 1;
                    if (grid[X][Y - 1] == 16) dx = 0, dy = -1;
                    if (grid[X - 1][Y] == 16) dx = -1, dy = 0;

                    if (dx != 0 || dy != 0) {
                        int temp = grid[X][Y];
                        grid[X][Y] = 16;
                        grid[X + dx][Y + dy] = temp;

                        // Animation
                        sprite[16].move(-dx * w, -dy * w);
                        float speed = 3;

                        for (int i = 0; i < w; i += speed) {
                            sprite[temp].move(speed * dx, speed * dy);
                            window.clear(sf::Color::White);

                            for (int m = 0; m < 4; ++m) {
                                for (int n = 0; n < 4; ++n) {
                                    int tile = grid[m + 1][n + 1];
                                    if (tile != temp) {
                                        sprite[tile].setPosition(m * w, n * w);
                                        window.draw(sprite[tile]);
                                    }
                                }
                            }

                            window.draw(sprite[temp]);
                            window.display();
                        }
                    }
                }
            }
        }

        window.clear(sf::Color::White);
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                int temp = grid[i + 1][j + 1];
                sprite[temp].setPosition(i * w, j * w);
                window.draw(sprite[temp]);
            }
        }

        window.display();
    }

    return 0;
}
