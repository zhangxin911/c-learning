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
CMAKE_SOURCE_DIR = /Users/zhangxin/Desktop/my_github/c-learning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhangxin/Desktop/my_github/c-learning/build

# Include any dependencies generated for this target.
include CMakeFiles/l.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/l.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/l.dir/flags.make

CMakeFiles/l.dir/main.cpp.o: CMakeFiles/l.dir/flags.make
CMakeFiles/l.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhangxin/Desktop/my_github/c-learning/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/l.dir/main.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/l.dir/main.cpp.o -c /Users/zhangxin/Desktop/my_github/c-learning/main.cpp

CMakeFiles/l.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/l.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhangxin/Desktop/my_github/c-learning/main.cpp > CMakeFiles/l.dir/main.cpp.i

CMakeFiles/l.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/l.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhangxin/Desktop/my_github/c-learning/main.cpp -o CMakeFiles/l.dir/main.cpp.s

# Object files for target l
l_OBJECTS = \
"CMakeFiles/l.dir/main.cpp.o"

# External object files for target l
l_EXTERNAL_OBJECTS =

l : CMakeFiles/l.dir/main.cpp.o
l : CMakeFiles/l.dir/build.make
l : CMakeFiles/l.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhangxin/Desktop/my_github/c-learning/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable l"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/l.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/l.dir/build: l

.PHONY : CMakeFiles/l.dir/build

CMakeFiles/l.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/l.dir/cmake_clean.cmake
.PHONY : CMakeFiles/l.dir/clean

CMakeFiles/l.dir/depend:
	cd /Users/zhangxin/Desktop/my_github/c-learning/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhangxin/Desktop/my_github/c-learning /Users/zhangxin/Desktop/my_github/c-learning /Users/zhangxin/Desktop/my_github/c-learning/build /Users/zhangxin/Desktop/my_github/c-learning/build /Users/zhangxin/Desktop/my_github/c-learning/build/CMakeFiles/l.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/l.dir/depend

