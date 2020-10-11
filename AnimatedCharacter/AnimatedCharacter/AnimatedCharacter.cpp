// AnimatedCharacter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <SFML\Graphics.hpp>
#include <SFML\Graphics\Rect.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "Sprites!");

	sf::Sprite mySprite;
	sf::Texture myTexture;
	sf::IntRect rect[7];

	// capturing frames of the png
	rect[0] = sf::IntRect(0, 0, 64, 64);
	rect[1] = sf::IntRect(64, 0, 64, 64);
	rect[2] = sf::IntRect(128, 0, 64, 64);
	rect[3] = sf::IntRect(192, 0, 64, 64);
	rect[4] = sf::IntRect(0, 64, 64, 64);
	rect[5] = sf::IntRect(64, 64, 64, 64);
	rect[6] = sf::IntRect(128, 64, 64, 64);

	myTexture.loadFromFile("Textures/walk_cycle.png");

	mySprite.setTexture(myTexture);
	mySprite.setTextureRect(rect[0]);
	mySprite.setOrigin(15, 16);
	mySprite.setScale(1.5, 1.5);
	mySprite.setPosition(100, 100);

	sf::Clock clock;
	int imgCount = 0;
	float timer = 0;

	// cycling through the frames to create an animation
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		timer = clock.getElapsedTime().asSeconds();
		if (timer > 0.1f) {
			if (imgCount < 6) {
				imgCount++;
			}
			else {
				imgCount = 0;
			}
			clock.restart();
		}

		mySprite.setTextureRect(rect[imgCount]);
		window.clear();
		window.draw(mySprite);
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
