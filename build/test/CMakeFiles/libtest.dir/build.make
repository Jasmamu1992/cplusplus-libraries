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
include test/CMakeFiles/libtest.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/libtest.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/libtest.dir/flags.make

test/CMakeFiles/libtest.dir/unit_tests.o: test/CMakeFiles/libtest.dir/flags.make
test/CMakeFiles/libtest.dir/unit_tests.o: ../test/unit_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cz0j2j/cplusplus-libraries/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/libtest.dir/unit_tests.o"
	cd /home/cz0j2j/cplusplus-libraries/build/test && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libtest.dir/unit_tests.o -c /home/cz0j2j/cplusplus-libraries/test/unit_tests.cpp

test/CMakeFiles/libtest.dir/unit_tests.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libtest.dir/unit_tests.i"
	cd /home/cz0j2j/cplusplus-libraries/build/test && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cz0j2j/cplusplus-libraries/test/unit_tests.cpp > CMakeFiles/libtest.dir/unit_tests.i

test/CMakeFiles/libtest.dir/unit_tests.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libtest.dir/unit_tests.s"
	cd /home/cz0j2j/cplusplus-libraries/build/test && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cz0j2j/cplusplus-libraries/test/unit_tests.cpp -o CMakeFiles/libtest.dir/unit_tests.s

test/CMakeFiles/libtest.dir/unit_tests.o.requires:

.PHONY : test/CMakeFiles/libtest.dir/unit_tests.o.requires

test/CMakeFiles/libtest.dir/unit_tests.o.provides: test/CMakeFiles/libtest.dir/unit_tests.o.requires
	$(MAKE) -f test/CMakeFiles/libtest.dir/build.make test/CMakeFiles/libtest.dir/unit_tests.o.provides.build
.PHONY : test/CMakeFiles/libtest.dir/unit_tests.o.provides

test/CMakeFiles/libtest.dir/unit_tests.o.provides.build: test/CMakeFiles/libtest.dir/unit_tests.o


test/CMakeFiles/libtest.dir/bubblesort_test.o: test/CMakeFiles/libtest.dir/flags.make
test/CMakeFiles/libtest.dir/bubblesort_test.o: ../test/bubblesort_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cz0j2j/cplusplus-libraries/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/libtest.dir/bubblesort_test.o"
	cd /home/cz0j2j/cplusplus-libraries/build/test && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libtest.dir/bubblesort_test.o -c /home/cz0j2j/cplusplus-libraries/test/bubblesort_test.cpp

test/CMakeFiles/libtest.dir/bubblesort_test.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libtest.dir/bubblesort_test.i"
	cd /home/cz0j2j/cplusplus-libraries/build/test && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cz0j2j/cplusplus-libraries/test/bubblesort_test.cpp > CMakeFiles/libtest.dir/bubblesort_test.i

test/CMakeFiles/libtest.dir/bubblesort_test.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libtest.dir/bubblesort_test.s"
	cd /home/cz0j2j/cplusplus-libraries/build/test && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cz0j2j/cplusplus-libraries/test/bubblesort_test.cpp -o CMakeFiles/libtest.dir/bubblesort_test.s

test/CMakeFiles/libtest.dir/bubblesort_test.o.requires:

.PHONY : test/CMakeFiles/libtest.dir/bubblesort_test.o.requires

test/CMakeFiles/libtest.dir/bubblesort_test.o.provides: test/CMakeFiles/libtest.dir/bubblesort_test.o.requires
	$(MAKE) -f test/CMakeFiles/libtest.dir/build.make test/CMakeFiles/libtest.dir/bubblesort_test.o.provides.build
.PHONY : test/CMakeFiles/libtest.dir/bubblesort_test.o.provides

test/CMakeFiles/libtest.dir/bubblesort_test.o.provides.build: test/CMakeFiles/libtest.dir/bubblesort_test.o


# Object files for target libtest
libtest_OBJECTS = \
"CMakeFiles/libtest.dir/unit_tests.o" \
"CMakeFiles/libtest.dir/bubblesort_test.o"

# External object files for target libtest
libtest_EXTERNAL_OBJECTS =

test/libtest: test/CMakeFiles/libtest.dir/unit_tests.o
test/libtest: test/CMakeFiles/libtest.dir/bubblesort_test.o
test/libtest: test/CMakeFiles/libtest.dir/build.make
test/libtest: /usr/local/lib/libgtest.a
test/libtest: test/CMakeFiles/libtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cz0j2j/cplusplus-libraries/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable libtest"
	cd /home/cz0j2j/cplusplus-libraries/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/libtest.dir/build: test/libtest

.PHONY : test/CMakeFiles/libtest.dir/build

test/CMakeFiles/libtest.dir/requires: test/CMakeFiles/libtest.dir/unit_tests.o.requires
test/CMakeFiles/libtest.dir/requires: test/CMakeFiles/libtest.dir/bubblesort_test.o.requires

.PHONY : test/CMakeFiles/libtest.dir/requires

test/CMakeFiles/libtest.dir/clean:
	cd /home/cz0j2j/cplusplus-libraries/build/test && $(CMAKE_COMMAND) -P CMakeFiles/libtest.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/libtest.dir/clean

test/CMakeFiles/libtest.dir/depend:
	cd /home/cz0j2j/cplusplus-libraries/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cz0j2j/cplusplus-libraries /home/cz0j2j/cplusplus-libraries/test /home/cz0j2j/cplusplus-libraries/build /home/cz0j2j/cplusplus-libraries/build/test /home/cz0j2j/cplusplus-libraries/build/test/CMakeFiles/libtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/libtest.dir/depend

