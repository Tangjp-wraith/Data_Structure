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
include Chapter5/CMakeFiles/HuffmanTree.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Chapter5/CMakeFiles/HuffmanTree.dir/compiler_depend.make

# Include the progress variables for this target.
include Chapter5/CMakeFiles/HuffmanTree.dir/progress.make

# Include the compile flags for this target's objects.
include Chapter5/CMakeFiles/HuffmanTree.dir/flags.make

Chapter5/CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.o: Chapter5/CMakeFiles/HuffmanTree.dir/flags.make
Chapter5/CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.o: ../Chapter5/HuffmanTree.cc
Chapter5/CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.o: Chapter5/CMakeFiles/HuffmanTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tang/C_Cpp/Data_Structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Chapter5/CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.o"
	cd /home/tang/C_Cpp/Data_Structure/build/Chapter5 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Chapter5/CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.o -MF CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.o.d -o CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.o -c /home/tang/C_Cpp/Data_Structure/Chapter5/HuffmanTree.cc

Chapter5/CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.i"
	cd /home/tang/C_Cpp/Data_Structure/build/Chapter5 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tang/C_Cpp/Data_Structure/Chapter5/HuffmanTree.cc > CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.i

Chapter5/CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.s"
	cd /home/tang/C_Cpp/Data_Structure/build/Chapter5 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tang/C_Cpp/Data_Structure/Chapter5/HuffmanTree.cc -o CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.s

# Object files for target HuffmanTree
HuffmanTree_OBJECTS = \
"CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.o"

# External object files for target HuffmanTree
HuffmanTree_EXTERNAL_OBJECTS =

../Chapter5/bin/HuffmanTree: Chapter5/CMakeFiles/HuffmanTree.dir/HuffmanTree.cc.o
../Chapter5/bin/HuffmanTree: Chapter5/CMakeFiles/HuffmanTree.dir/build.make
../Chapter5/bin/HuffmanTree: Chapter5/CMakeFiles/HuffmanTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tang/C_Cpp/Data_Structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../Chapter5/bin/HuffmanTree"
	cd /home/tang/C_Cpp/Data_Structure/build/Chapter5 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HuffmanTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Chapter5/CMakeFiles/HuffmanTree.dir/build: ../Chapter5/bin/HuffmanTree
.PHONY : Chapter5/CMakeFiles/HuffmanTree.dir/build

Chapter5/CMakeFiles/HuffmanTree.dir/clean:
	cd /home/tang/C_Cpp/Data_Structure/build/Chapter5 && $(CMAKE_COMMAND) -P CMakeFiles/HuffmanTree.dir/cmake_clean.cmake
.PHONY : Chapter5/CMakeFiles/HuffmanTree.dir/clean

Chapter5/CMakeFiles/HuffmanTree.dir/depend:
	cd /home/tang/C_Cpp/Data_Structure/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tang/C_Cpp/Data_Structure /home/tang/C_Cpp/Data_Structure/Chapter5 /home/tang/C_Cpp/Data_Structure/build /home/tang/C_Cpp/Data_Structure/build/Chapter5 /home/tang/C_Cpp/Data_Structure/build/Chapter5/CMakeFiles/HuffmanTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Chapter5/CMakeFiles/HuffmanTree.dir/depend

