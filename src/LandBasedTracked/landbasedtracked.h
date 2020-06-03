/**
* @file landbasedtracked.h
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
*  This is the header for the LandBasedTracked class which is a concrete class and inherits
*  the base class LandBasedRobot and declares the necessary attributes
*  and method prototypes.
*/

#ifndef MAZE_SOLVER_ROBOT_LANDBASEDTRACKED_H
#define MAZE_SOLVER_ROBOT_LANDBASEDTRACKED_H


#include<iostream>
#include <memory>
#include "../LandBasedRobot/landbasedrobot.h"

namespace fp {
    class LandBasedTracked : public LandBasedRobot {
    protected:
        //---> Attributes <---//
        std::shared_ptr<std::string> track_type_;       //--Type of track mounted on the robot

    public:
        //---> Constructor 01: Default constructor <---//
        /**
         * @brief default constructor of the class LandBasedTracked
         */
        LandBasedTracked() : LandBasedRobot(), track_type_{nullptr} {}

        //---> Constructor 03: Constructor with 1 Argument as input <---//
        /**
         * @brief it is a constructor of the class LandBasedTracked
         * @param string name
         * @return Returns none
         */
        explicit LandBasedTracked(std::string name) :
                LandBasedRobot(name), track_type_{nullptr} {}

        //---> Constructor 03: Constructor with 3 Arguments as input <---//
        /**
         * @brief it is a constructor of the class LandBasedTracked
         * @param string name
         * @param int x
         * @param int y
         * @return Returns none
         */
        LandBasedTracked(std::string name, int x, int y) :
                LandBasedRobot(name, x, y), track_type_{nullptr} {}

        //---> Constructor 04: Constructor with all Arguments as input <---//
        /**
         * @brief it is a constructor of the class LandBasedTracked
         * @param string name
         * @param double speed
         * @param double width
         * @param double length
         * @param double height
         * @param double capacity
         * @param int x
         * @param int y
         * @param char direction
         * @param string track_type
         * @return Returns none
         */

        LandBasedTracked(std::string name, double speed, double width, double length, double height, double capacity,
                         int x, int y, char direction, std::shared_ptr<std::string> track_type) :
                LandBasedRobot(name, speed, width, length, height, capacity, x, y, direction),
                track_type_{std::move(track_type)} {}

        //---> Destructor <---//
        /**
         * @brief it is a destructor of the class LandBasedTracked and deletes the objects created
         * @param none
         * @return Returns none
         */

        ~LandBasedTracked() = default;

        //---> Method prototypes <---//
        /**
         * @brief it is a pure virtual method that gets the direction of the robot in the maze
         * @param string
         * @return Returns none
         */
        char GetDirection() override;       //--Get the direction of the robot in the maze

        /**
         * @brief it is a pure virtual method that moves the robot forward in the maze
         * @param none
         * @return Returns none
         */
        void MoveForward(int x, int y, char direction) override;     //--Moves the robot forward

        /**
         * @brief it is a pure virtual method that rotates the robot 90°counter-clockwise in the maze
         * @param none
         * @return Returns none
         */
        void TurnLeft() override;       //--Rotates the robot 90°counter-clockwise

        /**
         * @brief it is a pure virtual method that rotates the robot 90°clockwise in the maze
         * @param none
         * @return Returns none
         */
        void TurnRight() override;      //--Rotates the robot 90°clockwise

        /**
        * @brief it is a pure virtual method that picks up an object
        * @param none
        * @return Returns none
        */
        void PickUp(std::string string) override;                //--picks up the payload

        /**
        * @brief it is a pure virtual method that release the robot gripper
        * @param none
        * @return Returns none
        */
        void Release(std::string string) override;              //--Releases the payload


    };//--Class LandBasedTracked
}//--namespace fp

#endif //MAZE_SOLVER_ROBOT_LANDBASEDTRACKED_H
