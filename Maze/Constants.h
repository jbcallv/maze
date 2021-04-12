#pragma once
#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <SFML/Graphics.hpp>

/*
window stuff
*/
const int WIDTH = 1005;
const int HEIGHT = 605;

/*
cell stuff
*/
// can be any number that can divide 1000
const int CELL_WIDTH = 50;
// can be any number that can divide 600
const int CELL_HEIGHT = 50;

/*
wall stuff
*/
const int LEFT = 1;
const int TOP = 2;
const int TOP_AND_LEFT = 3;
const int WALL_WIDTH = 5;

/*
cell color stuff
*/
const sf::Color UNVISITED = sf::Color(255, 255, 255, 255);
const sf::Color VISITED = sf::Color(0, 0, 255, 255);
const sf::Color WALL_COLOR = sf::Color(0, 0, 0, 255);

#endif
