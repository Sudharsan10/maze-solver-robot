/**
* @file landbasedrobot.cpp
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
*  This is header file for landbasedrobot.cpp
*/

#include "landbasedrobot.h"


/**
 * @brief it is a setter method for the Robot Name
 * @param string name
 * @return Returns none
 */
void fp::LandBasedRobot::setName(const std::string name) {
    this->name_ = name;
}

/**
 * @brief it is a setter method for the Robot speed
 * @param double speed
 * @return Returns none
 */
void fp::LandBasedRobot::setSpeed(double speed) {
    this->speed_ = speed;
}

/**
 * @brief it is a setter method for the robot width
 * @param double width
 * @return Returns none
 */
void fp::LandBasedRobot::setWidth(double width) {
    this->width_ = width;
}

/**
 * @brief it is a setter method for the robot length
 * @param double length
 * @return Returns none
 */
void fp::LandBasedRobot::setLength(double length) {
    this->length_ = length;
}

/**
 * @brief it is a setter method for the robot height
 * @param double height
 * @return Returns none
 */
void fp::LandBasedRobot::setHeight(double height) {
    this->height_ = height;
}

/**
 * @brief it is a setter method for the robot Payload capacity
 * @param double capacity
 * @return Returns none
 */
void fp::LandBasedRobot::setCapacity(double capacity) {
    this->capacity_ = capacity;
}

/**
 * @brief it is a setter method for the x-axis
 * @param int x
 * @return Returns none
 */
void fp::LandBasedRobot::set_x_(int x) {
    this->x_ = x;
}

/**
 * @brief it is a setter method for the y-axis
 * @param int y
 * @return Returns none
 */
void fp::LandBasedRobot::set_y_(int y) {
    this->y_ = y;
}

/**
 * @brief it is a setter method for the direction
 * @param int direction
 * @return Returns none
 */
void fp::LandBasedRobot::set_direction_(char direction) {
    this->direction_ = direction;
}

/*-----> Setter Definition <----- */


/**
 * @brief it is a getter method for the Name of the robot
 * @param None
 * @return Returns string
 */
const std::string &fp::LandBasedRobot::getName() const {
    return this->name_;
}

/**
 * @brief it is a getter method for the robot speed
 * @param None
 * @return Returns double
 */
double fp::LandBasedRobot::getSpeed() const {
    return this->speed_;
}

/**
 * @brief it is a getter method for the robot width
 * @param None
 * @return Returns double
 */
double fp::LandBasedRobot::getWidth() const {
    return this->width_;
}

/**
 * @brief it is a getter method for the robot length
 * @param None
 * @return Returns double
 */
double fp::LandBasedRobot::getLength() const {
    return this->length_;
}

/**
 * @brief it is a getter method for the robot height
 * @param None
 * @return Returns double
 */
double fp::LandBasedRobot::getHeight() const {
    return this->height_;
}

/**
 * @brief it is a getter method for the Pay load capacity
 * @param none
 * @return Returns double
 */
double fp::LandBasedRobot::getCapacity() const {
    return this->capacity_;
}

/**
 * @brief it is a getter method for the x-axis
 * @param none
 * @return Returns int x_
 */
int fp::LandBasedRobot::get_x_() const {
    return this->x_;
}

/**
 * @brief it is a getter method for the y-axis
 * @param none
 * @return Returns int y_
 */
int fp::LandBasedRobot::get_y_() const {
    return this->y_;
}

/**
 * @brief it is a getter method for direction
 * @param none
 * @return Returns char direction_
 */
char fp::LandBasedRobot::get_direction_() const {
    return this->direction_;
}
