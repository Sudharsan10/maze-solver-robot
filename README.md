<p align="center">
  <a href="https://iamsudharsan.com/maze-solver-robot/">
    <img src=".\img\maze-solver-robot-logo.png" alt="Social-header">
  </a>  
</p>

<p align="center">
  A Maze Solver Robot project.  
  <br>
    <a href=".\docs\report.pdf"><strong>Explore Maze Solver Robot docs »</strong></a>
    <br>
    <br>
    <a href="https://github.com/Sudharsan10/maze-solver-robot/issues/new">Report bug</a>
    ·
    <a href="https://github.com/Sudharsan10/maze-solver-robot/issues/new">Request feature</a>    
</p>

Maze solver Robot is a program to drive a robot through a 16x16 maze using Depth First Search as it's path-planning algorithm. The program is integrated with Micro-mouse simulator a.k.a mms for visualizing the maze and the robot in real-time. 
The concepts of object-oriented programming, inheritance, and dynamic polymorphism were used to develop this project.


## Table of contents
- [Pre-Requisites](#pre-requisites)
- [Quick start](#quick-start)
- [Run instructions](#run-instructions)
- [Status](#status)
- [What's included](#whats-included)
- [Documentation](#documentation)
- [Bugs and Feature requests](#bugs-and-feature-requests)
- [Creators](#creators)
- [Thanks](#thanks)

## Pre-requisites
This app depends on ```Qt5``` libraries. We can setup this up using apt-get package manager (for Debian linux) or conda virtual environment tool.

- setting up using pip installer
    > ```shell script
    > sudo apt-get install qt5-default
    >```
    
## Quick start                                   
- Clone the repo in terminal using following command: 
    > ```shell script
    > git clone https://github.com/Sudharsan10/maze-solver-robot.git
    > ```
    or download github repo as ```.zip``` and extract it in the desired location.
    
- If you would like to use latest micro-mouse simulator and maze files then do the following,   
    > ```shell script
    > cd mms
    >```
    > ```shell script
    > git pull https://github.com/mackorone/mms.git
    >```
    > ```shell script
    > cd .. && cd mazefiles
    >```
    > ```shell script
    > git pull git https://github.com/micromouseonline/mazefiles.git
    >```
    Note: To install and setup anaconda environment follow this [link](#https://docs.anaconda.com/anaconda/install/) first 
    and visit this section again after successfully setting up the conda environment.

## Run instructions
To run the app, first finish the pre-requisites mentioned above, then
- Navigate to the root directory of the cloned repo and start the Micro-Mouse Simulator(mms) using the following command:
    > ```shell script
    > cd mms/src
    > ```
    > ```shell script
    > qmake && make
    > ``` 
    > ```shell script
    > ../../mms/bin/mms
    > ```
    The last command will fire up the micro-mouse simulator.

If every requirement is fulfilled a window should open as follow,

<p align="center;">
    <a href="https://github.com/Sudharsan10/TilePuzzelSolver-App">
    <img src=".\img\start_screen.png" width="100%" alt="start-screen">
    </a>
</p>
 
    
## Status
[![Documentation Status](https://img.shields.io/badge/Documentation-yes-e01563)](https://github.com/Sudharsan10/maze-solver-robot/)
[![Maintenance](https://img.shields.io/badge/Maintained%3F-yes-e01563.svg)](https://github.com/Sudharsan10/maze-solver-robot/graphs/commit-activity)
[![Doc Tool](https://img.shields.io/badge/Doc%20Tool-doxygen-brightgreen)](https://www.python.org/)
[![made-with-C++](https://img.shields.io/badge/C++-14-brightgreen)](https://www.python.org/)
[![pyqt-version](https://img.shields.io/badge/Qt5%20Version-5.9.2-brightgreen)](https://pypi.org/project/PyQt5/)
[![made-with-Markdown](https://img.shields.io/badge/Made%20with-Markdown-0366d6.svg)](http://commonmark.org)
[![contributors](https://img.shields.io/badge/Contributors-01-0366d6)](https://github.com/Sudharsan10/maze-solver-robot/graphs/contributors)
[![Logo](https://img.shields.io/badge/Logo-Adobe%20Photoshop-20639B.svg)](https://github.com/Sudharsan10/maze-solver-robot/graphs/commit-activity)
[![Flow-charts](https://img.shields.io/badge/Flowcharts-MS%20Power%20Point-20639B.svg)](https://github.com/Sudharsan10/maze-solver-robot/graphs/commit-activity)


## What's included
Within the download you'll find the following directories and files, logically grouping the classes under src directory. 
mazefiles and mms directories are submodules based out of third party repo. You'll see something like this:

```text
maze-solver-robot/
├── mazefiles/ ...
├── mms/ ...
├── docs/ ...
├── img/ ...
├── src/
|   ├── Algorithm/ ...
|   ├── API/ ...
|   ├── LandBasedRobot/ ...
|   ├── LandBasedTracked/ ...
|   ├── LandBasedWheeled/ ...
|   └── Maze/ ...
├── main.cpp
├── CMakeLists.txt
└── README.md
```

## Documentation
### Contents:
1. [How to use](#howtouse)
2. [Class Structure](#class-structure)
3. [Depth First Search flowchart](#depth-first-search)
4. [Node Object Data Structure](#node-data-structure)
5. [Implementation](#implementation)
6. [Project Execution](#project-execution)
    
### 1 How to use <a id ='howtouse'></a>

Enter the initial state of the puzzle and goal state of the puzzle as shown in the fig below.


### 2 Class Structure<a id='class-structure'></a>
<img src=".\img\class-structure.png" width="100%" />

### 3 Depth First Search<a id='depth-first-search'></a>
<img src=".\img\dfs.png" width="100%" />

### 4 Node Object Data Structure<a id='node-data-structure'></a>
<img src=".\img\node-data-structure.png" width="100%" />

### 5 Implementation<a id='implementation'></a>
<img src=".\img\implementation.png" width="100%" />

### 6 Project Execution<a id='project-execution'></a>
<img src=".\img\project-execution.png" width="100%" />


## Bugs and feature requests
Have a bug or a feature request? Search for existing and closed issues, if your problem or idea is not addressed yet, 
[please open a new issue](https://github.com/Sudharsan10/maze-solver-robot/issues/new).

## Creators
**@Sudharsan** : <https://www.iamsudharsan.com>

<p align='center'>
    <a id='thanks'></a>
    Thank you for visiting our Repo!
</p>