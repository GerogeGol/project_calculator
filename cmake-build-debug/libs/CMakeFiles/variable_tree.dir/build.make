# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug

# Include any dependencies generated for this target.
include libs/CMakeFiles/variable_tree.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libs/CMakeFiles/variable_tree.dir/compiler_depend.make

# Include the progress variables for this target.
include libs/CMakeFiles/variable_tree.dir/progress.make

# Include the compile flags for this target's objects.
include libs/CMakeFiles/variable_tree.dir/flags.make

libs/CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.o: libs/CMakeFiles/variable_tree.dir/flags.make
libs/CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.o: ../libs/variable_tree/variable_tree.cpp
libs/CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.o: libs/CMakeFiles/variable_tree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libs/CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.o"
	cd /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug/libs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.o -MF CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.o.d -o CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.o -c /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/libs/variable_tree/variable_tree.cpp

libs/CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.i"
	cd /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug/libs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/libs/variable_tree/variable_tree.cpp > CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.i

libs/CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.s"
	cd /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug/libs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/libs/variable_tree/variable_tree.cpp -o CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.s

# Object files for target variable_tree
variable_tree_OBJECTS = \
"CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.o"

# External object files for target variable_tree
variable_tree_EXTERNAL_OBJECTS =

libs/libvariable_tree.a: libs/CMakeFiles/variable_tree.dir/variable_tree/variable_tree.cpp.o
libs/libvariable_tree.a: libs/CMakeFiles/variable_tree.dir/build.make
libs/libvariable_tree.a: libs/CMakeFiles/variable_tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libvariable_tree.a"
	cd /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug/libs && $(CMAKE_COMMAND) -P CMakeFiles/variable_tree.dir/cmake_clean_target.cmake
	cd /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug/libs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/variable_tree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/CMakeFiles/variable_tree.dir/build: libs/libvariable_tree.a
.PHONY : libs/CMakeFiles/variable_tree.dir/build

libs/CMakeFiles/variable_tree.dir/clean:
	cd /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug/libs && $(CMAKE_COMMAND) -P CMakeFiles/variable_tree.dir/cmake_clean.cmake
.PHONY : libs/CMakeFiles/variable_tree.dir/clean

libs/CMakeFiles/variable_tree.dir/depend:
	cd /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/libs /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug/libs /home/george/Desktop/University/1_Course/Programming/Projects/project_calculator/cmake-build-debug/libs/CMakeFiles/variable_tree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/CMakeFiles/variable_tree.dir/depend

