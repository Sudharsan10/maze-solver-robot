# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/114/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/114/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/codezen/Working-Directory/FinalProject/maze-solver-robot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/maze_solver_robot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/maze_solver_robot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/maze_solver_robot.dir/flags.make

CMakeFiles/maze_solver_robot.dir/main.cpp.o: CMakeFiles/maze_solver_robot.dir/flags.make
CMakeFiles/maze_solver_robot.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/maze_solver_robot.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maze_solver_robot.dir/main.cpp.o -c /home/codezen/Working-Directory/FinalProject/maze-solver-robot/main.cpp

CMakeFiles/maze_solver_robot.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maze_solver_robot.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codezen/Working-Directory/FinalProject/maze-solver-robot/main.cpp > CMakeFiles/maze_solver_robot.dir/main.cpp.i

CMakeFiles/maze_solver_robot.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maze_solver_robot.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codezen/Working-Directory/FinalProject/maze-solver-robot/main.cpp -o CMakeFiles/maze_solver_robot.dir/main.cpp.s

CMakeFiles/maze_solver_robot.dir/src/Maze/maze.cpp.o: CMakeFiles/maze_solver_robot.dir/flags.make
CMakeFiles/maze_solver_robot.dir/src/Maze/maze.cpp.o: ../src/Maze/maze.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/maze_solver_robot.dir/src/Maze/maze.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maze_solver_robot.dir/src/Maze/maze.cpp.o -c /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/Maze/maze.cpp

CMakeFiles/maze_solver_robot.dir/src/Maze/maze.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maze_solver_robot.dir/src/Maze/maze.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/Maze/maze.cpp > CMakeFiles/maze_solver_robot.dir/src/Maze/maze.cpp.i

CMakeFiles/maze_solver_robot.dir/src/Maze/maze.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maze_solver_robot.dir/src/Maze/maze.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/Maze/maze.cpp -o CMakeFiles/maze_solver_robot.dir/src/Maze/maze.cpp.s

CMakeFiles/maze_solver_robot.dir/src/LandBasedWheeled/landbasedwheeled.cpp.o: CMakeFiles/maze_solver_robot.dir/flags.make
CMakeFiles/maze_solver_robot.dir/src/LandBasedWheeled/landbasedwheeled.cpp.o: ../src/LandBasedWheeled/landbasedwheeled.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/maze_solver_robot.dir/src/LandBasedWheeled/landbasedwheeled.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maze_solver_robot.dir/src/LandBasedWheeled/landbasedwheeled.cpp.o -c /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/LandBasedWheeled/landbasedwheeled.cpp

CMakeFiles/maze_solver_robot.dir/src/LandBasedWheeled/landbasedwheeled.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maze_solver_robot.dir/src/LandBasedWheeled/landbasedwheeled.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/LandBasedWheeled/landbasedwheeled.cpp > CMakeFiles/maze_solver_robot.dir/src/LandBasedWheeled/landbasedwheeled.cpp.i

CMakeFiles/maze_solver_robot.dir/src/LandBasedWheeled/landbasedwheeled.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maze_solver_robot.dir/src/LandBasedWheeled/landbasedwheeled.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/LandBasedWheeled/landbasedwheeled.cpp -o CMakeFiles/maze_solver_robot.dir/src/LandBasedWheeled/landbasedwheeled.cpp.s

CMakeFiles/maze_solver_robot.dir/src/LandBasedTracked/landbasedtracked.cpp.o: CMakeFiles/maze_solver_robot.dir/flags.make
CMakeFiles/maze_solver_robot.dir/src/LandBasedTracked/landbasedtracked.cpp.o: ../src/LandBasedTracked/landbasedtracked.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/maze_solver_robot.dir/src/LandBasedTracked/landbasedtracked.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maze_solver_robot.dir/src/LandBasedTracked/landbasedtracked.cpp.o -c /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/LandBasedTracked/landbasedtracked.cpp

CMakeFiles/maze_solver_robot.dir/src/LandBasedTracked/landbasedtracked.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maze_solver_robot.dir/src/LandBasedTracked/landbasedtracked.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/LandBasedTracked/landbasedtracked.cpp > CMakeFiles/maze_solver_robot.dir/src/LandBasedTracked/landbasedtracked.cpp.i

CMakeFiles/maze_solver_robot.dir/src/LandBasedTracked/landbasedtracked.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maze_solver_robot.dir/src/LandBasedTracked/landbasedtracked.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/LandBasedTracked/landbasedtracked.cpp -o CMakeFiles/maze_solver_robot.dir/src/LandBasedTracked/landbasedtracked.cpp.s

CMakeFiles/maze_solver_robot.dir/src/LandBasedRobot/landbasedrobot.cpp.o: CMakeFiles/maze_solver_robot.dir/flags.make
CMakeFiles/maze_solver_robot.dir/src/LandBasedRobot/landbasedrobot.cpp.o: ../src/LandBasedRobot/landbasedrobot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/maze_solver_robot.dir/src/LandBasedRobot/landbasedrobot.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maze_solver_robot.dir/src/LandBasedRobot/landbasedrobot.cpp.o -c /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/LandBasedRobot/landbasedrobot.cpp

CMakeFiles/maze_solver_robot.dir/src/LandBasedRobot/landbasedrobot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maze_solver_robot.dir/src/LandBasedRobot/landbasedrobot.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/LandBasedRobot/landbasedrobot.cpp > CMakeFiles/maze_solver_robot.dir/src/LandBasedRobot/landbasedrobot.cpp.i

CMakeFiles/maze_solver_robot.dir/src/LandBasedRobot/landbasedrobot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maze_solver_robot.dir/src/LandBasedRobot/landbasedrobot.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/LandBasedRobot/landbasedrobot.cpp -o CMakeFiles/maze_solver_robot.dir/src/LandBasedRobot/landbasedrobot.cpp.s

CMakeFiles/maze_solver_robot.dir/src/API/api.cpp.o: CMakeFiles/maze_solver_robot.dir/flags.make
CMakeFiles/maze_solver_robot.dir/src/API/api.cpp.o: ../src/API/api.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/maze_solver_robot.dir/src/API/api.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maze_solver_robot.dir/src/API/api.cpp.o -c /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/API/api.cpp

CMakeFiles/maze_solver_robot.dir/src/API/api.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maze_solver_robot.dir/src/API/api.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/API/api.cpp > CMakeFiles/maze_solver_robot.dir/src/API/api.cpp.i

CMakeFiles/maze_solver_robot.dir/src/API/api.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maze_solver_robot.dir/src/API/api.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/API/api.cpp -o CMakeFiles/maze_solver_robot.dir/src/API/api.cpp.s

CMakeFiles/maze_solver_robot.dir/src/Algorithm/algorithm.cpp.o: CMakeFiles/maze_solver_robot.dir/flags.make
CMakeFiles/maze_solver_robot.dir/src/Algorithm/algorithm.cpp.o: ../src/Algorithm/algorithm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/maze_solver_robot.dir/src/Algorithm/algorithm.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maze_solver_robot.dir/src/Algorithm/algorithm.cpp.o -c /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/Algorithm/algorithm.cpp

CMakeFiles/maze_solver_robot.dir/src/Algorithm/algorithm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maze_solver_robot.dir/src/Algorithm/algorithm.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/Algorithm/algorithm.cpp > CMakeFiles/maze_solver_robot.dir/src/Algorithm/algorithm.cpp.i

CMakeFiles/maze_solver_robot.dir/src/Algorithm/algorithm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maze_solver_robot.dir/src/Algorithm/algorithm.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/codezen/Working-Directory/FinalProject/maze-solver-robot/src/Algorithm/algorithm.cpp -o CMakeFiles/maze_solver_robot.dir/src/Algorithm/algorithm.cpp.s

# Object files for target maze_solver_robot
maze_solver_robot_OBJECTS = \
"CMakeFiles/maze_solver_robot.dir/main.cpp.o" \
"CMakeFiles/maze_solver_robot.dir/src/Maze/maze.cpp.o" \
"CMakeFiles/maze_solver_robot.dir/src/LandBasedWheeled/landbasedwheeled.cpp.o" \
"CMakeFiles/maze_solver_robot.dir/src/LandBasedTracked/landbasedtracked.cpp.o" \
"CMakeFiles/maze_solver_robot.dir/src/LandBasedRobot/landbasedrobot.cpp.o" \
"CMakeFiles/maze_solver_robot.dir/src/API/api.cpp.o" \
"CMakeFiles/maze_solver_robot.dir/src/Algorithm/algorithm.cpp.o"

# External object files for target maze_solver_robot
maze_solver_robot_EXTERNAL_OBJECTS =

maze_solver_robot: CMakeFiles/maze_solver_robot.dir/main.cpp.o
maze_solver_robot: CMakeFiles/maze_solver_robot.dir/src/Maze/maze.cpp.o
maze_solver_robot: CMakeFiles/maze_solver_robot.dir/src/LandBasedWheeled/landbasedwheeled.cpp.o
maze_solver_robot: CMakeFiles/maze_solver_robot.dir/src/LandBasedTracked/landbasedtracked.cpp.o
maze_solver_robot: CMakeFiles/maze_solver_robot.dir/src/LandBasedRobot/landbasedrobot.cpp.o
maze_solver_robot: CMakeFiles/maze_solver_robot.dir/src/API/api.cpp.o
maze_solver_robot: CMakeFiles/maze_solver_robot.dir/src/Algorithm/algorithm.cpp.o
maze_solver_robot: CMakeFiles/maze_solver_robot.dir/build.make
maze_solver_robot: CMakeFiles/maze_solver_robot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable maze_solver_robot"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/maze_solver_robot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/maze_solver_robot.dir/build: maze_solver_robot

.PHONY : CMakeFiles/maze_solver_robot.dir/build

CMakeFiles/maze_solver_robot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/maze_solver_robot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/maze_solver_robot.dir/clean

CMakeFiles/maze_solver_robot.dir/depend:
	cd /home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codezen/Working-Directory/FinalProject/maze-solver-robot /home/codezen/Working-Directory/FinalProject/maze-solver-robot /home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug /home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug /home/codezen/Working-Directory/FinalProject/maze-solver-robot/cmake-build-debug/CMakeFiles/maze_solver_robot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/maze_solver_robot.dir/depend

