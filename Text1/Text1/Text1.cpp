// Text1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "stdafx.h"
#include <SFML\Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "Text");

	sf::Text myText;

	// creating the variable
	sf::Font myFont;
	myFont.loadFromFile("font/Candal.ttf");

	// setting properties
	myText.setFont(myFont);
	myText.setString("Rubber Duckies");
	myText.setCharacterSize(24);
	myText.setColor(sf::Color::White);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		myText.move(0.01f, 0);
		if (myText.getPosition().x > 400)
			myText.setPosition(-200, 0);

		window.clear();
		window.draw(myText);
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
