# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/jeonghyejin/gbc/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jeonghyejin/gbc

# Include any dependencies generated for this target.
include CMakeFiles/start_cal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/start_cal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/start_cal.dir/flags.make

CMakeFiles/start_cal.dir/Main.cpp.o: CMakeFiles/start_cal.dir/flags.make
CMakeFiles/start_cal.dir/Main.cpp.o: src/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeonghyejin/gbc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/start_cal.dir/Main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/start_cal.dir/Main.cpp.o -c /home/jeonghyejin/gbc/src/Main.cpp

CMakeFiles/start_cal.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/start_cal.dir/Main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeonghyejin/gbc/src/Main.cpp > CMakeFiles/start_cal.dir/Main.cpp.i

CMakeFiles/start_cal.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/start_cal.dir/Main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeonghyejin/gbc/src/Main.cpp -o CMakeFiles/start_cal.dir/Main.cpp.s

CMakeFiles/start_cal.dir/Main.cpp.o.requires:

.PHONY : CMakeFiles/start_cal.dir/Main.cpp.o.requires

CMakeFiles/start_cal.dir/Main.cpp.o.provides: CMakeFiles/start_cal.dir/Main.cpp.o.requires
	$(MAKE) -f CMakeFiles/start_cal.dir/build.make CMakeFiles/start_cal.dir/Main.cpp.o.provides.build
.PHONY : CMakeFiles/start_cal.dir/Main.cpp.o.provides

CMakeFiles/start_cal.dir/Main.cpp.o.provides.build: CMakeFiles/start_cal.dir/Main.cpp.o


# Object files for target start_cal
start_cal_OBJECTS = \
"CMakeFiles/start_cal.dir/Main.cpp.o"

# External object files for target start_cal
start_cal_EXTERNAL_OBJECTS =

bin/start_cal: CMakeFiles/start_cal.dir/Main.cpp.o
bin/start_cal: CMakeFiles/start_cal.dir/build.make
bin/start_cal: calculator/libcalculator.a
bin/start_cal: calculator/parser/libparser.a
bin/start_cal: calculator/operand/liboperand.a
bin/start_cal: calculator/operator/liboperator.a
bin/start_cal: calculator/libcalculator.a
bin/start_cal: calculator/parser/libparser.a
bin/start_cal: calculator/operand/liboperand.a
bin/start_cal: calculator/operator/liboperator.a
bin/start_cal: CMakeFiles/start_cal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jeonghyejin/gbc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/start_cal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/start_cal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/start_cal.dir/build: bin/start_cal

.PHONY : CMakeFiles/start_cal.dir/build

CMakeFiles/start_cal.dir/requires: CMakeFiles/start_cal.dir/Main.cpp.o.requires

.PHONY : CMakeFiles/start_cal.dir/requires

CMakeFiles/start_cal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/start_cal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/start_cal.dir/clean

CMakeFiles/start_cal.dir/depend:
	cd /home/jeonghyejin/gbc && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jeonghyejin/gbc/src /home/jeonghyejin/gbc/src /home/jeonghyejin/gbc /home/jeonghyejin/gbc /home/jeonghyejin/gbc/CMakeFiles/start_cal.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/start_cal.dir/depend
