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
CMAKE_SOURCE_DIR = /Users/sunjunjiao/Documents/c:c++/SVD_decomposition

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SVD_decomposition.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SVD_decomposition.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SVD_decomposition.dir/flags.make

CMakeFiles/SVD_decomposition.dir/main.cpp.o: CMakeFiles/SVD_decomposition.dir/flags.make
CMakeFiles/SVD_decomposition.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sunjunjiao/Documents/c:c++/SVD_decomposition/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SVD_decomposition.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SVD_decomposition.dir/main.cpp.o -c /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/main.cpp

CMakeFiles/SVD_decomposition.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVD_decomposition.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/main.cpp > CMakeFiles/SVD_decomposition.dir/main.cpp.i

CMakeFiles/SVD_decomposition.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVD_decomposition.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/main.cpp -o CMakeFiles/SVD_decomposition.dir/main.cpp.s

CMakeFiles/SVD_decomposition.dir/svd_decomposition.cpp.o: CMakeFiles/SVD_decomposition.dir/flags.make
CMakeFiles/SVD_decomposition.dir/svd_decomposition.cpp.o: ../svd_decomposition.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sunjunjiao/Documents/c:c++/SVD_decomposition/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SVD_decomposition.dir/svd_decomposition.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SVD_decomposition.dir/svd_decomposition.cpp.o -c /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/svd_decomposition.cpp

CMakeFiles/SVD_decomposition.dir/svd_decomposition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVD_decomposition.dir/svd_decomposition.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/svd_decomposition.cpp > CMakeFiles/SVD_decomposition.dir/svd_decomposition.cpp.i

CMakeFiles/SVD_decomposition.dir/svd_decomposition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVD_decomposition.dir/svd_decomposition.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/svd_decomposition.cpp -o CMakeFiles/SVD_decomposition.dir/svd_decomposition.cpp.s

CMakeFiles/SVD_decomposition.dir/sort_forSVD.cpp.o: CMakeFiles/SVD_decomposition.dir/flags.make
CMakeFiles/SVD_decomposition.dir/sort_forSVD.cpp.o: ../sort_forSVD.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sunjunjiao/Documents/c:c++/SVD_decomposition/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SVD_decomposition.dir/sort_forSVD.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SVD_decomposition.dir/sort_forSVD.cpp.o -c /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/sort_forSVD.cpp

CMakeFiles/SVD_decomposition.dir/sort_forSVD.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SVD_decomposition.dir/sort_forSVD.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/sort_forSVD.cpp > CMakeFiles/SVD_decomposition.dir/sort_forSVD.cpp.i

CMakeFiles/SVD_decomposition.dir/sort_forSVD.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SVD_decomposition.dir/sort_forSVD.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/sort_forSVD.cpp -o CMakeFiles/SVD_decomposition.dir/sort_forSVD.cpp.s

# Object files for target SVD_decomposition
SVD_decomposition_OBJECTS = \
"CMakeFiles/SVD_decomposition.dir/main.cpp.o" \
"CMakeFiles/SVD_decomposition.dir/svd_decomposition.cpp.o" \
"CMakeFiles/SVD_decomposition.dir/sort_forSVD.cpp.o"

# External object files for target SVD_decomposition
SVD_decomposition_EXTERNAL_OBJECTS =

SVD_decomposition: CMakeFiles/SVD_decomposition.dir/main.cpp.o
SVD_decomposition: CMakeFiles/SVD_decomposition.dir/svd_decomposition.cpp.o
SVD_decomposition: CMakeFiles/SVD_decomposition.dir/sort_forSVD.cpp.o
SVD_decomposition: CMakeFiles/SVD_decomposition.dir/build.make
SVD_decomposition: CMakeFiles/SVD_decomposition.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sunjunjiao/Documents/c:c++/SVD_decomposition/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable SVD_decomposition"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SVD_decomposition.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SVD_decomposition.dir/build: SVD_decomposition

.PHONY : CMakeFiles/SVD_decomposition.dir/build

CMakeFiles/SVD_decomposition.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SVD_decomposition.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SVD_decomposition.dir/clean

CMakeFiles/SVD_decomposition.dir/depend:
	cd /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sunjunjiao/Documents/c:c++/SVD_decomposition /Users/sunjunjiao/Documents/c:c++/SVD_decomposition /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/cmake-build-debug /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/cmake-build-debug /Users/sunjunjiao/Documents/c:c++/SVD_decomposition/cmake-build-debug/CMakeFiles/SVD_decomposition.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SVD_decomposition.dir/depend

