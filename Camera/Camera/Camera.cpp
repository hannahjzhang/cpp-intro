// Camera.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "Camera");
	sf::Texture backText;
	backText.loadFromFile("C:/Assets/ReadyMadeCharacters&Elements/BackgroundSpace2.png");
	sf::Sprite backSprite;
	backSprite.setTexture(backText);

	sf::View camera(sf::FloatRect(50, 50, 150, 150));
	camera.setSize(300, 300);
	camera.setCenter(150, 150);

	bool isMovingUp = false;
	bool isMovingDown = false;
	bool isMovingLeft = false;
	bool isMovingRight = false;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::W) {
					isMovingUp = true;
				}
				if (event.key.code == sf::Keyboard::S) {
					isMovingDown = true;
				}
				if (event.key.code == sf::Keyboard::A) {
					isMovingLeft = true;
				}
				if (event.key.code == sf::Keyboard::D) {
					isMovingRight = true;
				}
			}
			if (event.type == sf::Event::KeyReleased) {
				if (event.key.code == sf::Keyboard::W) {
					isMovingUp = false;
				}
				if (event.key.code == sf::Keyboard::S) {
					isMovingDown = false;
				}
				if (event.key.code == sf::Keyboard::A) {
					isMovingLeft = false;
				}
				if (event.key.code == sf::Keyboard::D) {
					isMovingRight = false;
				}
			}
		}
		sf::Vector2f viewMove(0, 0);
		if (isMovingUp)
			viewMove.y -= 0.1;
		if (isMovingDown)
			viewMove.y += 0.1;
		if (isMovingLeft)
			viewMove.x -= 0.1;
		if (isMovingRight)
			viewMove.x += 0.1;

		camera.move(viewMove);
		window.setView(camera);

		window.clear();
		window.draw(backSprite);
		window.display();
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
