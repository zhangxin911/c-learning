# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.17.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.17.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhangxin/Desktop/C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhangxin/Desktop/C++/build

# Include any dependencies generated for this target.
include Worker/CMakeFiles/MathFunctions.dir/depend.make

# Include the progress variables for this target.
include Worker/CMakeFiles/MathFunctions.dir/progress.make

# Include the compile flags for this target's objects.
include Worker/CMakeFiles/MathFunctions.dir/flags.make

Worker/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o: Worker/CMakeFiles/MathFunctions.dir/flags.make
Worker/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o: ../math/MathFunctions.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhangxin/Desktop/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Worker/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o"
	cd /Users/zhangxin/Desktop/C++/build/Worker && /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathFunctions.dir/MathFunctions.cc.o -c /Users/zhangxin/Desktop/C++/math/MathFunctions.cc

Worker/CMakeFiles/MathFunctions.dir/MathFunctions.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathFunctions.dir/MathFunctions.cc.i"
	cd /Users/zhangxin/Desktop/C++/build/Worker && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhangxin/Desktop/C++/math/MathFunctions.cc > CMakeFiles/MathFunctions.dir/MathFunctions.cc.i

Worker/CMakeFiles/MathFunctions.dir/MathFunctions.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathFunctions.dir/MathFunctions.cc.s"
	cd /Users/zhangxin/Desktop/C++/build/Worker && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhangxin/Desktop/C++/math/MathFunctions.cc -o CMakeFiles/MathFunctions.dir/MathFunctions.cc.s

# Object files for target MathFunctions
MathFunctions_OBJECTS = \
"CMakeFiles/MathFunctions.dir/MathFunctions.cc.o"

# External object files for target MathFunctions
MathFunctions_EXTERNAL_OBJECTS =

Worker/libMathFunctions.a: Worker/CMakeFiles/MathFunctions.dir/MathFunctions.cc.o
Worker/libMathFunctions.a: Worker/CMakeFiles/MathFunctions.dir/build.make
Worker/libMathFunctions.a: Worker/CMakeFiles/MathFunctions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhangxin/Desktop/C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMathFunctions.a"
	cd /Users/zhangxin/Desktop/C++/build/Worker && $(CMAKE_COMMAND) -P CMakeFiles/MathFunctions.dir/cmake_clean_target.cmake
	cd /Users/zhangxin/Desktop/C++/build/Worker && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MathFunctions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Worker/CMakeFiles/MathFunctions.dir/build: Worker/libMathFunctions.a

.PHONY : Worker/CMakeFiles/MathFunctions.dir/build

Worker/CMakeFiles/MathFunctions.dir/clean:
	cd /Users/zhangxin/Desktop/C++/build/Worker && $(CMAKE_COMMAND) -P CMakeFiles/MathFunctions.dir/cmake_clean.cmake
.PHONY : Worker/CMakeFiles/MathFunctions.dir/clean

Worker/CMakeFiles/MathFunctions.dir/depend:
	cd /Users/zhangxin/Desktop/C++/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhangxin/Desktop/C++ /Users/zhangxin/Desktop/C++/math /Users/zhangxin/Desktop/C++/build /Users/zhangxin/Desktop/C++/build/Worker /Users/zhangxin/Desktop/C++/build/Worker/CMakeFiles/MathFunctions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Worker/CMakeFiles/MathFunctions.dir/depend
