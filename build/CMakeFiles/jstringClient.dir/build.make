# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cz0j2j/cplusplus-libraries

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cz0j2j/cplusplus-libraries/build

# Include any dependencies generated for this target.
include CMakeFiles/jstringClient.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/jstringClient.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/jstringClient.dir/flags.make

CMakeFiles/jstringClient.dir/jstringClient.cpp.o: CMakeFiles/jstringClient.dir/flags.make
CMakeFiles/jstringClient.dir/jstringClient.cpp.o: ../jstringClient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cz0j2j/cplusplus-libraries/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/jstringClient.dir/jstringClient.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jstringClient.dir/jstringClient.cpp.o -c /home/cz0j2j/cplusplus-libraries/jstringClient.cpp

CMakeFiles/jstringClient.dir/jstringClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jstringClient.dir/jstringClient.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cz0j2j/cplusplus-libraries/jstringClient.cpp > CMakeFiles/jstringClient.dir/jstringClient.cpp.i

CMakeFiles/jstringClient.dir/jstringClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jstringClient.dir/jstringClient.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cz0j2j/cplusplus-libraries/jstringClient.cpp -o CMakeFiles/jstringClient.dir/jstringClient.cpp.s

CMakeFiles/jstringClient.dir/jstringClient.cpp.o.requires:

.PHONY : CMakeFiles/jstringClient.dir/jstringClient.cpp.o.requires

CMakeFiles/jstringClient.dir/jstringClient.cpp.o.provides: CMakeFiles/jstringClient.dir/jstringClient.cpp.o.requires
	$(MAKE) -f CMakeFiles/jstringClient.dir/build.make CMakeFiles/jstringClient.dir/jstringClient.cpp.o.provides.build
.PHONY : CMakeFiles/jstringClient.dir/jstringClient.cpp.o.provides

CMakeFiles/jstringClient.dir/jstringClient.cpp.o.provides.build: CMakeFiles/jstringClient.dir/jstringClient.cpp.o


# Object files for target jstringClient
jstringClient_OBJECTS = \
"CMakeFiles/jstringClient.dir/jstringClient.cpp.o"

# External object files for target jstringClient
jstringClient_EXTERNAL_OBJECTS =

jstringClient: CMakeFiles/jstringClient.dir/jstringClient.cpp.o
jstringClient: CMakeFiles/jstringClient.dir/build.make
jstringClient: CMakeFiles/jstringClient.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cz0j2j/cplusplus-libraries/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable jstringClient"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jstringClient.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/jstringClient.dir/build: jstringClient

.PHONY : CMakeFiles/jstringClient.dir/build

CMakeFiles/jstringClient.dir/requires: CMakeFiles/jstringClient.dir/jstringClient.cpp.o.requires

.PHONY : CMakeFiles/jstringClient.dir/requires

CMakeFiles/jstringClient.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/jstringClient.dir/cmake_clean.cmake
.PHONY : CMakeFiles/jstringClient.dir/clean

CMakeFiles/jstringClient.dir/depend:
	cd /home/cz0j2j/cplusplus-libraries/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cz0j2j/cplusplus-libraries /home/cz0j2j/cplusplus-libraries /home/cz0j2j/cplusplus-libraries/build /home/cz0j2j/cplusplus-libraries/build /home/cz0j2j/cplusplus-libraries/build/CMakeFiles/jstringClient.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/jstringClient.dir/depend
