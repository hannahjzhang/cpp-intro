// Jack-o-Lantern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	// open the frame and include a name
	sf::RenderWindow window(sf::VideoMode(400, 400), "Jack-O-Lantern");

	// code for the jack-o-lantern
	// big circle
	sf::CircleShape jackOLantern;
	jackOLantern.setRadius(200);
	jackOLantern.setPosition(0, 0);
	jackOLantern.setFillColor(sf::Color(255, 165, 0));

	// left eye
	sf::CircleShape leftEye;
	leftEye.setPointCount(3);
	leftEye.setRadius(50);
	leftEye.setFillColor(sf::Color::Black);
	leftEye.setPosition(50, 75);
	window.draw(leftEye);

	// right eye
	sf::CircleShape rightEye;
	rightEye.setPointCount(3);
	rightEye.setRadius(50);
	rightEye.setFillColor(sf::Color::Black);
	rightEye.setPosition(250, 75);
	window.draw(rightEye);

	// mouth
	sf::ConvexShape mouth;
	mouth.setFillColor(sf::Color::Black);
	mouth.setPointCount(5);
	mouth.setPoint(0, sf::Vector2f(50, 300));
	mouth.setPoint(1, sf::Vector2f(350, 300));
	mouth.setPoint(2, sf::Vector2f(300, 350));
	mouth.setPoint(3, sf::Vector2f(200, 375));
	mouth.setPoint(4, sf::Vector2f(100, 350));
	window.draw(mouth);

	// keeps the frame open until the user closes it
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		// allows shapes to be visible
		window.clear();
		window.draw(jackOLantern);
		window.draw(leftEye);
		window.draw(rightEye);
		window.draw(mouth);
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
