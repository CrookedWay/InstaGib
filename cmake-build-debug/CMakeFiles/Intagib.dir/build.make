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
CMAKE_COMMAND = /home/jackson/Downloads/IDEs/clion-2016.3.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/jackson/Downloads/IDEs/clion-2016.3.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jackson/InstaGib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jackson/InstaGib/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Intagib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Intagib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Intagib.dir/flags.make

CMakeFiles/Intagib.dir/main.c.o: CMakeFiles/Intagib.dir/flags.make
CMakeFiles/Intagib.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jackson/InstaGib/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Intagib.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Intagib.dir/main.c.o   -c /home/jackson/InstaGib/main.c

CMakeFiles/Intagib.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Intagib.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jackson/InstaGib/main.c > CMakeFiles/Intagib.dir/main.c.i

CMakeFiles/Intagib.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Intagib.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jackson/InstaGib/main.c -o CMakeFiles/Intagib.dir/main.c.s

CMakeFiles/Intagib.dir/main.c.o.requires:

.PHONY : CMakeFiles/Intagib.dir/main.c.o.requires

CMakeFiles/Intagib.dir/main.c.o.provides: CMakeFiles/Intagib.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Intagib.dir/build.make CMakeFiles/Intagib.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Intagib.dir/main.c.o.provides

CMakeFiles/Intagib.dir/main.c.o.provides.build: CMakeFiles/Intagib.dir/main.c.o


# Object files for target Intagib
Intagib_OBJECTS = \
"CMakeFiles/Intagib.dir/main.c.o"

# External object files for target Intagib
Intagib_EXTERNAL_OBJECTS =

Intagib: CMakeFiles/Intagib.dir/main.c.o
Intagib: CMakeFiles/Intagib.dir/build.make
Intagib: CMakeFiles/Intagib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jackson/InstaGib/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Intagib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Intagib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Intagib.dir/build: Intagib

.PHONY : CMakeFiles/Intagib.dir/build

CMakeFiles/Intagib.dir/requires: CMakeFiles/Intagib.dir/main.c.o.requires

.PHONY : CMakeFiles/Intagib.dir/requires

CMakeFiles/Intagib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Intagib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Intagib.dir/clean

CMakeFiles/Intagib.dir/depend:
	cd /home/jackson/InstaGib/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jackson/InstaGib /home/jackson/InstaGib /home/jackson/InstaGib/cmake-build-debug /home/jackson/InstaGib/cmake-build-debug /home/jackson/InstaGib/cmake-build-debug/CMakeFiles/Intagib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Intagib.dir/depend

