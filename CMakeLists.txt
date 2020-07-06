cmake_minimum_required(VERSION 3.6)
project(maze_solver_robot)

set(CMAKE_CXX_STANDARD 14)

add_executable(maze_solver_robot
        main.cpp
        README.md src/Maze/maze.cpp src/Maze/maze.h src/LandBasedWheeled/landbasedwheeled.cpp src/LandBasedWheeled/landbasedwheeled.h src/LandBasedTracked/landbasedtracked.cpp src/LandBasedTracked/landbasedtracked.h src/LandBasedRobot/landbasedrobot.cpp src/LandBasedRobot/landbasedrobot.h src/API/api.cpp src/API/api.h src/Algorithm/algorithm.cpp src/Algorithm/algorithm.h)
