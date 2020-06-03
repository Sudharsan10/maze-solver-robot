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
*  This is the header for the LandBasedWheeled class which is a concrete class and inherits
*  the base class LandBasedRobot and declares the necessary attributes
*  and method prototypes.
*/

#ifndef MAZE_SOLVER_ROBOT_LANDBASEDWHEELED_H
#define MAZE_SOLVER_ROBOT_LANDBASEDWHEELED_H


#include <memory>
#include "../LandBasedRobot/landbasedrobot.h"

namespace fp {
    class LandBasedWheeled : public LandBasedRobot {
    protected:
        //---> Attributes <---//
        int wheel_number_;                              //--Number of wheels mounted on the robot
        std::shared_ptr<std::string> wheel_type_;       //--Shared ptr for wheel type attribute

    public:
        //---> Constructor 01: Default Constructor <---//
        /**
         * @brief default constructor of the class LandBasedWheeled
         */
        LandBasedWheeled() : LandBasedRobot(), wheel_number_{}, wheel_type_{nullptr} {}

        //---> Constructor 02: Constructor with 1 argument as input <---//
        /**
         * @brief it is a constructor of the class LandBasedWheeled
         * @param string name
         * @return Returns none
         */
        explicit LandBasedWheeled(std::string name) :
                LandBasedRobot(name), wheel_number_{}, wheel_type_{nullptr} {}

        //---> Constructor 03: Constructor with 3 arguments as inputs <---//
        /**
         * @brief it is a constructor of the class LandBasedWheeled
         * @param string name
         * @param int x
         * @param int y
         * @return Returns none
         */
        LandBasedWheeled(std::string name, int x, int y) :
                LandBasedRobot(name, x, y), wheel_number_{}, wheel_type_{nullptr} {}

        //---> Constructor 04: Constructor with all arguments inputs <---//
        /**
         * @brief it is a constructor of the class LandBasedWheeled
         * @param string name
         * @param double speed
         * @param double width
         * @param double length
         * @param double height
         * @param double capacity
         * @param int x
         * @param int y
         * @param char direction
         * @param int wheel_number
         * @param shared_ptr wheel_type
         * @return Returns none
         */

        LandBasedWheeled(std::string name, double speed, double width, double length, double height, double capacity,
                         int x, int y, char direction, int wheel_number, std::shared_ptr<std::string> wheel_type) :
                LandBasedRobot(name, speed, width, length, height, capacity, x, y, direction),
                wheel_number_{wheel_number}, wheel_type_{std::move(wheel_type)} {}

        //---> Destructor <---//
        /**
         * @brief it is a destructor of the class LandBasedWheeled and deletes the objects created
         * @param none
         * @return Returns none
         */

        ~LandBasedWheeled() = default;
        //---> Method Prototypes <---//
        /**
         * @brief it is a pure virtual method that gets the direction of the robot in the maze
         * @param none
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
        * @param string
        * @return Returns none
        */
        void PickUp(std::string string) override;                //--picks up the payload

        /**
        * @brief it is a pure virtual method that release the robot gripper
        * @param string
        * @return Returns none
        */
        void Release(std::string string) override;              //--Releases the payload

        //---> Accessors <---//
        /**
         * @brief it is a getter method for robot wheels number
         * @param none
         * @return Returns int wheel_number_
         */
        int getWheelNumber() const;

        //---> Mutators <---//
        /**
         * @brief it is a setter method for the Wheel Number
         * @param int wheelNumber
         * @return Returns none
         */
        void setWheelNumber(int wheelNumber);

    };//--Class LandBasedWheel
}//--namespace fp

#endif //MAZE_SOLVER_ROBOT_LANDBASEDWHEELED_H
