/**
* @file main.cpp
* @authors
*
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
*  This is main.cpp file for the project which involves a robot moving in a maze using
*  Depth first search as a path planning algorithm and also used micro-mouse simulator as a
*  visualization tool for both maze and robot. This project is developed using object-oriented
*  programming, inheritance, and polymorphism. Here, two mobile robots are tasked to navigate
*  through a maze to reach Goal from Start.
*/

#include <memory>
#include "src/Algorithm/algorithm.h"
#include "src/API/api.h"
#include "src/LandBasedWheeled/landbasedwheeled.h"
#include "src/LandBasedTracked/landbasedtracked.h"


int main() {
//    std::cerr << "\n-----------------------------> Start <------------------------------\n";
//    std::shared_ptr<fp::LandBasedRobot> wheeled = std::make_shared<fp::LandBasedWheeled>("Husky");
//    fp::Algorithm algorithm;
//    algorithm.Solve(wheeled);
//    std::cerr << "\n----------------------------> The End <-----------------------------\n";

    std::cerr << "\n-----------------------------> Start <------------------------------\n";
    std::shared_ptr<fp::LandBasedRobot> tracked = std::make_shared<fp::LandBasedTracked>("Husky");
    fp::Algorithm algorithm2;
    algorithm2.Solve2(tracked);
    algorithm2.BackTrack2(algorithm2.end_goal_, algorithm2.node_master_);

    std::cerr << "\n Total Nodes Explored: " << algorithm2.visited_Count << std::endl;
    std::cerr << "\n----------------------------> The End <-----------------------------\n";


    return 0;
}