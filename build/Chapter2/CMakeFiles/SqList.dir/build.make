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
include Chapter2/CMakeFiles/SqList.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Chapter2/CMakeFiles/SqList.dir/compiler_depend.make

# Include the progress variables for this target.
include Chapter2/CMakeFiles/SqList.dir/progress.make

# Include the compile flags for this target's objects.
include Chapter2/CMakeFiles/SqList.dir/flags.make

Chapter2/CMakeFiles/SqList.dir/SqList.cc.o: Chapter2/CMakeFiles/SqList.dir/flags.make
Chapter2/CMakeFiles/SqList.dir/SqList.cc.o: ../Chapter2/SqList.cc
Chapter2/CMakeFiles/SqList.dir/SqList.cc.o: Chapter2/CMakeFiles/SqList.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tang/C_Cpp/Data_Structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Chapter2/CMakeFiles/SqList.dir/SqList.cc.o"
	cd /home/tang/C_Cpp/Data_Structure/build/Chapter2 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Chapter2/CMakeFiles/SqList.dir/SqList.cc.o -MF CMakeFiles/SqList.dir/SqList.cc.o.d -o CMakeFiles/SqList.dir/SqList.cc.o -c /home/tang/C_Cpp/Data_Structure/Chapter2/SqList.cc

Chapter2/CMakeFiles/SqList.dir/SqList.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SqList.dir/SqList.cc.i"
	cd /home/tang/C_Cpp/Data_Structure/build/Chapter2 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tang/C_Cpp/Data_Structure/Chapter2/SqList.cc > CMakeFiles/SqList.dir/SqList.cc.i

Chapter2/CMakeFiles/SqList.dir/SqList.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SqList.dir/SqList.cc.s"
	cd /home/tang/C_Cpp/Data_Structure/build/Chapter2 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tang/C_Cpp/Data_Structure/Chapter2/SqList.cc -o CMakeFiles/SqList.dir/SqList.cc.s

# Object files for target SqList
SqList_OBJECTS = \
"CMakeFiles/SqList.dir/SqList.cc.o"

# External object files for target SqList
SqList_EXTERNAL_OBJECTS =

../Chapter2/bin/SqList: Chapter2/CMakeFiles/SqList.dir/SqList.cc.o
../Chapter2/bin/SqList: Chapter2/CMakeFiles/SqList.dir/build.make
../Chapter2/bin/SqList: Chapter2/CMakeFiles/SqList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tang/C_Cpp/Data_Structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../Chapter2/bin/SqList"
	cd /home/tang/C_Cpp/Data_Structure/build/Chapter2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SqList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Chapter2/CMakeFiles/SqList.dir/build: ../Chapter2/bin/SqList
.PHONY : Chapter2/CMakeFiles/SqList.dir/build

Chapter2/CMakeFiles/SqList.dir/clean:
	cd /home/tang/C_Cpp/Data_Structure/build/Chapter2 && $(CMAKE_COMMAND) -P CMakeFiles/SqList.dir/cmake_clean.cmake
.PHONY : Chapter2/CMakeFiles/SqList.dir/clean

Chapter2/CMakeFiles/SqList.dir/depend:
	cd /home/tang/C_Cpp/Data_Structure/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tang/C_Cpp/Data_Structure /home/tang/C_Cpp/Data_Structure/Chapter2 /home/tang/C_Cpp/Data_Structure/build /home/tang/C_Cpp/Data_Structure/build/Chapter2 /home/tang/C_Cpp/Data_Structure/build/Chapter2/CMakeFiles/SqList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Chapter2/CMakeFiles/SqList.dir/depend
