// Sprites.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	// open the frame and include a name
	sf::RenderWindow window(sf::VideoMode(600, 780), "Sprites");

	// creates the texture variable
	sf::Texture playerTex;
	playerTex.loadFromFile("Textures/player_ship.png");

	// draws the textured player
	sf::Sprite playerSprite;
	playerSprite.setTexture(playerTex);
	playerSprite.setOrigin(32, 32);
	playerSprite.setScale(1.5, 1.5);
	playerSprite.setPosition(100, 100);

	// controls player movements
	bool movingUp = false;
	bool movingDown = false;
	bool movingLeft = false;
	bool movingRight = false;

	// keeps the frame open until the user closes it
	while (window.isOpen()) {
		sf::Event event;

		// when a key is pressed, it moves
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::W)
					movingUp = true;
				if (event.key.code == sf::Keyboard::S)
					movingDown = true;
				if (event.key.code == sf::Keyboard::A)
					movingLeft = true;
				if (event.key.code == sf::Keyboard::D)
					movingRight = true;
			}

			// when a key is released, it stops
			if (event.type == sf::Event::KeyReleased) {
				if (event.key.code == sf::Keyboard::W)
					movingUp = false;
				if (event.key.code == sf::Keyboard::S)
					movingDown = false;
				if (event.key.code == sf::Keyboard::A)
					movingLeft = false;
				if (event.key.code == sf::Keyboard::D)
					movingRight = false;
			}
		}
		
		// actually moves the sprite
		sf::Vector2f movement(0, 0);
		
		if (movingUp)
			movement.y -= 0.1f;
		if (movingDown)
			movement.y += 0.1f;
		if (movingLeft)
			movement.x -= 0.1f;
		if (movingRight)
			movement.x += 0.1f;

		// allows shapes to be visible
		playerSprite.move(movement);
		window.clear();
		window.draw(playerSprite);
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
