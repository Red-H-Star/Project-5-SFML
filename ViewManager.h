#pragma once

#include <iostream>
#include <stack>
#include <SFML/Graphics.hpp>

#include "Menu.h"
#include "test.h"

class ViewManager
{
public:

	ViewManager(sf::RenderWindow *window);
	~ViewManager();

	void swapView();
	void drawCurrentView();



private:
	//Menu* menu;
	std::stack<InterfaceTemplate*> view;
	sf::RenderWindow *window;
};

