/**
* @file api.cpp
* @authors
* Sudharsan
*
* @version 1.0
*
* @section LICENSE
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* @section DESCRIPTION
*
*  This is the cpp file for the class API, it is used as an Application Programmable Interface
*  between the micro-mouse simulator and the user defined functions.
*/

#include "api.h"
#include <cstdlib>
#include <iostream>


/**
 * @brief returns the width of the maze
 * @param none
 * @return Returns int
 */
int fp::API::mazeWidth() {
    std::cout << "mazeWidth" << std::endl;
    std::string response;
    std::cin >> response;
    return atoi(response.c_str());
}

/**
 * @brief returns the height of the maze
 * @param none
 * @return Returns int
 */
int fp::API::mazeHeight() {
    std::cout << "mazeHeight" << std::endl;
    std::string response;
    std::cin >> response;
    return atoi(response.c_str());
}

/**
 * @brief returns true if there is a wall in front of the robot, else false
 * @param none
 * @return Returns bool
 */
bool fp::API::wallFront() {
    std::cout << "wallFront" << std::endl;
    std::string response;
    std::cin >> response;
    return response == "true";
}

/**
 * @brief returns true if there is a wall in right of the robot, else false
 * @param none
 * @return Returns bool
 */
bool fp::API::wallRight() {
    std::cout << "wallRight" << std::endl;
    std::string response;
    std::cin >> response;
    return response == "true";
}

/**
 * @brief returns true if there is a wall in left of the robot, else false
 * @param none
 * @return Returns bool
 */
bool fp::API::wallLeft() {
    std::cout << "wallLeft" << std::endl;
    std::string response;
    std::cin >> response;
    return response == "true";
}

/**
 * @brief moves the robot forward by one cell
 * @param none
 * @return none
 */
void fp::API::moveForward() {
    std::cout << "moveForward" << std::endl;
    std::string response;
    std::cin >> response;
    if (response != "ack") {
        std::cerr << response << std::endl;
        throw;
    }
}

/**
 * @brief turns the robot 90 degrees to the right
 * @param none
 * @return none
 */
void fp::API::turnRight() {
    std::cout << "turnRight" << std::endl;
    std::string ack;
    std::cin >> ack;
}

/**
 * @brief turns the robot 90 degrees to the left
 * @param none
 * @return none
 */
void fp::API::turnLeft() {
    std::cout << "turnLeft" << std::endl;
    std::string ack;
    std::cin >> ack;
}

/**
 * @brief display a wall in the maze
 * @param int x
 * @param int y
 * @param char direction
 * @return Returns none
 */
void fp::API::setWall(int x, int y, char direction) {
    std::cout << "setWall " << x << " " << y << " " << direction << std::endl;
}

/**
 * @brief clear a wall from maze
 * @param int x
 * @param int y
 * @param char direction
 * @return Returns none
 */
void fp::API::clearWall(int x, int y, char direction) {
    std::cout << "clearWall " << x << " " << y << " " << direction << std::endl;
}

/**
 * @brief sets the given color of a cell
 * @param int x
 * @param int y
 * @param char color
 * @return Returns none
 */
void fp::API::setColor(int x, int y, char color) {
    std::cout << "setColor " << x << " " << y << " " << color << std::endl;
}

/**
 * @brief clear the color of a cell
 * @param int x
 * @param int y
 * @return Returns none
 */
void fp::API::clearColor(int x, int y) {
    std::cout << "clearColor " << x << " " << y << std::endl;
}

/**
 * @brief clears the color of all cell
 * @param none
 * @return Returns none
 */
void fp::API::clearAllColor() {
    std::cout << "clearAllColor" << std::endl;
}

/**
 * @brief sets a text of a cell
 * @param int x
 * @param int y
 * @param std::string &text
 * @return Returns none
 */
void fp::API::setText(int x, int y, const std::string &text) {
    std::cout << "setText " << x << " " << y << " " << text << std::endl;
}

/**
 * @brief clear the text of a cell
 * @param int x
 * @param int y
 * @return Returns none
 */
void fp::API::clearText(int x, int y) {
    std::cout << "clearText " << x << " " << y << std::endl;
}

/**
 * @brief clear the text of all cells
 * @param none
 * @return Returns none
 */
void fp::API::clearAllText() {
    std::cout << "clearAllText" << std::endl;
}

/**
 * @brief returns true if the rest button was pressed, else false
 * @param none
 * @return Returns bool
 */
bool fp::API::wasReset() {
    std::cout << "wasReset" << std::endl;
    std::string response;
    std::cin >> response;
    return response == "true";
}

/**
 * @brief Resets the simulation
 * @param none
 * @return Returns none
 */
void fp::API::ackReset() {
    std::cout << "ackReset" << std::endl;
    std::string ack;
    std::cin >> ack;
}



