/**
* @file landbasedrobot.h
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
*  This is an abstract class implementation and two different derived classes
*  (landbasedtracked and landbasedwheeled) share the attributes
*  and methods of this base class
*/

#ifndef MAZE_SOLVER_ROBOT_LANDBASEDROBOT_H
#define MAZE_SOLVER_ROBOT_LANDBASEDROBOT_H


#include <string>
#include<iostream>

namespace fp {
    class LandBasedRobot {

    protected:
        //---> Attributes <---//
        std::string name_;      //--Name of the robot
        double speed_;          //--Driving speed of the robot
        double width_;          //--Width of the base of the robot
        double length_;         //--Length of the base of the robot
        double height_;         //--Height of the base of the robot
        double capacity_;       //--Payload of the arm
        int x_;                 //--X coordinate of the robot in the maze
        int y_;                 //--Y coordinate of the robot in the maze
        char direction_;        //--Direction that the robot is facing in the maze

    public:
        //---> Constructor 01: Default Constructor <---//
        /**
         * @brief default constructor of the class LandBasedRobot
         */
        LandBasedRobot()
                : name_{}, speed_{}, width_{}, length_{}, height_{}, capacity_{}, x_{15}, y_{0}, direction_{'N'} {}

        //---> Constructor 02: Constructor with 1 Argument as input <---//
        /**
         * @brief it is a constructor of the class LandBasedRobot
         * @param string name
         * @param int x
         * @param int y
         * @return Returns none
         */
        explicit LandBasedRobot(std::string &name) :
                name_{name}, speed_{}, width_{}, length_{}, height_{}, capacity_{}, x_{15}, y_{0}, direction_{'N'} {}

        //---> Constructor 03: Constructor with 3 Arguments as input <---//
        /**
         * @brief it is a constructor of the class LandBasedRobot
         * @param string name
         * @param int x
         * @param int y
         * @return Returns none
         */
        LandBasedRobot(std::string &name, int x, int y) :
                name_{name}, speed_{}, width_{}, length_{}, height_{}, capacity_{}, x_{x}, y_{y}, direction_{'N'} {}

        //---> Constructor 04: Constructor with all Arguments as input <---//
        /**
         * @brief it is a constructor of the class LandBasedRobot
         * @param string name
         * @param double speed
         * @param double width
         * @param double length
         * @param double height
         * @param double capacity
         * @param int x
         * @param int y
         * @param char direction
         * @return Returns none
         */
        LandBasedRobot(std::string &name, double speed, double width, double length, double height, double capacity,
                       int x, int y, char direction) :
                name_{name}, speed_{speed}, width_{width}, length_{length}, height_{height}, capacity_{capacity}, x_{x},
                y_{y}, direction_{direction} {}

        //---> Destructors <---//
        /**
         * @brief it is a destructor of the class LandBasedRobot and deletes the objects created
         * @param none
         * @return Returns none
         */
        ~LandBasedRobot() = default;


        //---> Method Prototypes <---//
        /**
         * @brief it is a pure virtual method that gets the direction of the robot in the maze
         * @param string
         * @return Returns direction_
         */
        virtual char GetDirection() = 0;                           //--Get the direction of the robot in the maze

        /**
         * @brief it is a pure virtual method that moves the robot forward in the maze
         * @param none
         * @return Returns none
         */
        virtual void MoveForward(int x, int y, char direction) = 0;                 //--Moves the robot forward

        /**
         * @brief it is a pure virtual method that rotates the robot 90°counter-clockwise in the maze
         * @param none
         * @return Returns none
         */
        virtual void TurnLeft() = 0;                    //--Rotates the robot 90°counter-clockwise

        /**
         * @brief it is a pure virtual method that rotates the robot 90°clockwise in the maze
         * @param none
         * @return Returns none
         */
        virtual void TurnRight() = 0;                   //--Rotates the robot 90°clockwise

        /**
        * @brief it is a pure virtual method that picks up an object
        * @param none
        * @return Returns none
        */
        virtual void PickUp(std::string string) = 0;                                  //--picks up the payload

        /**
        * @brief it is a pure virtual method that release the robot gripper
        * @param none
        * @return Returns none
        */
        virtual void Release(std::string string) = 0;                                 //--Releases the payload

        //---> Mutators <---//
        /**
         * @brief it is a setter method for the Robot Name
         * @param string name
         * @return Returns none
         */
        virtual void setName(std::string name);

        /**
         * @brief it is a setter method for the Robot speed
         * @param double speed
         * @return Returns none
         */
        virtual void setSpeed(double speed);

        /**
         * @brief it is a setter method for the robot width
         * @param double width
         * @return Returns none
         */
        virtual void setWidth(double width);

        /**
         * @brief it is a setter method for the robot length
         * @param double length
         * @return Returns none
         */
        virtual void setLength(double length);

        /**
         * @brief it is a setter method for the robot height
         * @param double height
         * @return Returns none
         */
        virtual void setHeight(double height);

        /**
         * @brief it is a setter method for the robot Payload capacity
         * @param double capacity
         * @return Returns none
         */
        virtual void setCapacity(double capacity);

        /**
         * @brief it is a setter method for the x-axis
         * @param int x
         * @return Returns none
         */
        virtual void set_x_(int x);

        /**
         * @brief it is a setter method for the y-axis
         * @param int y
         * @return Returns none
         */
        virtual void set_y_(int y);

        /**
         * @brief it is a setter method for the direction
         * @param int direction
         * @return Returns none
         */
        virtual void set_direction_(char direction);

        //---> Accessors <---//

        /**
         * @brief it is a getter method for the Name of the robot
         * @param None
         * @return Returns string
         */
        virtual const std::string &getName() const;

        /**
         * @brief it is a getter method for the robot speed
         * @param None
         * @return Returns double
         */
        virtual double getSpeed() const;

        /**
         * @brief it is a getter method for the robot width
         * @param None
         * @return Returns double
         */
        virtual double getWidth() const;

        /**
         * @brief it is a getter method for the robot length
         * @param None
         * @return Returns double
         */
        virtual double getLength() const;

        /**
         * @brief it is a getter method for the robot height
         * @param None
         * @return Returns double
         */
        virtual double getHeight() const;

        /**
         * @brief it is a getter method for the Pay load capacity
         * @param none
         * @return Returns double
         */
        virtual double getCapacity() const;

        /**
         * @brief it is a getter method for the x-axis
         * @param none
         * @return Returns int x_
         */
        virtual int get_x_() const;

        /**
         * @brief it is a getter method for the y-axis
         * @param none
         * @return Returns int y_
         */
        virtual int get_y_() const;

        /**
         * @brief it is a getter method for direction
         * @param none
         * @return Returns int direction_
         */
        virtual char get_direction_() const;


    };//--Class LandBasedRobot
}//--namespace fp


#endif //MAZE_SOLVER_ROBOT_LANDBASEDROBOT_H
