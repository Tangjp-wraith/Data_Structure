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
include SampleCode/Chapter2/CMakeFiles/Polynomial.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include SampleCode/Chapter2/CMakeFiles/Polynomial.dir/compiler_depend.make

# Include the progress variables for this target.
include SampleCode/Chapter2/CMakeFiles/Polynomial.dir/progress.make

# Include the compile flags for this target's objects.
include SampleCode/Chapter2/CMakeFiles/Polynomial.dir/flags.make

SampleCode/Chapter2/CMakeFiles/Polynomial.dir/Polynomial.cc.o: SampleCode/Chapter2/CMakeFiles/Polynomial.dir/flags.make
SampleCode/Chapter2/CMakeFiles/Polynomial.dir/Polynomial.cc.o: ../SampleCode/Chapter2/Polynomial.cc
SampleCode/Chapter2/CMakeFiles/Polynomial.dir/Polynomial.cc.o: SampleCode/Chapter2/CMakeFiles/Polynomial.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tang/C_Cpp/Data_Structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object SampleCode/Chapter2/CMakeFiles/Polynomial.dir/Polynomial.cc.o"
	cd /home/tang/C_Cpp/Data_Structure/build/SampleCode/Chapter2 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT SampleCode/Chapter2/CMakeFiles/Polynomial.dir/Polynomial.cc.o -MF CMakeFiles/Polynomial.dir/Polynomial.cc.o.d -o CMakeFiles/Polynomial.dir/Polynomial.cc.o -c /home/tang/C_Cpp/Data_Structure/SampleCode/Chapter2/Polynomial.cc

SampleCode/Chapter2/CMakeFiles/Polynomial.dir/Polynomial.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Polynomial.dir/Polynomial.cc.i"
	cd /home/tang/C_Cpp/Data_Structure/build/SampleCode/Chapter2 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tang/C_Cpp/Data_Structure/SampleCode/Chapter2/Polynomial.cc > CMakeFiles/Polynomial.dir/Polynomial.cc.i

SampleCode/Chapter2/CMakeFiles/Polynomial.dir/Polynomial.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Polynomial.dir/Polynomial.cc.s"
	cd /home/tang/C_Cpp/Data_Structure/build/SampleCode/Chapter2 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tang/C_Cpp/Data_Structure/SampleCode/Chapter2/Polynomial.cc -o CMakeFiles/Polynomial.dir/Polynomial.cc.s

# Object files for target Polynomial
Polynomial_OBJECTS = \
"CMakeFiles/Polynomial.dir/Polynomial.cc.o"

# External object files for target Polynomial
Polynomial_EXTERNAL_OBJECTS =

../SampleCode/Chapter2/bin/Polynomial: SampleCode/Chapter2/CMakeFiles/Polynomial.dir/Polynomial.cc.o
../SampleCode/Chapter2/bin/Polynomial: SampleCode/Chapter2/CMakeFiles/Polynomial.dir/build.make
../SampleCode/Chapter2/bin/Polynomial: SampleCode/Chapter2/CMakeFiles/Polynomial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tang/C_Cpp/Data_Structure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../SampleCode/Chapter2/bin/Polynomial"
	cd /home/tang/C_Cpp/Data_Structure/build/SampleCode/Chapter2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Polynomial.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
SampleCode/Chapter2/CMakeFiles/Polynomial.dir/build: ../SampleCode/Chapter2/bin/Polynomial
.PHONY : SampleCode/Chapter2/CMakeFiles/Polynomial.dir/build

SampleCode/Chapter2/CMakeFiles/Polynomial.dir/clean:
	cd /home/tang/C_Cpp/Data_Structure/build/SampleCode/Chapter2 && $(CMAKE_COMMAND) -P CMakeFiles/Polynomial.dir/cmake_clean.cmake
.PHONY : SampleCode/Chapter2/CMakeFiles/Polynomial.dir/clean

SampleCode/Chapter2/CMakeFiles/Polynomial.dir/depend:
	cd /home/tang/C_Cpp/Data_Structure/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tang/C_Cpp/Data_Structure /home/tang/C_Cpp/Data_Structure/SampleCode/Chapter2 /home/tang/C_Cpp/Data_Structure/build /home/tang/C_Cpp/Data_Structure/build/SampleCode/Chapter2 /home/tang/C_Cpp/Data_Structure/build/SampleCode/Chapter2/CMakeFiles/Polynomial.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : SampleCode/Chapter2/CMakeFiles/Polynomial.dir/depend

