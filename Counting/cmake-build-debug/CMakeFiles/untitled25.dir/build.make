# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mehrzad/Documents/GitHub/C4001_G42/Counting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mehrzad/Documents/GitHub/C4001_G42/Counting/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled25.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled25.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled25.dir/flags.make

CMakeFiles/untitled25.dir/main.cpp.o: CMakeFiles/untitled25.dir/flags.make
CMakeFiles/untitled25.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mehrzad/Documents/GitHub/C4001_G42/Counting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled25.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled25.dir/main.cpp.o -c /Users/mehrzad/Documents/GitHub/C4001_G42/Counting/main.cpp

CMakeFiles/untitled25.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled25.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mehrzad/Documents/GitHub/C4001_G42/Counting/main.cpp > CMakeFiles/untitled25.dir/main.cpp.i

CMakeFiles/untitled25.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled25.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mehrzad/Documents/GitHub/C4001_G42/Counting/main.cpp -o CMakeFiles/untitled25.dir/main.cpp.s

# Object files for target untitled25
untitled25_OBJECTS = \
"CMakeFiles/untitled25.dir/main.cpp.o"

# External object files for target untitled25
untitled25_EXTERNAL_OBJECTS =

untitled25: CMakeFiles/untitled25.dir/main.cpp.o
untitled25: CMakeFiles/untitled25.dir/build.make
untitled25: CMakeFiles/untitled25.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mehrzad/Documents/GitHub/C4001_G42/Counting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable untitled25"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled25.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled25.dir/build: untitled25

.PHONY : CMakeFiles/untitled25.dir/build

CMakeFiles/untitled25.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled25.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled25.dir/clean

CMakeFiles/untitled25.dir/depend:
	cd /Users/mehrzad/Documents/GitHub/C4001_G42/Counting/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mehrzad/Documents/GitHub/C4001_G42/Counting /Users/mehrzad/Documents/GitHub/C4001_G42/Counting /Users/mehrzad/Documents/GitHub/C4001_G42/Counting/cmake-build-debug /Users/mehrzad/Documents/GitHub/C4001_G42/Counting/cmake-build-debug /Users/mehrzad/Documents/GitHub/C4001_G42/Counting/cmake-build-debug/CMakeFiles/untitled25.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled25.dir/depend
