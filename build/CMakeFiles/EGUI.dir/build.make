# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/eme/c++/EGUI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eme/c++/EGUI/build

# Include any dependencies generated for this target.
include CMakeFiles/EGUI.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EGUI.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EGUI.dir/flags.make

CMakeFiles/EGUI.dir/src/main.cpp.o: CMakeFiles/EGUI.dir/flags.make
CMakeFiles/EGUI.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eme/c++/EGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EGUI.dir/src/main.cpp.o"
	/usr/bin/x86_64-linux-gnu-g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EGUI.dir/src/main.cpp.o -c /home/eme/c++/EGUI/src/main.cpp

CMakeFiles/EGUI.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EGUI.dir/src/main.cpp.i"
	/usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eme/c++/EGUI/src/main.cpp > CMakeFiles/EGUI.dir/src/main.cpp.i

CMakeFiles/EGUI.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EGUI.dir/src/main.cpp.s"
	/usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eme/c++/EGUI/src/main.cpp -o CMakeFiles/EGUI.dir/src/main.cpp.s

CMakeFiles/EGUI.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/EGUI.dir/src/main.cpp.o.requires

CMakeFiles/EGUI.dir/src/main.cpp.o.provides: CMakeFiles/EGUI.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/EGUI.dir/build.make CMakeFiles/EGUI.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/EGUI.dir/src/main.cpp.o.provides

CMakeFiles/EGUI.dir/src/main.cpp.o.provides.build: CMakeFiles/EGUI.dir/src/main.cpp.o


CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o: CMakeFiles/EGUI.dir/flags.make
CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o: ../src/EGUI_Component.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eme/c++/EGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o"
	/usr/bin/x86_64-linux-gnu-g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o -c /home/eme/c++/EGUI/src/EGUI_Component.cpp

CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.i"
	/usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eme/c++/EGUI/src/EGUI_Component.cpp > CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.i

CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.s"
	/usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eme/c++/EGUI/src/EGUI_Component.cpp -o CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.s

CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o.requires:

.PHONY : CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o.requires

CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o.provides: CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o.requires
	$(MAKE) -f CMakeFiles/EGUI.dir/build.make CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o.provides.build
.PHONY : CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o.provides

CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o.provides.build: CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o


# Object files for target EGUI
EGUI_OBJECTS = \
"CMakeFiles/EGUI.dir/src/main.cpp.o" \
"CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o"

# External object files for target EGUI
EGUI_EXTERNAL_OBJECTS =

EGUI: CMakeFiles/EGUI.dir/src/main.cpp.o
EGUI: CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o
EGUI: CMakeFiles/EGUI.dir/build.make
EGUI: CMakeFiles/EGUI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eme/c++/EGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable EGUI"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EGUI.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EGUI.dir/build: EGUI

.PHONY : CMakeFiles/EGUI.dir/build

CMakeFiles/EGUI.dir/requires: CMakeFiles/EGUI.dir/src/main.cpp.o.requires
CMakeFiles/EGUI.dir/requires: CMakeFiles/EGUI.dir/src/EGUI_Component.cpp.o.requires

.PHONY : CMakeFiles/EGUI.dir/requires

CMakeFiles/EGUI.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EGUI.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EGUI.dir/clean

CMakeFiles/EGUI.dir/depend:
	cd /home/eme/c++/EGUI/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eme/c++/EGUI /home/eme/c++/EGUI /home/eme/c++/EGUI/build /home/eme/c++/EGUI/build /home/eme/c++/EGUI/build/CMakeFiles/EGUI.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EGUI.dir/depend

