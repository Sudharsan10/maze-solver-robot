/**
* @file algorithm.cpp
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
*  This is implementation of Maze solver and Depth first search algorithm.
*/

#include "algorithm.h"
#include "../API/api.h"
#include "../Maze/maze.h"

/**
 * @brief clear the stack
 * @param none
 * @return none
 */
void fp::Algorithm::ClearStack() {
    while (!this->stack_.empty()) this->stack_.pop();
}

/**
 * @brief takes a node as input and verify whether the node has been explored
 * @param std::array<int, 2> cur_node
 * @return Returns true if the node is already explored or else false
 */
bool fp::Algorithm::IsExplored(std::array<int, 2> cur_node) {
    return this->explored_node_.at(cur_node.at(0)).at(cur_node.at(1));
}

/**
 * @brief takes a node as input and verify whether the node has been explored
 * @param std::array<int, 2> cur_node
 * @return Returns true if the node is already explored or else false
 */
bool fp::Algorithm::IsVisited(std::array<int, 2> cur_node) {
    return this->visited_node_.at(cur_node.at(0)).at(cur_node.at(1));
}

/**
 * @brief set Default Values
 * @param none
 * @return none
 */
void fp::Algorithm::SetDefaults() {
    this->temp_goal_ = false;
    fp::API::clearAllColor();
    fp::API::setColor(0, 0, 'g');
    fp::API::setColor(this->goal1_[1], 15 - this->goal1_[0], 'w');
    fp::API::setColor(this->goal2_[1], 15 - this->goal2_[0], 'w');
    fp::API::setColor(this->goal3_[1], 15 - this->goal3_[0], 'w');
    fp::API::setColor(this->goal4_[1], 15 - this->goal4_[0], 'w');
}

/**
 * @brief Maze solver algorithm using given search algorithm
 * @param std::array<int, 2> start
 * @return Returns std::stack<std::array<int, 2>>
 */
void fp::Algorithm::DFSAlgorithm(const std::shared_ptr<fp::LandBasedRobot> &robot) {
    this->robot_ = robot;
    char curr_direction{robot->GetDirection()};
    std::array<int, 2> curr_node{robot->get_x_(), robot->get_y_()};
    std::array<int, 2> next_node{};
    this->node_master_[curr_node[0]][curr_node[1]].parent_node_ = curr_node;

    //---> Step 01: Clear all tile color <---//
    SetDefaults();
    while (true) {
        //---> Step 02: Read walls around the robot <---//
        this->maze_info.ReadMaze(curr_node, curr_direction);
        FindNeighbours(curr_node, curr_direction);
        if (!this->node_master_[curr_node[0]][curr_node[1]].child_node_.empty()) {
            next_node = this->node_master_[curr_node[0]][curr_node[1]].child_node_.top();
            this->node_master_[curr_node[0]][curr_node[1]].child_node_.pop();
            std::cerr << "Child Node: " << next_node[0] << ", " << next_node[1] << std::endl;
        } else {
            next_node = this->node_master_[curr_node[0]][curr_node[1]].parent_node_;
            std::cerr << "Next is Parent Node: " << next_node[0] << ", " << next_node[1] << std::endl;
        }
        this->Navigate(curr_node, next_node);


        //---> Step 06: Get robot current cell info <---//
        curr_direction = this->robot_->GetDirection();
        curr_node = next_node;

        //---> Step 07: Check for goal <---//
        if (curr_node == this->goal1_ || curr_node == this->goal2_ ||
            curr_node == this->goal3_ || curr_node == this->goal4_) {
            SetDefaults();
            this->end_goal_ = curr_node;
            fp::API::setColor(curr_node[1], 15 - curr_node[0], 'r');
            return;
        }
    }
    std::cerr << "\nNo path found!\n" << std::endl;
}

/**
 * @brief Maze solver algorithm using given search algorithm
 * @param std::array<int, 2> start
 * @return Returns std::stack<std::array<int, 2>>
 */
void fp::Algorithm::Navigate(std::array<int, 2> &current, std::array<int, 2> &next) {
    int x{}, y{};
    char curr_direction{};
    char direction_togo{};

    //---> Step 01: Extract the current Node and Next Node <---//
    std::array<int, 2> node_curr{current}, node_next{next};

    //---> Step 02: Compute the togo direction <---//
    x = node_next[0] - node_curr[0];
    y = node_next[1] - node_curr[1];
    curr_direction = this->robot_->GetDirection();

    if (x == -1 && y == 0) direction_togo = 'N';
    else if (x == 1 && y == 0) direction_togo = 'S';
    else if (x == 0 && y == -1) direction_togo = 'W';
    else if (x == 0 && y == 1) direction_togo = 'E';

    //---> Step 03: Navigate the Robot and update new location and direction info <---//
    if (curr_direction == 'N') {
        if (direction_togo == 'N') {
            if (!fp::API::wallFront()) this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
            else this->path_blocked = true;
        } else if (direction_togo == 'S') {
            this->robot_->TurnLeft();
            this->robot_->TurnLeft();
            this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
        } else if (direction_togo == 'E') {
            if (!fp::API::wallRight()) {
                this->robot_->TurnRight();
                this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
            } else this->path_blocked = true;
        } else if (direction_togo == 'W') {
            if (!fp::API::wallLeft()) {
                this->robot_->TurnLeft();
                this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
            } else this->path_blocked = true;
        }
    } else if (curr_direction == 'S') {
        if (direction_togo == 'N') {
            this->robot_->TurnLeft();
            this->robot_->TurnLeft();
            this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
        } else if (direction_togo == 'S') {
            if (!fp::API::wallFront()) this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
            else this->path_blocked = true;
        } else if (direction_togo == 'E') {
            if (!fp::API::wallLeft()) {
                this->robot_->TurnLeft();
                this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
            } else this->path_blocked = true;
        } else if (direction_togo == 'W') {
            if (!fp::API::wallRight()) {
                this->robot_->TurnRight();
                this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
            } else this->path_blocked = true;
        }
    } else if (curr_direction == 'E') {
        if (direction_togo == 'N') {
            if (!fp::API::wallLeft()) {
                this->robot_->TurnLeft();
                this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
            } else this->path_blocked = true;
        } else if (direction_togo == 'S') {
            if (!fp::API::wallRight()) {
                this->robot_->TurnRight();
                this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
            } else this->path_blocked = true;
        } else if (direction_togo == 'E') {
            if (!fp::API::wallFront()) this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
            else this->path_blocked = true;
        } else if (direction_togo == 'W') {
            this->robot_->TurnLeft();
            this->robot_->TurnLeft();
            this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
        }
    } else if (curr_direction == 'W') {
        if (direction_togo == 'N') {
            if (!fp::API::wallRight()) {
                this->robot_->TurnRight();
                this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
            } else this->path_blocked = true;
        } else if (direction_togo == 'S') {
            if (!fp::API::wallLeft()) {
                this->robot_->TurnLeft();
                this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
            } else this->path_blocked = true;
        } else if (direction_togo == 'E') {
            this->robot_->TurnLeft();
            this->robot_->TurnLeft();
            this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
        } else if (direction_togo == 'W') {
            if (!fp::API::wallFront()) this->robot_->MoveForward(node_next[0], node_next[1], direction_togo);
            else this->path_blocked = true;
        }
    }
}

/**
 * @brief finds the neighbouring nodes of a given input node
 * @param std::array<int, 2> cur_node
 * @return none
 */
void fp::Algorithm::FindNeighbours(std::array<int, 2> cur_node, char curr_dir) {
    char robotDirection{this->robot_->GetDirection()};
    bool N{this->maze_info.North_[cur_node[0]][cur_node[1]]},
            S{this->maze_info.South_[cur_node[0]][cur_node[1]]},
            E{this->maze_info.East_[cur_node[0]][cur_node[1]]},
            W{this->maze_info.West_[cur_node[0]][cur_node[1]]};

    //---> Compute the neighbouring possible  nodes <---//
    std::array<int, 2> node_N{cur_node[0] - 1, cur_node[1]},
            node_W{cur_node[0], cur_node[1] - 1},
            node_S{cur_node[0] + 1, cur_node[1]},
            node_E{cur_node[0], cur_node[1] + 1};

    if (!IsVisited(cur_node)) {
        this->visited_node_[cur_node[0]][cur_node[1]] = true;
        this->visited_Count++;
        if (!this->temp_goal_ && node_E[1] <= 15 && !E && curr_dir != 'W') {
            this->node_master_[cur_node[0]][cur_node[1]].child_node_.push(node_E);
            if (!IsVisited(node_E))
                this->node_master_[node_E[0]][node_E[1]].parent_node_ = cur_node;
        }
        if (!this->temp_goal_ && node_N[0] >= 0 && !N && curr_dir != 'S') {
            this->node_master_[cur_node[0]][cur_node[1]].child_node_.push(node_N);
            if (!IsVisited(node_N))
                this->node_master_[node_N[0]][node_N[1]].parent_node_ = cur_node;
        }
        if (!this->temp_goal_ && node_W[1] >= 0 && !W && curr_dir != 'E') {
            this->node_master_[cur_node[0]][cur_node[1]].child_node_.push(node_W);
            if (!IsVisited(node_W))
                this->node_master_[node_W[0]][node_W[1]].parent_node_ = cur_node;
        }
        if (!this->temp_goal_ && node_S[0] <= 15 && !S && curr_dir != 'N') {
            this->node_master_[cur_node[0]][cur_node[1]].child_node_.push(node_S);
            if (!IsVisited(node_S))
                this->node_master_[node_S[0]][node_S[1]].parent_node_ = cur_node;
        }
    }
}

/**
 * @brief Back track to the start node from a given node
 * @param goal node
 * @param node information of the maze
 * @return Returns std::stack<std::array<int, 2>> the back tracked path to the start node from the goal
 */
std::stack<std::array<int, 2>>
fp::Algorithm::BackTrack(std::array<int, 2> current_node, std::array<std::array<Node, 16>, 16> &node) {
    std::array<int, 2> parent_node = node[current_node[0]][current_node[1]].parent_node_;
    this->path_stack_.push(current_node);
    while (!(current_node == parent_node)) {
        fp::Maze::ColorPath(current_node);
        current_node = parent_node;
        parent_node = node[current_node[0]][current_node[1]].parent_node_;
        this->path_stack_.push(current_node);
    }
    return this->path_stack_;
}
