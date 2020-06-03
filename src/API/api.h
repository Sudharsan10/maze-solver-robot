//
// Created by codezen on 6/3/20.
//

#ifndef MAZE_SOLVER_ROBOT_API_H
#define MAZE_SOLVER_ROBOT_API_H

#include <iostream>


namespace fp {

    class API {

    public:
        //---> Constructor 01: Default constructor <---//
        API() = default;                                                                          //--default Constructor

        //---> Destructor <---//
        ~API() = default;                                                                         //--default destructor

        //---> method prototypes <---//
        /**
         * @brief returns the width of the maze
         * @param none
         * @return Returns int
         */
        static int mazeWidth();                                                         //--return the width of the maze

        /**
         * @brief returns the height of the maze
         * @param none
         * @return Returns int
         */
        static int
        mazeHeight();                                                        //--return the height of the maze

        /**
         * @brief returns true if there is a wall in front of the robot, else false
         * @param none
         * @return Returns bool
         */
        static bool
        wallFront();                                                        //--true if there is a wall in front of the robot, else false

        /**
         * @brief returns true if there is a wall in right of the robot, else false
         * @param none
         * @return Returns bool
         */
        static bool
        wallRight();                                                        //--true if there is a wall in right of the robot, else false

        /**
         * @brief returns true if there is a wall in left of the robot, else false
         * @param none
         * @return Returns bool
         */
        static bool
        wallLeft();                                                         //--true if there is a wall in left of the robot, else false

        /**
         * @brief moves the robot forward by one cell
         * @param none
         * @return none
         */
        static void
        moveForward();                                                      //--move the robot forward by one cell

        /**
         * @brief turns the robot 90 degrees to the right
         * @param none
         * @return none
         */
        static void
        turnRight();                                                        //--turn the robot 90 degrees to the right

        /**
         * @brief turns the robot 90 degrees to the left
         * @param none
         * @return none
         */
        static void
        turnLeft();                                                         //--turn the robot 90 degrees to the left

        /**
         * @brief display a wall in the maze
         * @param int x
         * @param int y
         * @param char direction
         * @return Returns none
         */
        static void setWall(int x, int y, char direction);                              //--display a wall in the maze

        /**
         * @brief clear a wall from maze
         * @param int x
         * @param int y
         * @param char direction
         * @return Returns none
         */
        static void clearWall(int x, int y, char direction);                            //--clear a wall from maze

        /**
         * @brief sets the given color of a cell
         * @param int x
         * @param int y
         * @param char color
         * @return Returns none
         */
        static void setColor(int x, int y, char color);                                 //--set color of a cell

        /**
         * @brief clear the color of a cell
         * @param int x
         * @param int y
         * @return Returns none
         */
        static void clearColor(int x, int y);                                           //--clear the color of a cell

        /**
         * @brief clears the color of all cell
         * @param none
         * @return Returns none
         */
        static void clearAllColor();                                                    //--clear the color of all cell

        /**
         * @brief sets a text of a cell
         * @param int x
         * @param int y
         * @param std::string &text
         * @return Returns none
         */
        static void setText(int x, int y, const std::string &text);                     //--set the text of a cell

        /**
         * @brief clear the text of a cell
         * @param int x
         * @param int y
         * @return Returns none
         */
        static void clearText(int x, int y);                                            //--clear the text of a cell

        /**
         * @brief clear the text of all cells
         * @param none
         * @return Returns none
         */
        static void clearAllText();                                                     //--clear the text of all cells

        /**
         * @brief returns true if the rest button was pressed, else false
         * @param none
         * @return Returns bool
         */
        static bool
        wasReset();                                                         //--true if the rest button was pressed, else false

        /**
         * @brief Resets the simulation
         * @param none
         * @return Returns none
         */
        static void ackReset();                                                         //--reset simulation
    };//--Class API
}//--namespace fp

#endif //MAZE_SOLVER_ROBOT_API_H
