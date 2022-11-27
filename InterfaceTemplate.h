#pragma once

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>


class InterfaceTemplate
{
public:
	InterfaceTemplate(sf::RenderWindow* window);
	~InterfaceTemplate();

	int InitFont();
	void createButton(sf::Vector2u coord, const char* text);
	int addText(sf::Text content, sf::Color color, int font, const char* text,
		float x, float y, int size);

	void draw();


protected:
	sf::RenderWindow* window;
	std::vector<sf::Text> componentTextList;
private:
	sf::Font fontList[2];
	sf::Font pokemonSolid;
	sf::Font pokemonHollow;
};
