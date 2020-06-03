/**
* @file algorithm.h
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
*  This is the header for the class Algorithm, implementing the Depth First Search and maze solver algorithm
*  in this class and navigating the robot through the maze.
*/
#ifndef MAZE_SOLVER_ROBOT_ALGORITHM_H
#define MAZE_SOLVER_ROBOT_ALGORITHM_H

#include <string>
#include<iostream>
#include "../API/api.h"
#include "../LandBasedRobot/landbasedrobot.h"
#include "../Maze/maze.h"
#include <map>
#include <stack>
#include <array>
#include <vector>
#include <utility>
#include <memory>


namespace fp {
    struct Node {
        //---> Attributes <---//
        int dist_;
        std::array<int, 2> parent_node_;

        //---> Constructor 01: Default constructor <---//
        Node() : dist_{}, parent_node_{} {}

        //---> Destructors <---//
        ~Node() = default;
    };

    struct Node2 {
        //---> Attributes <---//
        int dist_{};
        bool N, S, E, W;
        std::array<int, 2> parent_node_{};
        std::stack<std::array<int, 2>> child_node_;

        //---> Constructor 01: Default constructor <---//
        Node2() : dist_{}, parent_node_{}, child_node_{}, N{}, S{}, E{}, W{} {}

        //---> Destructors <---//
        ~Node2() = default;
    };


    class Algorithm {
    public:
        bool path_found_, need_newpath_;
        bool temp_goal_{false}, path_blocked{true};
        int visited_Count = 0;
        fp::Maze maze_info;
        char current_direction_;
        char block_direction_;
        std::array<int, 2> current_node_;
        std::array<int, 2> parent_node_;
        std::stack<std::array<int, 2> > stack_;
        std::shared_ptr<fp::LandBasedRobot> robot_;
        std::stack<std::array<int, 2>> path_stack_;
        std::array<std::array<Node, 16>, 16> node_info;
        std::array<std::array<Node2, 16>, 16> node_master_;
        std::array<std::array<bool, 16>, 16> explored_node_;
        std::array<std::array<bool, 16>, 16> visited_node_;
        std::array<int, 2> goal1_, goal2_, goal3_, goal4_, end_goal_;


    public:
        //---> Constructor 01: Default Constructor <---//
        Algorithm() : path_found_{false}, need_newpath_{true}, current_direction_{'N'}, goal1_{8, 7},
                      goal2_{8, 8}, goal3_{7, 8}, goal4_{7, 7},
                      end_goal_{}, current_node_{}, block_direction_{}, stack_{}, path_stack_{}, parent_node_{},
                      visited_node_{}, node_master_{}, explored_node_{}, robot_{nullptr} {

        }

        //---> Destructor <---//
        ~Algorithm() = default;

        //---> method prototypes <---//
        /**
         * @brief takes a node as input and return true if the node visited or else false
         * @param std::array<int, 2> cur_node
         * @return Returns true if the node is explored/visited already
         */
        bool IsExplored(std::array<int, 2> cur_node);

        /**
         * @brief finds the neighbouring nodes of a given input node
         * @param std::array<int, 2> cur_node
         * @return none
         */
        void FindNeighbours(std::array<int, 2> cur_node, char curr_dir);

        /**
         * @brief Back track to the start node from a given node
         * @param goal node
         * @param node information of the maze
         * @return Returns std::stack<std::array<int, 2>> the back tracked path to the start node from the goal
         */
        std::stack<std::array<int, 2>>
        BackTrack(std::array<int, 2> current_node, std::array<std::array<Node2, 16>, 16> &node);

        /**
         * @brief Maze solver function
         * @param Robot object (const std::shared_ptr<fp::LandBasedRobot>& robot)
         * @return none
         */
        void DFSAlgorithm(const std::shared_ptr<fp::LandBasedRobot> &robot);


        /**
         * @brief Navigate the robot through the backtracked path in the maze
         * @param back tracked path (std::stack<std::array<int, 2>>& path)
         * @return none
         */
        void Navigate(std::array<int, 2> &current, std::array<int, 2> &next);

        /**
         * @brief clear the stack
         * @param none
         * @return none
         */
        void ClearStack();

        /**
         * @brief set local Values to defaults
         * @param none
         * @return none
         */
        void SetDefaults();

        bool IsVisited(std::array<int, 2> cur_node);
    };
}


#endif //MAZE_SOLVER_ROBOT_ALGORITHM_H
