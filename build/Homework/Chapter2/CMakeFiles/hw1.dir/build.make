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
CMAKE_SOURCE_DIR = /home/tang/C_Cpp/Data_Structure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tang/C_Cpp/Data_Structure/build

# Include any dependencies generated for this target.
include Homework/Chapter2/CMakeFiles/hw1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Homework/Chapter2/CMakeFiles/hw1.dir/compiler_depend.make

# Include the progress variables for this target.
include Homework/Chapter2/CMakeFiles/hw1.dir/progress.make

# Include the compile flags for this target's objects.
include Homework/Chapter2/CMakeFiles/hw1.dir/flags.make

Homework/Chapter2/CMakeFiles/hw1.dir/hw1.cc.o: Homework/Chapter2/CMakeFiles/hw1.dir/flags.make
Homework/Chapter2/CMakeFiles/hw1.dir/hw1.cc.o: ../Homework/Chapter2/hw1.cc
Homework/Chapter2/CMakeFiles/hw1.dir/hw1.cc.o: Homework/Chapter2/CMakeFiles/hw1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tang/C_Cpp/Data_Structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Homework/Chapter2/CMakeFiles/hw1.dir/hw1.cc.o"
	cd /home/tang/C_Cpp/Data_Structure/build/Homework/Chapter2 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Homework/Chapter2/CMakeFiles/hw1.dir/hw1.cc.o -MF CMakeFiles/hw1.dir/hw1.cc.o.d -o CMakeFiles/hw1.dir/hw1.cc.o -c /home/tang/C_Cpp/Data_Structure/Homework/Chapter2/hw1.cc

Homework/Chapter2/CMakeFiles/hw1.dir/hw1.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw1.dir/hw1.cc.i"
	cd /home/tang/C_Cpp/Data_Structure/build/Homework/Chapter2 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tang/C_Cpp/Data_Structure/Homework/Chapter2/hw1.cc > CMakeFiles/hw1.dir/hw1.cc.i

Homework/Chapter2/CMakeFiles/hw1.dir/hw1.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw1.dir/hw1.cc.s"
	cd /home/tang/C_Cpp/Data_Structure/build/Homework/Chapter2 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tang/C_Cpp/Data_Structure/Homework/Chapter2/hw1.cc -o CMakeFiles/hw1.dir/hw1.cc.s

# Object files for target hw1
hw1_OBJECTS = \
"CMakeFiles/hw1.dir/hw1.cc.o"

# External object files for target hw1
hw1_EXTERNAL_OBJECTS =

../Homework/Chapter2/bin/hw1: Homework/Chapter2/CMakeFiles/hw1.dir/hw1.cc.o
../Homework/Chapter2/bin/hw1: Homework/Chapter2/CMakeFiles/hw1.dir/build.make
../Homework/Chapter2/bin/hw1: Homework/Chapter2/CMakeFiles/hw1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tang/C_Cpp/Data_Structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../Homework/Chapter2/bin/hw1"
	cd /home/tang/C_Cpp/Data_Structure/build/Homework/Chapter2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Homework/Chapter2/CMakeFiles/hw1.dir/build: ../Homework/Chapter2/bin/hw1
.PHONY : Homework/Chapter2/CMakeFiles/hw1.dir/build

Homework/Chapter2/CMakeFiles/hw1.dir/clean:
	cd /home/tang/C_Cpp/Data_Structure/build/Homework/Chapter2 && $(CMAKE_COMMAND) -P CMakeFiles/hw1.dir/cmake_clean.cmake
.PHONY : Homework/Chapter2/CMakeFiles/hw1.dir/clean

Homework/Chapter2/CMakeFiles/hw1.dir/depend:
	cd /home/tang/C_Cpp/Data_Structure/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tang/C_Cpp/Data_Structure /home/tang/C_Cpp/Data_Structure/Homework/Chapter2 /home/tang/C_Cpp/Data_Structure/build /home/tang/C_Cpp/Data_Structure/build/Homework/Chapter2 /home/tang/C_Cpp/Data_Structure/build/Homework/Chapter2/CMakeFiles/hw1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Homework/Chapter2/CMakeFiles/hw1.dir/depend

